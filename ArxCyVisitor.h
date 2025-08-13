
// Generated from ArxCy.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ArxCyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ArxCyParser.
 */
class  ArxCyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ArxCyParser.
   */
    virtual std::any visitProgram(ArxCyParser::ProgramContext *context) = 0;

    virtual std::any visitDeclaration(ArxCyParser::DeclarationContext *context) = 0;

    virtual std::any visitArray_literal(ArxCyParser::Array_literalContext *context) = 0;

    virtual std::any visitFunction_decl(ArxCyParser::Function_declContext *context) = 0;

    virtual std::any visitParameters(ArxCyParser::ParametersContext *context) = 0;

    virtual std::any visitParameter(ArxCyParser::ParameterContext *context) = 0;

    virtual std::any visitStatement(ArxCyParser::StatementContext *context) = 0;

    virtual std::any visitBlock(ArxCyParser::BlockContext *context) = 0;

    virtual std::any visitIf_statement(ArxCyParser::If_statementContext *context) = 0;

    virtual std::any visitFor_statement(ArxCyParser::For_statementContext *context) = 0;

    virtual std::any visitWhile_statement(ArxCyParser::While_statementContext *context) = 0;

    virtual std::any visitDo_while_statement(ArxCyParser::Do_while_statementContext *context) = 0;

    virtual std::any visitReturn_statement(ArxCyParser::Return_statementContext *context) = 0;

    virtual std::any visitExpression_statement(ArxCyParser::Expression_statementContext *context) = 0;

    virtual std::any visitExpression(ArxCyParser::ExpressionContext *context) = 0;

    virtual std::any visitAssignment(ArxCyParser::AssignmentContext *context) = 0;

    virtual std::any visitLogical_or(ArxCyParser::Logical_orContext *context) = 0;

    virtual std::any visitLogical_and(ArxCyParser::Logical_andContext *context) = 0;

    virtual std::any visitEquality(ArxCyParser::EqualityContext *context) = 0;

    virtual std::any visitComparison(ArxCyParser::ComparisonContext *context) = 0;

    virtual std::any visitTerm(ArxCyParser::TermContext *context) = 0;

    virtual std::any visitFactor(ArxCyParser::FactorContext *context) = 0;

    virtual std::any visitUnary(ArxCyParser::UnaryContext *context) = 0;

    virtual std::any visitPostfix(ArxCyParser::PostfixContext *context) = 0;

    virtual std::any visitPrimary(ArxCyParser::PrimaryContext *context) = 0;

    virtual std::any visitArguments(ArxCyParser::ArgumentsContext *context) = 0;

    virtual std::any visitType(ArxCyParser::TypeContext *context) = 0;


};

