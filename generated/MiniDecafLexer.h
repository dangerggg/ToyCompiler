
// Generated from MiniDecaf.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  MiniDecafLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, INTEGER = 2, SEMICOLON = 3, COMMA = 4, ADD = 5, SUB = 6, MUL = 7, 
    AND = 8, DIV = 9, NOT = 10, MOD = 11, QUES = 12, COLON = 13, BITNOT = 14, 
    LPAREN = 15, RPAREN = 16, LBRACE = 17, RBRACE = 18, LSQUBRACE = 19, 
    RSQUBRACE = 20, EQ = 21, NEQ = 22, LT = 23, LE = 24, GT = 25, GE = 26, 
    LAND = 27, LOR = 28, ASSIGN = 29, SIZEOF = 30, INT = 31, RET = 32, IF = 33, 
    ELSE = 34, WHILE = 35, FOR = 36, CONTINUE = 37, BREAK = 38, DO = 39, 
    ID = 40
  };

  MiniDecafLexer(antlr4::CharStream *input);
  ~MiniDecafLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

