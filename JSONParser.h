
// Generated from JSON.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  JSONParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, STRING = 10, NUMBER = 11, WS = 12
  };

  enum {
    RuleJson = 0, RuleObj = 1, RulePair = 2, RuleArr = 3, RuleValue = 4
  };

  JSONParser(antlr4::TokenStream *input);
  ~JSONParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class JsonContext;
  class ObjContext;
  class PairContext;
  class ArrContext;
  class ValueContext; 

  class  JsonContext : public antlr4::ParserRuleContext {
  public:
    JsonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonContext* json();

  class  ObjContext : public antlr4::ParserRuleContext {
  public:
    ObjContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ObjContext() = default;
    void copyFrom(ObjContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EmptyobjContext : public ObjContext {
  public:
    EmptyobjContext(ObjContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FullobjContext : public ObjContext {
  public:
    FullobjContext(ObjContext *ctx);

    std::vector<PairContext *> pair();
    PairContext* pair(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ObjContext* obj();

  class  PairContext : public antlr4::ParserRuleContext {
  public:
    PairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    ValueContext *value();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PairContext* pair();

  class  ArrContext : public antlr4::ParserRuleContext {
  public:
    ArrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrContext() = default;
    void copyFrom(ArrContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EmptyarrContext : public ArrContext {
  public:
    EmptyarrContext(ArrContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FullarrContext : public ArrContext {
  public:
    FullarrContext(ArrContext *ctx);

    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrContext* arr();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueContext() = default;
    void copyFrom(ValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumvalContext : public ValueContext {
  public:
    NumvalContext(ValueContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrvalContext : public ValueContext {
  public:
    ArrvalContext(ValueContext *ctx);

    ArrContext *arr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullvalContext : public ValueContext {
  public:
    NullvalContext(ValueContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrvalContext : public ValueContext {
  public:
    StrvalContext(ValueContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TruevalContext : public ValueContext {
  public:
    TruevalContext(ValueContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ObjvalContext : public ValueContext {
  public:
    ObjvalContext(ValueContext *ctx);

    ObjContext *obj();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FalsevalContext : public ValueContext {
  public:
    FalsevalContext(ValueContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueContext* value();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

