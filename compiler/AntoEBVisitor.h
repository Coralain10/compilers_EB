
// Generated from AntoEB.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "AntoEBParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by AntoEBParser.
 */
class  AntoEBVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AntoEBParser.
   */
    virtual std::any visitProgram(AntoEBParser::ProgramContext *context) = 0;

    virtual std::any visitExprStat(AntoEBParser::ExprStatContext *context) = 0;

    virtual std::any visitReturnStat(AntoEBParser::ReturnStatContext *context) = 0;

    virtual std::any visitPrintStat(AntoEBParser::PrintStatContext *context) = 0;

    virtual std::any visitAssign(AntoEBParser::AssignContext *context) = 0;

    virtual std::any visitIfElseStat(AntoEBParser::IfElseStatContext *context) = 0;

    virtual std::any visitBlank(AntoEBParser::BlankContext *context) = 0;

    virtual std::any visitNpComp(AntoEBParser::NpCompContext *context) = 0;

    virtual std::any visitNpMulDiv(AntoEBParser::NpMulDivContext *context) = 0;

    virtual std::any visitNpAddSub(AntoEBParser::NpAddSubContext *context) = 0;

    virtual std::any visitId(AntoEBParser::IdContext *context) = 0;

    virtual std::any visitNumber(AntoEBParser::NumberContext *context) = 0;

    virtual std::any visitIf(AntoEBParser::IfContext *context) = 0;

    virtual std::any visitIfelse(AntoEBParser::IfelseContext *context) = 0;

    virtual std::any visitElse(AntoEBParser::ElseContext *context) = 0;

    virtual std::any visitIfElseStruct(AntoEBParser::IfElseStructContext *context) = 0;


};

