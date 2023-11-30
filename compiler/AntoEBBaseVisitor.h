
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

  virtual std::any visitExprStat(AntoEBParser::ExprStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStat(AntoEBParser::ReturnStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStat(AntoEBParser::PrintStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(AntoEBParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseStat(AntoEBParser::IfElseStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlank(AntoEBParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNpComp(AntoEBParser::NpCompContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNpMulDiv(AntoEBParser::NpMulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNpAddSub(AntoEBParser::NpAddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(AntoEBParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(AntoEBParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(AntoEBParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfelse(AntoEBParser::IfelseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse(AntoEBParser::ElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseStruct(AntoEBParser::IfElseStructContext *ctx) override {
    return visitChildren(ctx);
  }


};

