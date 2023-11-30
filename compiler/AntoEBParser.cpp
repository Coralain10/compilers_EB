
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
      "program", "statement", "fCall", "comp", "expr", "ifStat", "ifelseStat", 
      "elseStat", "ifElseStat"
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
  	4,1,23,130,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,42,8,1,1,2,1,2,1,2,3,
  	2,47,8,2,1,2,1,2,5,2,51,8,2,10,2,12,2,54,9,2,1,2,1,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,5,3,66,8,3,10,3,12,3,69,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,3,4,82,8,4,1,5,1,5,1,5,1,5,4,5,88,8,5,11,5,12,5,89,
  	1,5,1,5,3,5,94,8,5,1,6,1,6,1,6,1,6,1,6,4,6,101,8,6,11,6,12,6,102,1,6,
  	1,6,3,6,107,8,6,1,7,1,7,1,7,4,7,112,8,7,11,7,12,7,113,1,7,1,7,3,7,118,
  	8,7,1,8,1,8,5,8,122,8,8,10,8,12,8,125,9,8,1,8,3,8,128,8,8,1,8,0,0,9,0,
  	2,4,6,8,10,12,14,16,0,3,1,0,11,12,1,0,7,8,1,0,5,6,140,0,21,1,0,0,0,2,
  	41,1,0,0,0,4,43,1,0,0,0,6,57,1,0,0,0,8,81,1,0,0,0,10,83,1,0,0,0,12,95,
  	1,0,0,0,14,108,1,0,0,0,16,119,1,0,0,0,18,20,3,2,1,0,19,18,1,0,0,0,20,
  	23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,24,1,0,0,0,23,21,1,0,0,0,24,
  	25,5,0,0,1,25,1,1,0,0,0,26,27,3,8,4,0,27,28,5,20,0,0,28,42,1,0,0,0,29,
  	30,5,18,0,0,30,31,3,8,4,0,31,32,5,20,0,0,32,42,1,0,0,0,33,34,5,19,0,0,
  	34,35,3,8,4,0,35,36,5,20,0,0,36,42,1,0,0,0,37,38,5,22,0,0,38,39,5,14,
  	0,0,39,42,3,8,4,0,40,42,3,16,8,0,41,26,1,0,0,0,41,29,1,0,0,0,41,33,1,
  	0,0,0,41,37,1,0,0,0,41,40,1,0,0,0,42,3,1,0,0,0,43,44,5,22,0,0,44,46,5,
  	3,0,0,45,47,3,8,4,0,46,45,1,0,0,0,46,47,1,0,0,0,47,52,1,0,0,0,48,49,5,
  	15,0,0,49,51,3,8,4,0,50,48,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,52,53,
  	1,0,0,0,53,55,1,0,0,0,54,52,1,0,0,0,55,56,5,4,0,0,56,5,1,0,0,0,57,58,
  	5,10,0,0,58,59,3,8,4,0,59,67,3,8,4,0,60,61,7,0,0,0,61,62,5,10,0,0,62,
  	63,3,8,4,0,63,64,3,8,4,0,64,66,1,0,0,0,65,60,1,0,0,0,66,69,1,0,0,0,67,
  	65,1,0,0,0,67,68,1,0,0,0,68,7,1,0,0,0,69,67,1,0,0,0,70,71,7,1,0,0,71,
  	72,3,8,4,0,72,73,3,8,4,0,73,82,1,0,0,0,74,75,7,2,0,0,75,76,3,8,4,0,76,
  	77,3,8,4,0,77,82,1,0,0,0,78,82,5,22,0,0,79,82,5,21,0,0,80,82,3,4,2,0,
  	81,70,1,0,0,0,81,74,1,0,0,0,81,78,1,0,0,0,81,79,1,0,0,0,81,80,1,0,0,0,
  	82,9,1,0,0,0,83,84,5,16,0,0,84,85,3,6,3,0,85,87,5,1,0,0,86,88,3,2,1,0,
  	87,86,1,0,0,0,88,89,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,
  	91,93,5,2,0,0,92,94,5,20,0,0,93,92,1,0,0,0,93,94,1,0,0,0,94,11,1,0,0,
  	0,95,96,5,17,0,0,96,97,5,16,0,0,97,98,3,6,3,0,98,100,5,1,0,0,99,101,3,
  	2,1,0,100,99,1,0,0,0,101,102,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,
  	103,104,1,0,0,0,104,106,5,2,0,0,105,107,5,20,0,0,106,105,1,0,0,0,106,
  	107,1,0,0,0,107,13,1,0,0,0,108,109,5,17,0,0,109,111,5,1,0,0,110,112,3,
  	2,1,0,111,110,1,0,0,0,112,113,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,
  	114,115,1,0,0,0,115,117,5,2,0,0,116,118,5,20,0,0,117,116,1,0,0,0,117,
  	118,1,0,0,0,118,15,1,0,0,0,119,123,3,10,5,0,120,122,3,12,6,0,121,120,
  	1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,127,1,0,0,
  	0,125,123,1,0,0,0,126,128,3,14,7,0,127,126,1,0,0,0,127,128,1,0,0,0,128,
  	17,1,0,0,0,14,21,41,46,52,67,81,89,93,102,106,113,117,123,127
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
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7143904) != 0)) {
      setState(18);
      statement();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
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

AntoEBParser::ExprContext* AntoEBParser::StatementContext::expr() {
  return getRuleContext<AntoEBParser::ExprContext>(0);
}

tree::TerminalNode* AntoEBParser::StatementContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}

tree::TerminalNode* AntoEBParser::StatementContext::RETURN() {
  return getToken(AntoEBParser::RETURN, 0);
}

tree::TerminalNode* AntoEBParser::StatementContext::PRINT() {
  return getToken(AntoEBParser::PRINT, 0);
}

tree::TerminalNode* AntoEBParser::StatementContext::ID() {
  return getToken(AntoEBParser::ID, 0);
}

tree::TerminalNode* AntoEBParser::StatementContext::EQ() {
  return getToken(AntoEBParser::EQ, 0);
}

AntoEBParser::IfElseStatContext* AntoEBParser::StatementContext::ifElseStat() {
  return getRuleContext<AntoEBParser::IfElseStatContext>(0);
}


size_t AntoEBParser::StatementContext::getRuleIndex() const {
  return AntoEBParser::RuleStatement;
}


std::any AntoEBParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
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
    setState(41);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      expr();
      setState(27);
      match(AntoEBParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      match(AntoEBParser::RETURN);
      setState(30);
      expr();
      setState(31);
      match(AntoEBParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(33);
      match(AntoEBParser::PRINT);
      setState(34);
      expr();
      setState(35);
      match(AntoEBParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(37);
      match(AntoEBParser::ID);
      setState(38);
      match(AntoEBParser::EQ);
      setState(39);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(40);
      ifElseStat();
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

//----------------- FCallContext ------------------------------------------------------------------

AntoEBParser::FCallContext::FCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::FCallContext::ID() {
  return getToken(AntoEBParser::ID, 0);
}

tree::TerminalNode* AntoEBParser::FCallContext::LPAREN() {
  return getToken(AntoEBParser::LPAREN, 0);
}

tree::TerminalNode* AntoEBParser::FCallContext::RPAREN() {
  return getToken(AntoEBParser::RPAREN, 0);
}

std::vector<AntoEBParser::ExprContext *> AntoEBParser::FCallContext::expr() {
  return getRuleContexts<AntoEBParser::ExprContext>();
}

AntoEBParser::ExprContext* AntoEBParser::FCallContext::expr(size_t i) {
  return getRuleContext<AntoEBParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> AntoEBParser::FCallContext::COMMA() {
  return getTokens(AntoEBParser::COMMA);
}

tree::TerminalNode* AntoEBParser::FCallContext::COMMA(size_t i) {
  return getToken(AntoEBParser::COMMA, i);
}


size_t AntoEBParser::FCallContext::getRuleIndex() const {
  return AntoEBParser::RuleFCall;
}


std::any AntoEBParser::FCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitFCall(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::FCallContext* AntoEBParser::fCall() {
  FCallContext *_localctx = _tracker.createInstance<FCallContext>(_ctx, getState());
  enterRule(_localctx, 4, AntoEBParser::RuleFCall);
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
    setState(43);
    match(AntoEBParser::ID);
    setState(44);
    match(AntoEBParser::LPAREN);
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6291936) != 0)) {
      setState(45);
      expr();
    }
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AntoEBParser::COMMA) {
      setState(48);
      match(AntoEBParser::COMMA);
      setState(49);
      expr();
      setState(54);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(55);
    match(AntoEBParser::RPAREN);
   
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

std::vector<tree::TerminalNode *> AntoEBParser::CompContext::COMP() {
  return getTokens(AntoEBParser::COMP);
}

tree::TerminalNode* AntoEBParser::CompContext::COMP(size_t i) {
  return getToken(AntoEBParser::COMP, i);
}

std::vector<AntoEBParser::ExprContext *> AntoEBParser::CompContext::expr() {
  return getRuleContexts<AntoEBParser::ExprContext>();
}

AntoEBParser::ExprContext* AntoEBParser::CompContext::expr(size_t i) {
  return getRuleContext<AntoEBParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> AntoEBParser::CompContext::AND() {
  return getTokens(AntoEBParser::AND);
}

tree::TerminalNode* AntoEBParser::CompContext::AND(size_t i) {
  return getToken(AntoEBParser::AND, i);
}

std::vector<tree::TerminalNode *> AntoEBParser::CompContext::OR() {
  return getTokens(AntoEBParser::OR);
}

tree::TerminalNode* AntoEBParser::CompContext::OR(size_t i) {
  return getToken(AntoEBParser::OR, i);
}


size_t AntoEBParser::CompContext::getRuleIndex() const {
  return AntoEBParser::RuleComp;
}


std::any AntoEBParser::CompContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitComp(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::CompContext* AntoEBParser::comp() {
  CompContext *_localctx = _tracker.createInstance<CompContext>(_ctx, getState());
  enterRule(_localctx, 6, AntoEBParser::RuleComp);
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
    setState(57);
    match(AntoEBParser::COMP);
    setState(58);
    expr();
    setState(59);
    expr();
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AntoEBParser::AND

    || _la == AntoEBParser::OR) {
      setState(60);
      _la = _input->LA(1);
      if (!(_la == AntoEBParser::AND

      || _la == AntoEBParser::OR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(61);
      match(AntoEBParser::COMP);
      setState(62);
      expr();
      setState(63);
      expr();
      setState(69);
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

std::vector<AntoEBParser::ExprContext *> AntoEBParser::ExprContext::expr() {
  return getRuleContexts<AntoEBParser::ExprContext>();
}

AntoEBParser::ExprContext* AntoEBParser::ExprContext::expr(size_t i) {
  return getRuleContext<AntoEBParser::ExprContext>(i);
}

tree::TerminalNode* AntoEBParser::ExprContext::ADD() {
  return getToken(AntoEBParser::ADD, 0);
}

tree::TerminalNode* AntoEBParser::ExprContext::SUB() {
  return getToken(AntoEBParser::SUB, 0);
}

tree::TerminalNode* AntoEBParser::ExprContext::MUL() {
  return getToken(AntoEBParser::MUL, 0);
}

tree::TerminalNode* AntoEBParser::ExprContext::DIV() {
  return getToken(AntoEBParser::DIV, 0);
}

tree::TerminalNode* AntoEBParser::ExprContext::ID() {
  return getToken(AntoEBParser::ID, 0);
}

tree::TerminalNode* AntoEBParser::ExprContext::NUMBER() {
  return getToken(AntoEBParser::NUMBER, 0);
}

AntoEBParser::FCallContext* AntoEBParser::ExprContext::fCall() {
  return getRuleContext<AntoEBParser::FCallContext>(0);
}


size_t AntoEBParser::ExprContext::getRuleIndex() const {
  return AntoEBParser::RuleExpr;
}


std::any AntoEBParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::ExprContext* AntoEBParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 8, AntoEBParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      antlrcpp::downCast<ExprContext *>(_localctx)->OPL = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == AntoEBParser::ADD

      || _la == AntoEBParser::SUB)) {
        antlrcpp::downCast<ExprContext *>(_localctx)->OPL = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(71);
      expr();
      setState(72);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      antlrcpp::downCast<ExprContext *>(_localctx)->OPH = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == AntoEBParser::MUL

      || _la == AntoEBParser::DIV)) {
        antlrcpp::downCast<ExprContext *>(_localctx)->OPH = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(75);
      expr();
      setState(76);
      expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(78);
      match(AntoEBParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(79);
      match(AntoEBParser::NUMBER);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(80);
      fCall();
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

//----------------- IfStatContext ------------------------------------------------------------------

AntoEBParser::IfStatContext::IfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::IfStatContext::IF() {
  return getToken(AntoEBParser::IF, 0);
}

AntoEBParser::CompContext* AntoEBParser::IfStatContext::comp() {
  return getRuleContext<AntoEBParser::CompContext>(0);
}

tree::TerminalNode* AntoEBParser::IfStatContext::LBRAC() {
  return getToken(AntoEBParser::LBRAC, 0);
}

tree::TerminalNode* AntoEBParser::IfStatContext::RBRAC() {
  return getToken(AntoEBParser::RBRAC, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::IfStatContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::IfStatContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}

tree::TerminalNode* AntoEBParser::IfStatContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}


size_t AntoEBParser::IfStatContext::getRuleIndex() const {
  return AntoEBParser::RuleIfStat;
}


std::any AntoEBParser::IfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIfStat(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::IfStatContext* AntoEBParser::ifStat() {
  IfStatContext *_localctx = _tracker.createInstance<IfStatContext>(_ctx, getState());
  enterRule(_localctx, 10, AntoEBParser::RuleIfStat);
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
    setState(83);
    match(AntoEBParser::IF);
    setState(84);
    comp();
    setState(85);
    match(AntoEBParser::LBRAC);
    setState(87); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(86);
      statement();
      setState(89); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7143904) != 0));
    setState(91);
    match(AntoEBParser::RBRAC);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AntoEBParser::NEWLINE) {
      setState(92);
      match(AntoEBParser::NEWLINE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfelseStatContext ------------------------------------------------------------------

AntoEBParser::IfelseStatContext::IfelseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::IfelseStatContext::ELSE() {
  return getToken(AntoEBParser::ELSE, 0);
}

tree::TerminalNode* AntoEBParser::IfelseStatContext::IF() {
  return getToken(AntoEBParser::IF, 0);
}

AntoEBParser::CompContext* AntoEBParser::IfelseStatContext::comp() {
  return getRuleContext<AntoEBParser::CompContext>(0);
}

tree::TerminalNode* AntoEBParser::IfelseStatContext::LBRAC() {
  return getToken(AntoEBParser::LBRAC, 0);
}

tree::TerminalNode* AntoEBParser::IfelseStatContext::RBRAC() {
  return getToken(AntoEBParser::RBRAC, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::IfelseStatContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::IfelseStatContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}

tree::TerminalNode* AntoEBParser::IfelseStatContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}


size_t AntoEBParser::IfelseStatContext::getRuleIndex() const {
  return AntoEBParser::RuleIfelseStat;
}


std::any AntoEBParser::IfelseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIfelseStat(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::IfelseStatContext* AntoEBParser::ifelseStat() {
  IfelseStatContext *_localctx = _tracker.createInstance<IfelseStatContext>(_ctx, getState());
  enterRule(_localctx, 12, AntoEBParser::RuleIfelseStat);
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
    setState(95);
    match(AntoEBParser::ELSE);
    setState(96);
    match(AntoEBParser::IF);
    setState(97);
    comp();
    setState(98);
    match(AntoEBParser::LBRAC);
    setState(100); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(99);
      statement();
      setState(102); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7143904) != 0));
    setState(104);
    match(AntoEBParser::RBRAC);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AntoEBParser::NEWLINE) {
      setState(105);
      match(AntoEBParser::NEWLINE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatContext ------------------------------------------------------------------

AntoEBParser::ElseStatContext::ElseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AntoEBParser::ElseStatContext::ELSE() {
  return getToken(AntoEBParser::ELSE, 0);
}

tree::TerminalNode* AntoEBParser::ElseStatContext::LBRAC() {
  return getToken(AntoEBParser::LBRAC, 0);
}

tree::TerminalNode* AntoEBParser::ElseStatContext::RBRAC() {
  return getToken(AntoEBParser::RBRAC, 0);
}

std::vector<AntoEBParser::StatementContext *> AntoEBParser::ElseStatContext::statement() {
  return getRuleContexts<AntoEBParser::StatementContext>();
}

AntoEBParser::StatementContext* AntoEBParser::ElseStatContext::statement(size_t i) {
  return getRuleContext<AntoEBParser::StatementContext>(i);
}

tree::TerminalNode* AntoEBParser::ElseStatContext::NEWLINE() {
  return getToken(AntoEBParser::NEWLINE, 0);
}


size_t AntoEBParser::ElseStatContext::getRuleIndex() const {
  return AntoEBParser::RuleElseStat;
}


std::any AntoEBParser::ElseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitElseStat(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::ElseStatContext* AntoEBParser::elseStat() {
  ElseStatContext *_localctx = _tracker.createInstance<ElseStatContext>(_ctx, getState());
  enterRule(_localctx, 14, AntoEBParser::RuleElseStat);
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
    setState(108);
    match(AntoEBParser::ELSE);
    setState(109);
    match(AntoEBParser::LBRAC);
    setState(111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      statement();
      setState(113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7143904) != 0));
    setState(115);
    match(AntoEBParser::RBRAC);
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AntoEBParser::NEWLINE) {
      setState(116);
      match(AntoEBParser::NEWLINE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfElseStatContext ------------------------------------------------------------------

AntoEBParser::IfElseStatContext::IfElseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AntoEBParser::IfStatContext* AntoEBParser::IfElseStatContext::ifStat() {
  return getRuleContext<AntoEBParser::IfStatContext>(0);
}

std::vector<AntoEBParser::IfelseStatContext *> AntoEBParser::IfElseStatContext::ifelseStat() {
  return getRuleContexts<AntoEBParser::IfelseStatContext>();
}

AntoEBParser::IfelseStatContext* AntoEBParser::IfElseStatContext::ifelseStat(size_t i) {
  return getRuleContext<AntoEBParser::IfelseStatContext>(i);
}

AntoEBParser::ElseStatContext* AntoEBParser::IfElseStatContext::elseStat() {
  return getRuleContext<AntoEBParser::ElseStatContext>(0);
}


size_t AntoEBParser::IfElseStatContext::getRuleIndex() const {
  return AntoEBParser::RuleIfElseStat;
}


std::any AntoEBParser::IfElseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AntoEBVisitor*>(visitor))
    return parserVisitor->visitIfElseStat(this);
  else
    return visitor->visitChildren(this);
}

AntoEBParser::IfElseStatContext* AntoEBParser::ifElseStat() {
  IfElseStatContext *_localctx = _tracker.createInstance<IfElseStatContext>(_ctx, getState());
  enterRule(_localctx, 16, AntoEBParser::RuleIfElseStat);
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
    setState(119);
    ifStat();
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        ifelseStat(); 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AntoEBParser::ELSE) {
      setState(126);
      elseStat();
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
