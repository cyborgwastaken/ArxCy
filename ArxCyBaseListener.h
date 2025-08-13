
// Generated from ArxCy.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ArxCyListener.h"


/**
 * This class provides an empty implementation of ArxCyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ArxCyBaseListener : public ArxCyListener {
public:

  virtual void enterProgram(ArxCyParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ArxCyParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDeclaration(ArxCyParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(ArxCyParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterArray_literal(ArxCyParser::Array_literalContext * /*ctx*/) override { }
  virtual void exitArray_literal(ArxCyParser::Array_literalContext * /*ctx*/) override { }

  virtual void enterFunction_decl(ArxCyParser::Function_declContext * /*ctx*/) override { }
  virtual void exitFunction_decl(ArxCyParser::Function_declContext * /*ctx*/) override { }

  virtual void enterParameters(ArxCyParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(ArxCyParser::ParametersContext * /*ctx*/) override { }

  virtual void enterParameter(ArxCyParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ArxCyParser::ParameterContext * /*ctx*/) override { }

  virtual void enterStatement(ArxCyParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ArxCyParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(ArxCyParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ArxCyParser::BlockContext * /*ctx*/) override { }

  virtual void enterIf_statement(ArxCyParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(ArxCyParser::If_statementContext * /*ctx*/) override { }

  virtual void enterFor_statement(ArxCyParser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(ArxCyParser::For_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(ArxCyParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(ArxCyParser::While_statementContext * /*ctx*/) override { }

  virtual void enterDo_while_statement(ArxCyParser::Do_while_statementContext * /*ctx*/) override { }
  virtual void exitDo_while_statement(ArxCyParser::Do_while_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(ArxCyParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(ArxCyParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(ArxCyParser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(ArxCyParser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterExpression(ArxCyParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ArxCyParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment(ArxCyParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ArxCyParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterLogical_or(ArxCyParser::Logical_orContext * /*ctx*/) override { }
  virtual void exitLogical_or(ArxCyParser::Logical_orContext * /*ctx*/) override { }

  virtual void enterLogical_and(ArxCyParser::Logical_andContext * /*ctx*/) override { }
  virtual void exitLogical_and(ArxCyParser::Logical_andContext * /*ctx*/) override { }

  virtual void enterEquality(ArxCyParser::EqualityContext * /*ctx*/) override { }
  virtual void exitEquality(ArxCyParser::EqualityContext * /*ctx*/) override { }

  virtual void enterComparison(ArxCyParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(ArxCyParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterTerm(ArxCyParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(ArxCyParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(ArxCyParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(ArxCyParser::FactorContext * /*ctx*/) override { }

  virtual void enterUnary(ArxCyParser::UnaryContext * /*ctx*/) override { }
  virtual void exitUnary(ArxCyParser::UnaryContext * /*ctx*/) override { }

  virtual void enterPostfix(ArxCyParser::PostfixContext * /*ctx*/) override { }
  virtual void exitPostfix(ArxCyParser::PostfixContext * /*ctx*/) override { }

  virtual void enterPrimary(ArxCyParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(ArxCyParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterArguments(ArxCyParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(ArxCyParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterType(ArxCyParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(ArxCyParser::TypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

