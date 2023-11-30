
// Generated from AntoEB.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "AntoEBVisitor.h"


/**
 * This class provides an empty implementation of AntoEBVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AntoEBBaseVisitor : public AntoEBVisitor {
public:

  virtual std::any visitProgram(AntoEBParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(AntoEBParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFCall(AntoEBParser::FCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComp(AntoEBParser::CompContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(AntoEBParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStat(AntoEBParser::IfStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfelseStat(AntoEBParser::IfelseStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStat(AntoEBParser::ElseStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseStat(AntoEBParser::IfElseStatContext *ctx) override {
    return visitChildren(ctx);
  }


};

