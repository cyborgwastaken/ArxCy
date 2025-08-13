
// Generated from ArxCy.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ArxCyVisitor.h"


/**
 * This class provides an empty implementation of ArxCyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ArxCyBaseVisitor : public ArxCyVisitor {
public:

  virtual std::any visitProgram(ArxCyParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(ArxCyParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_literal(ArxCyParser::Array_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_decl(ArxCyParser::Function_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameters(ArxCyParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(ArxCyParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ArxCyParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ArxCyParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(ArxCyParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_statement(ArxCyParser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(ArxCyParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDo_while_statement(ArxCyParser::Do_while_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(ArxCyParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_statement(ArxCyParser::Expression_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ArxCyParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ArxCyParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogical_or(ArxCyParser::Logical_orContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogical_and(ArxCyParser::Logical_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality(ArxCyParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(ArxCyParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(ArxCyParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(ArxCyParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary(ArxCyParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix(ArxCyParser::PostfixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(ArxCyParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArguments(ArxCyParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(ArxCyParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

