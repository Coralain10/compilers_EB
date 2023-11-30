
// Generated from AntoEB.g4 by ANTLR 4.13.1


#include "AntoEBLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct AntoEBLexerStaticData final {
  AntoEBLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AntoEBLexerStaticData(const AntoEBLexerStaticData&) = delete;
  AntoEBLexerStaticData(AntoEBLexerStaticData&&) = delete;
  AntoEBLexerStaticData& operator=(const AntoEBLexerStaticData&) = delete;
  AntoEBLexerStaticData& operator=(AntoEBLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag antoeblexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
AntoEBLexerStaticData *antoeblexerLexerStaticData = nullptr;

void antoeblexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (antoeblexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(antoeblexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<AntoEBLexerStaticData>(
    std::vector<std::string>{
      "LBRAC", "RBRAC", "LPAREN", "RPAREN", "MUL", "DIV", "ADD", "SUB", 
      "DDOT", "COMP", "AND", "OR", "INB", "EQ", "COMMA", "IF", "ELSE", "RETURN", 
      "PRINT", "NEWLINE", "NUMBER", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,23,137,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,3,19,103,
  	8,19,1,19,1,19,1,20,3,20,108,8,20,1,20,5,20,111,8,20,10,20,12,20,114,
  	9,20,1,20,3,20,117,8,20,1,20,4,20,120,8,20,11,20,12,20,121,1,21,1,21,
  	5,21,126,8,21,10,21,12,21,129,9,21,1,22,4,22,132,8,22,11,22,12,22,133,
  	1,22,1,22,0,0,23,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,1,0,7,2,0,60,60,62,62,2,0,43,43,45,45,1,0,48,57,1,0,46,46,3,0,65,90,
  	95,95,97,122,3,0,48,57,65,90,97,122,3,0,9,10,12,13,32,32,143,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,
  	0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
  	0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,
  	1,0,0,0,1,47,1,0,0,0,3,49,1,0,0,0,5,51,1,0,0,0,7,53,1,0,0,0,9,55,1,0,
  	0,0,11,57,1,0,0,0,13,59,1,0,0,0,15,61,1,0,0,0,17,63,1,0,0,0,19,65,1,0,
  	0,0,21,67,1,0,0,0,23,70,1,0,0,0,25,73,1,0,0,0,27,76,1,0,0,0,29,78,1,0,
  	0,0,31,80,1,0,0,0,33,83,1,0,0,0,35,88,1,0,0,0,37,95,1,0,0,0,39,102,1,
  	0,0,0,41,107,1,0,0,0,43,123,1,0,0,0,45,131,1,0,0,0,47,48,5,123,0,0,48,
  	2,1,0,0,0,49,50,5,125,0,0,50,4,1,0,0,0,51,52,5,40,0,0,52,6,1,0,0,0,53,
  	54,5,41,0,0,54,8,1,0,0,0,55,56,5,42,0,0,56,10,1,0,0,0,57,58,5,47,0,0,
  	58,12,1,0,0,0,59,60,5,43,0,0,60,14,1,0,0,0,61,62,5,45,0,0,62,16,1,0,0,
  	0,63,64,5,58,0,0,64,18,1,0,0,0,65,66,7,0,0,0,66,20,1,0,0,0,67,68,5,38,
  	0,0,68,69,5,38,0,0,69,22,1,0,0,0,70,71,5,124,0,0,71,72,5,124,0,0,72,24,
  	1,0,0,0,73,74,5,46,0,0,74,75,5,46,0,0,75,26,1,0,0,0,76,77,5,61,0,0,77,
  	28,1,0,0,0,78,79,5,44,0,0,79,30,1,0,0,0,80,81,5,105,0,0,81,82,5,102,0,
  	0,82,32,1,0,0,0,83,84,5,101,0,0,84,85,5,108,0,0,85,86,5,115,0,0,86,87,
  	5,101,0,0,87,34,1,0,0,0,88,89,5,114,0,0,89,90,5,101,0,0,90,91,5,116,0,
  	0,91,92,5,117,0,0,92,93,5,114,0,0,93,94,5,110,0,0,94,36,1,0,0,0,95,96,
  	5,112,0,0,96,97,5,114,0,0,97,98,5,105,0,0,98,99,5,110,0,0,99,100,5,116,
  	0,0,100,38,1,0,0,0,101,103,5,13,0,0,102,101,1,0,0,0,102,103,1,0,0,0,103,
  	104,1,0,0,0,104,105,5,10,0,0,105,40,1,0,0,0,106,108,7,1,0,0,107,106,1,
  	0,0,0,107,108,1,0,0,0,108,116,1,0,0,0,109,111,7,2,0,0,110,109,1,0,0,0,
  	111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,115,1,0,0,0,114,112,
  	1,0,0,0,115,117,7,3,0,0,116,112,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,
  	0,118,120,7,2,0,0,119,118,1,0,0,0,120,121,1,0,0,0,121,119,1,0,0,0,121,
  	122,1,0,0,0,122,42,1,0,0,0,123,127,7,4,0,0,124,126,7,5,0,0,125,124,1,
  	0,0,0,126,129,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,44,1,0,0,0,
  	129,127,1,0,0,0,130,132,7,6,0,0,131,130,1,0,0,0,132,133,1,0,0,0,133,131,
  	1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,135,136,6,22,0,0,136,46,1,0,0,
  	0,8,0,102,107,112,116,121,127,133,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  antoeblexerLexerStaticData = staticData.release();
}

}

AntoEBLexer::AntoEBLexer(CharStream *input) : Lexer(input) {
  AntoEBLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *antoeblexerLexerStaticData->atn, antoeblexerLexerStaticData->decisionToDFA, antoeblexerLexerStaticData->sharedContextCache);
}

AntoEBLexer::~AntoEBLexer() {
  delete _interpreter;
}

std::string AntoEBLexer::getGrammarFileName() const {
  return "AntoEB.g4";
}

const std::vector<std::string>& AntoEBLexer::getRuleNames() const {
  return antoeblexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& AntoEBLexer::getChannelNames() const {
  return antoeblexerLexerStaticData->channelNames;
}

const std::vector<std::string>& AntoEBLexer::getModeNames() const {
  return antoeblexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& AntoEBLexer::getVocabulary() const {
  return antoeblexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AntoEBLexer::getSerializedATN() const {
  return antoeblexerLexerStaticData->serializedATN;
}

const atn::ATN& AntoEBLexer::getATN() const {
  return *antoeblexerLexerStaticData->atn;
}




void AntoEBLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  antoeblexerLexerInitialize();
#else
  ::antlr4::internal::call_once(antoeblexerLexerOnceFlag, antoeblexerLexerInitialize);
#endif
}