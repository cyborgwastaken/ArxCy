#pragma once

#include "ArxCyBaseVisitor.h"
#include <map>
#include <string>

class CodeGenVisitor : public ArxCyBaseVisitor {
private:
    std::map<std::string, std::string> variableTypes;
    // New map to store the size of each declared array.
    std::map<std::string, int> arraySizes;
    int indentationLevel = 0;

    std::string indent();
    std::string mapTypeToC(const std::string& arxType);
    std::string getExpressionType(antlr4::tree::ParseTree* ctx);

public:
    virtual std::any visitProgram(ArxCyParser::ProgramContext *ctx) override;
    virtual std::any visitDeclaration(ArxCyParser::DeclarationContext *ctx) override;
    virtual std::any visitExpression_statement(ArxCyParser::Expression_statementContext *ctx) override;
    
    virtual std::any visitBlock(ArxCyParser::BlockContext *ctx) override;
    virtual std::any visitIf_statement(ArxCyParser::If_statementContext *ctx) override;
    virtual std::any visitFor_statement(ArxCyParser::For_statementContext *ctx) override;
    virtual std::any visitWhile_statement(ArxCyParser::While_statementContext *ctx) override;
    virtual std::any visitDo_while_statement(ArxCyParser::Do_while_statementContext *ctx) override;
    virtual std::any visitArray_literal(ArxCyParser::Array_literalContext *ctx) override;
    virtual std::any visitArguments(ArxCyParser::ArgumentsContext *ctx) override;

    virtual std::any visitAssignment(ArxCyParser::AssignmentContext *ctx) override;
    virtual std::any visitLogical_or(ArxCyParser::Logical_orContext *ctx) override;
    virtual std::any visitLogical_and(ArxCyParser::Logical_andContext *ctx) override;
    virtual std::any visitEquality(ArxCyParser::EqualityContext *ctx) override;
    virtual std::any visitComparison(ArxCyParser::ComparisonContext *ctx) override;
    virtual std::any visitTerm(ArxCyParser::TermContext *ctx) override;
    virtual std::any visitFactor(ArxCyParser::FactorContext *ctx) override;
    virtual std::any visitUnary(ArxCyParser::UnaryContext *ctx) override;
    virtual std::any visitPostfix(ArxCyParser::PostfixContext *ctx) override;
    virtual std::any visitPrimary(ArxCyParser::PrimaryContext *ctx) override;
};
