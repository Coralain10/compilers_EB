
// Generated from AntoEB.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  AntoEBParser : public antlr4::Parser {
public:
  enum {
    LBRAC = 1, RBRAC = 2, LPAREN = 3, RPAREN = 4, MUL = 5, DIV = 6, ADD = 7, 
    SUB = 8, DDOT = 9, LESS = 10, GREAT = 11, AND = 12, OR = 13, INB = 14, 
    EQ = 15, COMMA = 16, IF = 17, ELSE = 18, RETURN = 19, PRINT = 20, NEWLINE = 21, 
    NUMBER = 22, ID = 23, WS = 24
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleComp = 2, RuleExpr = 3, RuleIf = 4, 
    RuleIfelse = 5, RuleElse = 6, RuleIfElseStruct = 7
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
  class CompContext;
  class ExprContext;
  class IfContext;
  class IfelseContext;
  class ElseContext;
  class IfElseStructContext; 

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
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfElseStatContext : public StatementContext {
  public:
    IfElseStatContext(StatementContext *ctx);

    IfElseStructContext *ifElseStruct();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlankContext : public StatementContext {
  public:
    BlankContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintStatContext : public StatementContext {
  public:
    PrintStatContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprStatContext : public StatementContext {
  public:
    ExprStatContext(StatementContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnStatContext : public StatementContext {
  public:
    ReturnStatContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public StatementContext {
  public:
    AssignContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQ();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  CompContext : public antlr4::ParserRuleContext {
  public:
    CompContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompContext() = default;
    void copyFrom(CompContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NpCompContext : public CompContext {
  public:
    NpCompContext(CompContext *ctx);

    antlr4::Token *COMP = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS();
    antlr4::tree::TerminalNode* LESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GREAT();
    antlr4::tree::TerminalNode* GREAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompContext* comp();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NpAddSubContext : public ExprContext {
  public:
    NpAddSubContext(ExprContext *ctx);

    antlr4::Token *OPH = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NpMulDivContext : public ExprContext {
  public:
    NpMulDivContext(ExprContext *ctx);

    antlr4::Token *OPL = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberContext : public ExprContext {
  public:
    NumberContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public ExprContext {
  public:
    IdContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  IfContext* if_();

  class  IfelseContext : public antlr4::ParserRuleContext {
  public:
    IfelseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  IfelseContext* ifelse();

  class  ElseContext : public antlr4::ParserRuleContext {
  public:
    ElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *LBRAC();
    antlr4::tree::TerminalNode *RBRAC();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseContext* else_();

  class  IfElseStructContext : public antlr4::ParserRuleContext {
  public:
    IfElseStructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfContext *if_();
    std::vector<IfelseContext *> ifelse();
    IfelseContext* ifelse(size_t i);
    ElseContext *else_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfElseStructContext* ifElseStruct();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

