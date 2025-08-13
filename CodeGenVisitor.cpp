#include "CodeGenVisitor.h"
#include <sstream>
#include <iostream>

ArxCyParser::PrimaryContext* findFirstPrimary(antlr4::tree::ParseTree* node) {
    if (!node) return nullptr;
    if (auto primaryNode = dynamic_cast<ArxCyParser::PrimaryContext*>(node)) return primaryNode;
    for (auto child : node->children) {
        if (auto found = findFirstPrimary(child)) return found;
    }
    return nullptr;
}

ArxCyParser::TermContext* findFirstTerm(antlr4::tree::ParseTree* node) {
    if (!node) return nullptr;
    if (auto termNode = dynamic_cast<ArxCyParser::TermContext*>(node)) return termNode;
    for (auto child : node->children) {
        if (auto found = findFirstTerm(child)) return found;
    }
    return nullptr;
}

std::string CodeGenVisitor::indent() {
    return std::string(indentationLevel * 4, ' ');
}

std::string CodeGenVisitor::mapTypeToC(const std::string& arxType) {
    if (arxType == "int") return "int";
    if (arxType == "flt") return "float";
    if (arxType == "str") return "const char*";
    if (arxType == "bool") return "bool";
    if (arxType == "char") return "char";
    return "void";
}

std::string CodeGenVisitor::getExpressionType(antlr4::tree::ParseTree* ctx) {
    if (!ctx) return "int";
    ArxCyParser::PrimaryContext* primary = findFirstPrimary(ctx);
    if(primary) {
        if (primary->IDENTIFIER()) {
            auto it = variableTypes.find(primary->IDENTIFIER()->getText());
            if (it != variableTypes.end()) return it->second;
        }
        if (primary->INT_LITERAL()) return "int";
        if (primary->FLOAT_LITERAL()) return "flt";
        if (primary->STRING_LITERAL()) return "str";
        if (primary->CHAR_LITERAL()) return "char";
        if (primary->BOOL_LITERAL()) return "bool";
    }
    return "int";
}

std::any CodeGenVisitor::visitProgram(ArxCyParser::ProgramContext *ctx) {
    std::stringstream ss;
    ss << "#include <stdio.h>\n";
    ss << "#include <stdbool.h>\n\n";
    ss << "int main(void) {\n";
    indentationLevel++;
    for (auto child : ctx->children) {
        if (auto decl = dynamic_cast<ArxCyParser::DeclarationContext*>(child)) {
            ss << indent() << std::any_cast<std::string>(visit(decl));
        } else if (auto stmt = dynamic_cast<ArxCyParser::StatementContext*>(child)) {
             ss << std::any_cast<std::string>(visit(stmt));
        }
    }
    indentationLevel--;
    ss << "    return 0;\n";
    ss << "}\n";
    return ss.str();
}

// Updated to store the size of arrays upon declaration.
std::any CodeGenVisitor::visitDeclaration(ArxCyParser::DeclarationContext *ctx) {
    std::string type = ctx->type()->getText();
    std::string identifier = ctx->IDENTIFIER()->getText();
    variableTypes[identifier] = type;
    std::stringstream ss;
    if (ctx->lb && ctx->rb) {
        ss << mapTypeToC(type) << " " << identifier << "[]";
        if (ctx->array_literal()) {
            // Store the size of the array.
            arraySizes[identifier] = ctx->array_literal()->expression().size();
        }
    } else {
        ss << mapTypeToC(type) << " " << identifier;
    }
    if (ctx->expression()) {
        ss << " = " << std::any_cast<std::string>(visit(ctx->expression()));
    } else if (ctx->array_literal()) {
        ss << " = " << std::any_cast<std::string>(visit(ctx->array_literal()));
    }
    ss << ";\n";
    return ss.str();
}

std::any CodeGenVisitor::visitBlock(ArxCyParser::BlockContext *ctx) {
    std::stringstream ss;
    ss << "{\n";
    indentationLevel++;
    for (auto stmt : ctx->statement()) {
        ss << indent() << std::any_cast<std::string>(visit(stmt));
    }
    indentationLevel--;
    ss << indent() << "}\n";
    return ss.str();
}

std::any CodeGenVisitor::visitIf_statement(ArxCyParser::If_statementContext *ctx) {
    std::stringstream ss;
    ss << indent() << "if (" << std::any_cast<std::string>(visit(ctx->expression(0))) << ") "
       << std::any_cast<std::string>(visit(ctx->block(0)));
    for (size_t i = 1; i < ctx->block().size(); ++i) {
        if (ctx->expression(i)) {
             ss << indent() << "else if (" << std::any_cast<std::string>(visit(ctx->expression(i))) << ") "
                << std::any_cast<std::string>(visit(ctx->block(i)));
        }
    }
    if (ctx->el) {
        ss << indent() << "else " << std::any_cast<std::string>(visit(ctx->block().back()));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitFor_statement(ArxCyParser::For_statementContext *ctx) {
    std::stringstream ss;
    std::string declaration = std::any_cast<std::string>(visit(ctx->declaration()));
    declaration.erase(declaration.find_last_not_of(" \n\r\t;") + 1);
    ss << indent() << "for (" << declaration << "; "
       << std::any_cast<std::string>(visit(ctx->expression(0))) << "; "
       << std::any_cast<std::string>(visit(ctx->expression(1))) << ") "
       << std::any_cast<std::string>(visit(ctx->block()));
    return ss.str();
}

std::any CodeGenVisitor::visitWhile_statement(ArxCyParser::While_statementContext *ctx) {
    std::stringstream ss;
    ss << indent() << "while (" << std::any_cast<std::string>(visit(ctx->expression())) << ") "
       << std::any_cast<std::string>(visit(ctx->block()));
    return ss.str();
}

std::any CodeGenVisitor::visitDo_while_statement(ArxCyParser::Do_while_statementContext *ctx) {
    std::stringstream ss;
    ss << indent() << "do " << std::any_cast<std::string>(visit(ctx->block()))
       << indent() << "while (" << std::any_cast<std::string>(visit(ctx->expression())) << ");\n";
    return ss.str();
}

std::any CodeGenVisitor::visitArray_literal(ArxCyParser::Array_literalContext *ctx) {
    std::stringstream ss;
    ss << "{ ";
    if (!ctx->expression().empty()) {
        ss << std::any_cast<std::string>(visit(ctx->expression(0)));
        for (size_t i = 1; i < ctx->expression().size(); ++i) {
            ss << ", " << std::any_cast<std::string>(visit(ctx->expression(i)));
        }
    }
    ss << " }";
    return ss.str();
}

std::any CodeGenVisitor::visitArguments(ArxCyParser::ArgumentsContext *ctx) {
    std::stringstream ss;
     if (ctx && !ctx->expression().empty()) {
        ss << std::any_cast<std::string>(visit(ctx->expression(0)));
        for (size_t i = 1; i < ctx->expression().size(); ++i) {
            ss << ", " << std::any_cast<std::string>(visit(ctx->expression(i)));
        }
    }
    return ss.str();
}

std::any CodeGenVisitor::visitExpression_statement(ArxCyParser::Expression_statementContext *ctx) {
    return indent() + std::any_cast<std::string>(visit(ctx->expression())) + ";\n";
}

std::any CodeGenVisitor::visitAssignment(ArxCyParser::AssignmentContext *ctx) {
    if (ctx->assignment()) {
        std::string lhs = std::any_cast<std::string>(visit(ctx->logical_or()));
        std::string rhs = std::any_cast<std::string>(visit(ctx->assignment()));
        return lhs + " = " + rhs;
    }
    return visit(ctx->logical_or());
}

std::any CodeGenVisitor::visitLogical_or(ArxCyParser::Logical_orContext *ctx) {
    if (ctx->logical_and().size() < 2) return visit(ctx->logical_and(0));
    std::stringstream ss;
    ss << std::any_cast<std::string>(visit(ctx->logical_and(0)));
    for (size_t i = 1; i < ctx->logical_and().size(); ++i) {
        ss << " " << ctx->children[2*i - 1]->getText() << " " << std::any_cast<std::string>(visit(ctx->logical_and(i)));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitLogical_and(ArxCyParser::Logical_andContext *ctx) {
    if (ctx->equality().size() < 2) return visit(ctx->equality(0));
    std::stringstream ss;
    ss << std::any_cast<std::string>(visit(ctx->equality(0)));
    for (size_t i = 1; i < ctx->equality().size(); ++i) {
        ss << " " << ctx->children[2*i - 1]->getText() << " " << std::any_cast<std::string>(visit(ctx->equality(i)));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitEquality(ArxCyParser::EqualityContext *ctx) {
    if (ctx->comparison().size() < 2) return visit(ctx->comparison(0));
    std::stringstream ss;
    ss << std::any_cast<std::string>(visit(ctx->comparison(0)));
    for (size_t i = 1; i < ctx->comparison().size(); ++i) {
        ss << " " << ctx->children[2*i - 1]->getText() << " " << std::any_cast<std::string>(visit(ctx->comparison(i)));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitComparison(ArxCyParser::ComparisonContext *ctx) {
    if (ctx->term().size() < 2) return visit(ctx->term(0));
    std::stringstream ss;
    ss << std::any_cast<std::string>(visit(ctx->term(0)));
    for (size_t i = 1; i < ctx->term().size(); ++i) {
        ss << " " << ctx->children[2*i - 1]->getText() << " " << std::any_cast<std::string>(visit(ctx->term(i)));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitTerm(ArxCyParser::TermContext *ctx) {
    if (ctx->factor().size() < 2) return visit(ctx->factor(0));
    std::stringstream ss;
    ss << std::any_cast<std::string>(visit(ctx->factor(0)));
    for (size_t i = 1; i < ctx->factor().size(); ++i) {
        ss << " " << ctx->children[2*i - 1]->getText() << " " << std::any_cast<std::string>(visit(ctx->factor(i)));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitFactor(ArxCyParser::FactorContext *ctx) {
    if (ctx->unary().size() < 2) return visit(ctx->unary(0));
    std::stringstream ss;
    ss << std::any_cast<std::string>(visit(ctx->unary(0)));
    for (size_t i = 1; i < ctx->unary().size(); ++i) {
        ss << " " << ctx->children[2*i - 1]->getText() << " " << std::any_cast<std::string>(visit(ctx->unary(i)));
    }
    return ss.str();
}

std::any CodeGenVisitor::visitUnary(ArxCyParser::UnaryContext *ctx) {
    if (ctx->op) return ctx->op->getText() + std::any_cast<std::string>(visit(ctx->unary()));
    return visit(ctx->postfix());
}

// Updated to handle the .length property.
std::any CodeGenVisitor::visitPostfix(ArxCyParser::PostfixContext *ctx) {
    if (ctx->primary()) {
        return visit(ctx->primary());
    }

    std::string base = std::any_cast<std::string>(visit(ctx->postfix()));

    if (ctx->op) {
        return base + ctx->op->getText();
    }

    if (ctx->LBRACK()) {
        return base + "[" + std::any_cast<std::string>(visit(ctx->expression())) + "]";
    }

    // New logic to handle array.length
    if (ctx->DOT()) {
        auto it = arraySizes.find(base);
        if (it != arraySizes.end()) {
            return std::to_string(it->second);
        }
        return "0"; // Return 0 if length is not found
    }

    if (ctx->LPAREN()) {
        if (base == "print") {
            if (ctx->arguments()) {
                auto argExpr = ctx->arguments()->expression(0);
                auto termCtx = findFirstTerm(argExpr);
                if (termCtx && termCtx->factor().size() > 1 && termCtx->children.size() > 1 && termCtx->children[1]->getText() == "+") {
                    std::stringstream format;
                    std::stringstream args;
                    for (size_t i = 0; i < termCtx->factor().size(); ++i) {
                        auto factor = termCtx->factor(i);
                        if (i > 0) { args << ", "; }
                        args << std::any_cast<std::string>(visit(factor));
                        std::string type = getExpressionType(factor);
                        if (type == "str") format << "%s";
                        else if (type == "int") format << "%d";
                        else if (type == "flt") format << "%f";
                        else if (type == "char") format << "%c";
                        else format << "%d";
                    }
                    return "printf(\"" + format.str() + "\\n\", " + args.str() + ")";
                } else {
                    std::string exprStr = std::any_cast<std::string>(visit(argExpr));
                    std::string type = getExpressionType(argExpr);
                    std::string formatSpecifier = "%d";
                    if (type == "flt") formatSpecifier = "%f";
                    else if (type == "str") formatSpecifier = "%s";
                    else if (type == "char") formatSpecifier = "%c";
                    return "printf(\"" + formatSpecifier + "\\n\", " + exprStr + ")";
                }
            }
            return "printf(\"\\n\")";
        } else {
            std::stringstream ss;
            ss << base << "(" << std::any_cast<std::string>(visit(ctx->arguments())) << ")";
            return ss.str();
        }
    }
    return base;
}

std::any CodeGenVisitor::visitPrimary(ArxCyParser::PrimaryContext *ctx) {
    if (ctx->IDENTIFIER()) return ctx->IDENTIFIER()->getText();
    if (ctx->INT_LITERAL()) return ctx->INT_LITERAL()->getText();
    if (ctx->FLOAT_LITERAL()) return ctx->FLOAT_LITERAL()->getText();
    if (ctx->STRING_LITERAL()) return ctx->STRING_LITERAL()->getText();
    if (ctx->CHAR_LITERAL()) return ctx->CHAR_LITERAL()->getText();
    if (ctx->BOOL_LITERAL()) return ctx->BOOL_LITERAL()->getText();
    if (ctx->expression()) return "(" + std::any_cast<std::string>(visit(ctx->expression())) + ")";
    if (ctx->array_literal()) return std::any_cast<std::string>(visit(ctx->array_literal()));
    return std::string("");
}
