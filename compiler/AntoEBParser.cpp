
// Generated from AntoEB.g4 by ANTLR 4.13.1


#include "AntoEBVisitor.h"

#include "AntoEBParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct AntoEBParserStaticData final {
  AntoEBParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AntoEBParserStaticData(const AntoEBParserStaticData&) = delete;
  AntoEBParserStaticData(AntoEBParserStaticData&&) = delete;
  AntoEBParserStaticData& operator=(const AntoEBParserStaticData&) = delete;
  AntoEBParserStaticData& operator=(AntoEBParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag antoebParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
AntoEBParserStaticData *antoebParserStaticData = nullptr;

void antoebParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (antoebParserStaticData != nullptr) {
    return;
  }
#else
  assert(antoebParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<AntoEBParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "comp", "expr", "if", "ifelse", "else", "ifElseStruct"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "':'", 
      "", "'&&'", "'||'", "'..'", "'='", "','", "'if'", "'else'", "'return'", 
      "'print'"
    },
    std::vector<std::string>{
      "", "LBRAC", "RBRAC", "LPAREN", "RPAREN", "MUL", "DIV", "ADD", "SUB", 
      "DDOT", "COMP", "AND", "OR", "INB", "EQ", "COMMA", "IF", "ELSE", "RETURN", 
      "PRINT", "NEWLINE", "NUMBER", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,23,114,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,5,0,18,8,0,10,0,12,0,21,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,41,8,1,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,5,2,51,8,2,10,2,12,2,54,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,3,3,66,8,3,1,4,1,4,1,4,1,4,4,4,72,8,4,11,4,12,4,73,1,4,1,
  	4,3,4,78,8,4,1,5,1,5,1,5,1,5,1,5,4,5,85,8,5,11,5,12,5,86,1,5,1,5,3,5,
  	91,8,5,1,6,1,6,1,6,4,6,96,8,6,11,6,12,6,97,1,6,1,6,3,6,102,8,6,1,7,1,
  	7,5,7,106,8,7,10,7,12,7,109,9,7,1,7,3,7,112,8,7,1,7,0,0,8,0,2,4,6,8,10,
  	12,14,0,3,1,0,11,12,1,0,5,6,1,0,7,8,123,0,19,1,0,0,0,2,40,1,0,0,0,4,42,
  	1,0,0,0,6,65,1,0,0,0,8,67,1,0,0,0,10,79,1,0,0,0,12,92,1,0,0,0,14,103,
  	1,0,0,0,16,18,3,2,1,0,17,16,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,0,19,20,
  	1,0,0,0,20,22,1,0,0,0,21,19,1,0,0,0,22,23,5,0,0,1,23,1,1,0,0,0,24,25,
  	3,6,3,0,25,26,5,20,0,0,26,41,1,0,0,0,27,28,5,18,0,0,28,29,3,6,3,0,29,
  	30,5,20,0,0,30,41,1,0,0,0,31,32,5,19,0,0,32,33,3,6,3,0,33,34,5,20,0,0,
  	34,41,1,0,0,0,35,36,5,22,0,0,36,37,5,14,0,0,37,41,3,6,3,0,38,41,3,14,
  	7,0,39,41,5,20,0,0,40,24,1,0,0,0,40,27,1,0,0,0,40,31,1,0,0,0,40,35,1,
  	0,0,0,40,38,1,0,0,0,40,39,1,0,0,0,41,3,1,0,0,0,42,43,5,10,0,0,43,44,3,
  	6,3,0,44,52,3,6,3,0,45,46,7,0,0,0,46,47,5,10,0,0,47,48,3,6,3,0,48,49,
  	3,6,3,0,49,51,1,0,0,0,50,45,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,52,53,
  	1,0,0,0,53,5,1,0,0,0,54,52,1,0,0,0,55,56,7,1,0,0,56,57,3,6,3,0,57,58,
  	3,6,3,0,58,66,1,0,0,0,59,60,7,2,0,0,60,61,3,6,3,0,61,62,3,6,3,0,62,66,
  	1,0,0,0,63,66,5,22,0,0,64,66,5,21,0,0,65,55,1,0,0,0,65,59,1,0,0,0,65,
  	63,1,0,0,0,65,64,1,0,0,0,66,7,1,0,0,0,67,68,5,16,0,0,68,69,3,4,2,0,69,
  	71,5,1,0,0,70,72,3,2,1,0,71,70,1,0,0,0,72,73,1,0,0,0,73,71,1,0,0,0,73,
  	74,1,0,0,0,74,75,1,0,0,0,75,77,5,2,0,0,76,78,5,20,0,0,77,76,1,0,0,0,77,
  	78,1,0,0,0,78,9,1,0,0,0,79,80,5,17,0,0,80,81,5,16,0,0,81,82,3,4,2,0,82,
  	84,5,1,0,0,83,85,3,2,1,0,84,83,1,0,0,0,85,86,1,0,0,0,86,84,1,0,0,0,86,
  	87,1,0,0,0,87,88,1,0,0,0,88,90,5,2,0,0,89,91,5,20,0,0,90,89,1,0,0,0,90,
  	91,1,0,0,0,91,11,1,0,0,0,92,93,5,17,0,0,93,95,5,1,0,0,94,96,3,2,1,0,95,
  	94,1,0,0,0,96,97,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,99,1,0,0,0,99,
  	101,5,2,0,0,100,102,5,20,0,0,101,100,1,0,0,0,101,102,1,0,0,0,102,13,1,
  	0,0,0,103,107,3,8,4,0,104,106,3,10,5,0,105,104,1,0,0,0,106,109,1,0,0,
  	0,107,105,1,0,0,0,107,108,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,110,
  	112,3,12,6,0,111,110,1,0,0,0,111,112,1,0,0,0,112,15,1,0,0,0,12,19,40,
  	52,65,73,77,86,90,97,101,107,111
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  antoebParserStaticData = staticData.release();
}

}

AntoEBParser::AntoEBParser(TokenStream *input) : AntoEBParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

AntoEBParser::AntoEBParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  AntoEBParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *antoebParserStaticData->atn, antoebParserStaticData->decisionToDFA, antoebParserStaticData->sharedContextCache, options);
}

AntoEBParser::~AntoEBParser() {
  delete _interpreter;
}

const atn::ATN& AntoEBParser::getATN() const {
  return *antoebParserStaticData->atn;
}

std::string AntoEBParser::getGrammarFileName() const {
  return "AntoEB.g4";
}

const std::vector<std::string>& AntoEBParser::getRuleNames() const {
  return antoebParserStaticData->ruleNames;
}

const dfa::Vocabulary& AntoEBParser::getVocabulary() const {
  return antoebParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AntoEBParser::getSerializedATN() const {
  return antoebParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

AntoEBParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::ProgramContext::EOF() {
  return getToken(AntoEBParser::EOF, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::ProgramContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::ProgramContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}


size_t AntoEBParser::ProgramContext::getRuleIndex() const {
  return AntoEBParser::RuleProgram;
}


std::any AntoEBParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::ProgramContext* AntoEBParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AntoEBParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8192480) != 0)) {
      setState(16);
      statement();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(22);
    match(AntoEBParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AntoEBParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AntoEBParser::StatementContext::getRuleIndex() const {
  return AntoEBParser::RuleStatement;
}

void AntoEBParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfElseStatContext ------------------------------------------------------------------

AntoEBParser::IfElseStructContext* AntoEBParser::IfElseStatContext::ifElseStruct() {
  return getRuleContext<AntoEBParser::IfElseStructContext>(0);
}

AntoEBParser::IfElseStatContext::IfElseStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::IfElseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIfElseStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* AntoEBParser::BlankContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}

AntoEBParser::BlankContext::BlankContext(StatementContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintStatContext ------------------------------------------------------------------

tree::TerminalNode* AntoEBParser::PrintStatContext::PRINT() {
  return getToken(AntoEBParser::PRINT, 0);
}

AntoEBParser::ExprContext* AntoEBParser::PrintStatContext::expr() {
  return getRuleContext<AntoEBParser::ExprContext>(0);
}

tree::TerminalNode* AntoEBParser::PrintStatContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}

AntoEBParser::PrintStatContext::PrintStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::PrintStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitPrintStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStatContext ------------------------------------------------------------------

AntoEBParser::ExprContext* AntoEBParser::ExprStatContext::expr() {
  return getRuleContext<AntoEBParser::ExprContext>(0);
}

tree::TerminalNode* AntoEBParser::ExprStatContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}

AntoEBParser::ExprStatContext::ExprStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::ExprStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitExprStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatContext ------------------------------------------------------------------

tree::TerminalNode* AntoEBParser::ReturnStatContext::RETURN() {
  return getToken(AntoEBParser::RETURN, 0);
}

AntoEBParser::ExprContext* AntoEBParser::ReturnStatContext::expr() {
  return getRuleContext<AntoEBParser::ExprContext>(0);
}

tree::TerminalNode* AntoEBParser::ReturnStatContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}

AntoEBParser::ReturnStatContext::ReturnStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::ReturnStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitReturnStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* AntoEBParser::AssignContext::ID() {
  return getToken(AntoEBParser::ID, 0);
}

tree::TerminalNode* AntoEBParser::AssignContext::EQ() {
  return getToken(AntoEBParser::EQ, 0);
}

AntoEBParser::ExprContext* AntoEBParser::AssignContext::expr() {
  return getRuleContext<AntoEBParser::ExprContext>(0);
}

AntoEBParser::AssignContext::AssignContext(StatementContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
AntoEBParser::StatementContext* AntoEBParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, AntoEBParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<AntoEBParser::ExprStatContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(24);
      expr();
      setState(25);
      match(AntoEBParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<AntoEBParser::ReturnStatContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(27);
      match(AntoEBParser::RETURN);
      setState(28);
      expr();
      setState(29);
      match(AntoEBParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<AntoEBParser::PrintStatContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(31);
      match(AntoEBParser::PRINT);
      setState(32);
      expr();
      setState(33);
      match(AntoEBParser::NEWLINE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<AntoEBParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(35);
      match(AntoEBParser::ID);
      setState(36);
      match(AntoEBParser::EQ);
      setState(37);
      expr();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<AntoEBParser::IfElseStatContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(38);
      ifElseStruct();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<AntoEBParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(39);
      match(AntoEBParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompContext ------------------------------------------------------------------

AntoEBParser::CompContext::CompContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AntoEBParser::CompContext::getRuleIndex() const {
  return AntoEBParser::RuleComp;
}

void AntoEBParser::CompContext::copyFrom(CompContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NpCompContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> AntoEBParser::NpCompContext::COMP() {
  return getTokens(AntoEBParser::COMP);
}

tree::TerminalNode* AntoEBParser::NpCompContext::COMP(size_t i) {
  return getToken(AntoEBParser::COMP, i);
}

std::vector<AntoEBParser::ExprContext *> AntoEBParser::NpCompContext::expr() {
  return getRuleContexts<AntoEBParser::ExprContext>();
}

AntoEBParser::ExprContext* AntoEBParser::NpCompContext::expr(size_t i) {
  return getRuleContext<AntoEBParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> AntoEBParser::NpCompContext::AND() {
  return getTokens(AntoEBParser::AND);
}

tree::TerminalNode* AntoEBParser::NpCompContext::AND(size_t i) {
  return getToken(AntoEBParser::AND, i);
}

std::vector<tree::TerminalNode *> AntoEBParser::NpCompContext::OR() {
  return getTokens(AntoEBParser::OR);
}

tree::TerminalNode* AntoEBParser::NpCompContext::OR(size_t i) {
  return getToken(AntoEBParser::OR, i);
}

AntoEBParser::NpCompContext::NpCompContext(CompContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::NpCompContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitNpComp(this);
  else
    return visitor->visitChildren(this);
}
AntoEBParser::CompContext* AntoEBParser::comp() {
  CompContext *_localctx = _tracker.createInstance<CompContext>(_ctx, getState());
  enterRule(_localctx, 4, AntoEBParser::RuleComp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<AntoEBParser::NpCompContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(AntoEBParser::COMP);
    setState(43);
    expr();
    setState(44);
    expr();
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AntoEBParser::AND

    || _la == AntoEBParser::OR) {
      setState(45);
      _la = _input->LA(1);
      if (!(_la == AntoEBParser::AND

      || _la == AntoEBParser::OR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(46);
      match(AntoEBParser::COMP);
      setState(47);
      expr();
      setState(48);
      expr();
      setState(54);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

AntoEBParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AntoEBParser::ExprContext::getRuleIndex() const {
  return AntoEBParser::RuleExpr;
}

void AntoEBParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NpAddSubContext ------------------------------------------------------------------

std::vector<AntoEBParser::ExprContext *> AntoEBParser::NpAddSubContext::expr() {
  return getRuleContexts<AntoEBParser::ExprContext>();
}

AntoEBParser::ExprContext* AntoEBParser::NpAddSubContext::expr(size_t i) {
  return getRuleContext<AntoEBParser::ExprContext>(i);
}

tree::TerminalNode* AntoEBParser::NpAddSubContext::ADD() {
  return getToken(AntoEBParser::ADD, 0);
}

tree::TerminalNode* AntoEBParser::NpAddSubContext::SUB() {
  return getToken(AntoEBParser::SUB, 0);
}

AntoEBParser::NpAddSubContext::NpAddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::NpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitNpAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NpMulDivContext ------------------------------------------------------------------

std::vector<AntoEBParser::ExprContext *> AntoEBParser::NpMulDivContext::expr() {
  return getRuleContexts<AntoEBParser::ExprContext>();
}

AntoEBParser::ExprContext* AntoEBParser::NpMulDivContext::expr(size_t i) {
  return getRuleContext<AntoEBParser::ExprContext>(i);
}

tree::TerminalNode* AntoEBParser::NpMulDivContext::MUL() {
  return getToken(AntoEBParser::MUL, 0);
}

tree::TerminalNode* AntoEBParser::NpMulDivContext::DIV() {
  return getToken(AntoEBParser::DIV, 0);
}

AntoEBParser::NpMulDivContext::NpMulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::NpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitNpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* AntoEBParser::NumberContext::NUMBER() {
  return getToken(AntoEBParser::NUMBER, 0);
}

AntoEBParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* AntoEBParser::IdContext::ID() {
  return getToken(AntoEBParser::ID, 0);
}

AntoEBParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


std::any AntoEBParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
AntoEBParser::ExprContext* AntoEBParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 6, AntoEBParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AntoEBParser::MUL:
      case AntoEBParser::DIV: {
        _localctx = _tracker.createInstance<AntoEBParser::NpMulDivContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(55);
        antlrcpp::downCast<NpMulDivContext *>(_localctx)->OPL = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == AntoEBParser::MUL

        || _la == AntoEBParser::DIV)) {
          antlrcpp::downCast<NpMulDivContext *>(_localctx)->OPL = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(56);
        expr();
        setState(57);
        expr();
        break;
      }

      case AntoEBParser::ADD:
      case AntoEBParser::SUB: {
        _localctx = _tracker.createInstance<AntoEBParser::NpAddSubContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(59);
        antlrcpp::downCast<NpAddSubContext *>(_localctx)->OPH = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == AntoEBParser::ADD

        || _la == AntoEBParser::SUB)) {
          antlrcpp::downCast<NpAddSubContext *>(_localctx)->OPH = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(60);
        expr();
        setState(61);
        expr();
        break;
      }

      case AntoEBParser::ID: {
        _localctx = _tracker.createInstance<AntoEBParser::IdContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(63);
        match(AntoEBParser::ID);
        break;
      }

      case AntoEBParser::NUMBER: {
        _localctx = _tracker.createInstance<AntoEBParser::NumberContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(64);
        match(AntoEBParser::NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

AntoEBParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::IfContext::IF() {
  return getToken(AntoEBParser::IF, 0);
}

AntoEBParser::CompContext* AntoEBParser::IfContext::comp() {
  return getRuleContext<AntoEBParser::CompContext>(0);
}

tree::TerminalNode* AntoEBParser::IfContext::LBRAC() {
  return getToken(AntoEBParser::LBRAC, 0);
}

tree::TerminalNode* AntoEBParser::IfContext::RBRAC() {
  return getToken(AntoEBParser::RBRAC, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::IfContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::IfContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}

tree::TerminalNode* AntoEBParser::IfContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}


size_t AntoEBParser::IfContext::getRuleIndex() const {
  return AntoEBParser::RuleIf;
}


std::any AntoEBParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::IfContext* AntoEBParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 8, AntoEBParser::RuleIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(AntoEBParser::IF);
    setState(68);
    comp();
    setState(69);
    match(AntoEBParser::LBRAC);
    setState(71); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      statement();
      setState(73); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8192480) != 0));
    setState(75);
    match(AntoEBParser::RBRAC);
    setState(77);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(76);
      match(AntoEBParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfelseContext ------------------------------------------------------------------

AntoEBParser::IfelseContext::IfelseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::IfelseContext::ELSE() {
  return getToken(AntoEBParser::ELSE, 0);
}

tree::TerminalNode* AntoEBParser::IfelseContext::IF() {
  return getToken(AntoEBParser::IF, 0);
}

AntoEBParser::CompContext* AntoEBParser::IfelseContext::comp() {
  return getRuleContext<AntoEBParser::CompContext>(0);
}

tree::TerminalNode* AntoEBParser::IfelseContext::LBRAC() {
  return getToken(AntoEBParser::LBRAC, 0);
}

tree::TerminalNode* AntoEBParser::IfelseContext::RBRAC() {
  return getToken(AntoEBParser::RBRAC, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::IfelseContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::IfelseContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}

tree::TerminalNode* AntoEBParser::IfelseContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}


size_t AntoEBParser::IfelseContext::getRuleIndex() const {
  return AntoEBParser::RuleIfelse;
}


std::any AntoEBParser::IfelseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIfelse(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::IfelseContext* AntoEBParser::ifelse() {
  IfelseContext *_localctx = _tracker.createInstance<IfelseContext>(_ctx, getState());
  enterRule(_localctx, 10, AntoEBParser::RuleIfelse);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(AntoEBParser::ELSE);
    setState(80);
    match(AntoEBParser::IF);
    setState(81);
    comp();
    setState(82);
    match(AntoEBParser::LBRAC);
    setState(84); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(83);
      statement();
      setState(86); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8192480) != 0));
    setState(88);
    match(AntoEBParser::RBRAC);
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(89);
      match(AntoEBParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseContext ------------------------------------------------------------------

AntoEBParser::ElseContext::ElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::ElseContext::ELSE() {
  return getToken(AntoEBParser::ELSE, 0);
}

tree::TerminalNode* AntoEBParser::ElseContext::LBRAC() {
  return getToken(AntoEBParser::LBRAC, 0);
}

tree::TerminalNode* AntoEBParser::ElseContext::RBRAC() {
  return getToken(AntoEBParser::RBRAC, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::ElseContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::ElseContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}

tree::TerminalNode* AntoEBParser::ElseContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}


size_t AntoEBParser::ElseContext::getRuleIndex() const {
  return AntoEBParser::RuleElse;
}


std::any AntoEBParser::ElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitElse(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::ElseContext* AntoEBParser::else_() {
  ElseContext *_localctx = _tracker.createInstance<ElseContext>(_ctx, getState());
  enterRule(_localctx, 12, AntoEBParser::RuleElse);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(AntoEBParser::ELSE);
    setState(93);
    match(AntoEBParser::LBRAC);
    setState(95); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(94);
      statement();
      setState(97); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8192480) != 0));
    setState(99);
    match(AntoEBParser::RBRAC);
    setState(101);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(100);
      match(AntoEBParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfElseStructContext ------------------------------------------------------------------

AntoEBParser::IfElseStructContext::IfElseStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AntoEBParser::IfContext* AntoEBParser::IfElseStructContext::if_() {
  return getRuleContext<AntoEBParser::IfContext>(0);
}

std::vector<AntoEBParser::IfelseContext *> AntoEBParser::IfElseStructContext::ifelse() {
  return getRuleContexts<AntoEBParser::IfelseContext>();
}

AntoEBParser::IfelseContext* AntoEBParser::IfElseStructContext::ifelse(size_t i) {
  return getRuleContext<AntoEBParser::IfelseContext>(i);
}

AntoEBParser::ElseContext* AntoEBParser::IfElseStructContext::else_() {
  return getRuleContext<AntoEBParser::ElseContext>(0);
}


size_t AntoEBParser::IfElseStructContext::getRuleIndex() const {
  return AntoEBParser::RuleIfElseStruct;
}


std::any AntoEBParser::IfElseStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIfElseStruct(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::IfElseStructContext* AntoEBParser::ifElseStruct() {
  IfElseStructContext *_localctx = _tracker.createInstance<IfElseStructContext>(_ctx, getState());
  enterRule(_localctx, 14, AntoEBParser::RuleIfElseStruct);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(103);
    if_();
    setState(107);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(104);
        ifelse(); 
      }
      setState(109);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AntoEBParser::ELSE) {
      setState(110);
      else_();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void AntoEBParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  antoebParserInitialize();
#else
  ::antlr4::internal::call_once(antoebParserOnceFlag, antoebParserInitialize);
#endif
}
