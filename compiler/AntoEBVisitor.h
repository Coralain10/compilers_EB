
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

    virtual std::any visitStatement(AntoEBParser::StatementContext *context) = 0;

    virtual std::any visitFCall(AntoEBParser::FCallContext *context) = 0;

    virtual std::any visitComp(AntoEBParser::CompContext *context) = 0;

    virtual std::any visitExpr(AntoEBParser::ExprContext *context) = 0;

    virtual std::any visitIfStat(AntoEBParser::IfStatContext *context) = 0;

    virtual std::any visitIfelseStat(AntoEBParser::IfelseStatContext *context) = 0;

    virtual std::any visitElseStat(AntoEBParser::ElseStatContext *context) = 0;

    virtual std::any visitIfElseStat(AntoEBParser::IfElseStatContext *context) = 0;


};

