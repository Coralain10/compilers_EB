
// Generated from AntoEB.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  AntoEBParser : public antlr4::Parser {
public:
  enum {
    LBRAC = 1, RBRAC = 2, LPAREN = 3, RPAREN = 4, MUL = 5, DIV = 6, ADD = 7, 
    SUB = 8, DDOT = 9, COMP = 10, AND = 11, OR = 12, INB = 13, EQ = 14, 
    COMMA = 15, IF = 16, ELSE = 17, RETURN = 18, PRINT = 19, NEWLINE = 20, 
    NUMBER = 21, ID = 22, WS = 23
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleFCall = 2, RuleComp = 3, RuleExpr = 4, 
    RuleIfStat = 5, RuleIfelseStat = 6, RuleElseStat = 7, RuleIfElseStat = 8
  };

  explicit AntoEBParser(antlr4::TokenStream *input);

  AntoEBParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AntoEBParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class FCallContext;
  class CompContext;
  class ExprContext;
  class IfStatContext;
  class IfelseStatContext;
  class ElseStatContext;
  class IfElseStatContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQ();
    IfElseStatContext *ifElseStat();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  FCallContext : public antlr4::ParserRuleContext {
  public:
    FCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FCallContext* fCall();

  class  CompContext : public antlr4::ParserRuleContext {
  public:
    CompContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMP();
    antlr4::tree::TerminalNode* COMP(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompContext* comp();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *OPL = nullptr;
    antlr4::Token *OPH = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();
    FCallContext *fCall();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  IfStatContext : public antlr4::ParserRuleContext {
  public:
    IfStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    CompContext *comp();
    antlr4::tree::TerminalNode *LBRAC();
    antlr4::tree::TerminalNode *RBRAC();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatContext* ifStat();

  class  IfelseStatContext : public antlr4::ParserRuleContext {
  public:
    IfelseStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IF();
    CompContext *comp();
    antlr4::tree::TerminalNode *LBRAC();
    antlr4::tree::TerminalNode *RBRAC();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfelseStatContext* ifelseStat();

  class  ElseStatContext : public antlr4::ParserRuleContext {
  public:
    ElseStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *LBRAC();
    antlr4::tree::TerminalNode *RBRAC();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatContext* elseStat();

  class  IfElseStatContext : public antlr4::ParserRuleContext {
  public:
    IfElseStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStatContext *ifStat();
    std::vector<IfelseStatContext *> ifelseStat();
    IfelseStatContext* ifelseStat(size_t i);
    ElseStatContext *elseStat();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfElseStatContext* ifElseStat();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

