
// Generated from AntoEB.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  AntoEBLexer : public antlr4::Lexer {
public:
  enum {
    LBRAC = 1, RBRAC = 2, LPAREN = 3, RPAREN = 4, MUL = 5, DIV = 6, ADD = 7, 
    SUB = 8, DDOT = 9, LESS = 10, GREAT = 11, AND = 12, OR = 13, INB = 14, 
    EQ = 15, COMMA = 16, IF = 17, ELSE = 18, RETURN = 19, PRINT = 20, NEWLINE = 21, 
    NUMBER = 22, ID = 23, WS = 24
  };

  explicit AntoEBLexer(antlr4::CharStream *input);

  ~AntoEBLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

