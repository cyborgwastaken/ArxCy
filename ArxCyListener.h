
// Generated from ArxCy.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ArxCyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ArxCyParser.
 */
class  ArxCyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ArxCyParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ArxCyParser::ProgramContext *ctx) = 0;

  virtual void enterDeclaration(ArxCyParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(ArxCyParser::DeclarationContext *ctx) = 0;

  virtual void enterArray_literal(ArxCyParser::Array_literalContext *ctx) = 0;
  virtual void exitArray_literal(ArxCyParser::Array_literalContext *ctx) = 0;

  virtual void enterFunction_decl(ArxCyParser::Function_declContext *ctx) = 0;
  virtual void exitFunction_decl(ArxCyParser::Function_declContext *ctx) = 0;

  virtual void enterParameters(ArxCyParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(ArxCyParser::ParametersContext *ctx) = 0;

  virtual void enterParameter(ArxCyParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(ArxCyParser::ParameterContext *ctx) = 0;

  virtual void enterStatement(ArxCyParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ArxCyParser::StatementContext *ctx) = 0;

  virtual void enterBlock(ArxCyParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ArxCyParser::BlockContext *ctx) = 0;

  virtual void enterIf_statement(ArxCyParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(ArxCyParser::If_statementContext *ctx) = 0;

  virtual void enterFor_statement(ArxCyParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(ArxCyParser::For_statementContext *ctx) = 0;

  virtual void enterWhile_statement(ArxCyParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(ArxCyParser::While_statementContext *ctx) = 0;

  virtual void enterDo_while_statement(ArxCyParser::Do_while_statementContext *ctx) = 0;
  virtual void exitDo_while_statement(ArxCyParser::Do_while_statementContext *ctx) = 0;

  virtual void enterReturn_statement(ArxCyParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(ArxCyParser::Return_statementContext *ctx) = 0;

  virtual void enterExpression_statement(ArxCyParser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(ArxCyParser::Expression_statementContext *ctx) = 0;

  virtual void enterExpression(ArxCyParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ArxCyParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignment(ArxCyParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ArxCyParser::AssignmentContext *ctx) = 0;

  virtual void enterLogical_or(ArxCyParser::Logical_orContext *ctx) = 0;
  virtual void exitLogical_or(ArxCyParser::Logical_orContext *ctx) = 0;

  virtual void enterLogical_and(ArxCyParser::Logical_andContext *ctx) = 0;
  virtual void exitLogical_and(ArxCyParser::Logical_andContext *ctx) = 0;

  virtual void enterEquality(ArxCyParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(ArxCyParser::EqualityContext *ctx) = 0;

  virtual void enterComparison(ArxCyParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(ArxCyParser::ComparisonContext *ctx) = 0;

  virtual void enterTerm(ArxCyParser::TermContext *ctx) = 0;
  virtual void exitTerm(ArxCyParser::TermContext *ctx) = 0;

  virtual void enterFactor(ArxCyParser::FactorContext *ctx) = 0;
  virtual void exitFactor(ArxCyParser::FactorContext *ctx) = 0;

  virtual void enterUnary(ArxCyParser::UnaryContext *ctx) = 0;
  virtual void exitUnary(ArxCyParser::UnaryContext *ctx) = 0;

  virtual void enterPostfix(ArxCyParser::PostfixContext *ctx) = 0;
  virtual void exitPostfix(ArxCyParser::PostfixContext *ctx) = 0;

  virtual void enterPrimary(ArxCyParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(ArxCyParser::PrimaryContext *ctx) = 0;

  virtual void enterArguments(ArxCyParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(ArxCyParser::ArgumentsContext *ctx) = 0;

  virtual void enterType(ArxCyParser::TypeContext *ctx) = 0;
  virtual void exitType(ArxCyParser::TypeContext *ctx) = 0;


};

