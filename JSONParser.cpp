
// Generated from JSON.g4 by ANTLR 4.7.2


#include "JSONVisitor.h"

#include "JSONParser.h"


using namespace antlrcpp;
using namespace antlr4;

JSONParser::JSONParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JSONParser::~JSONParser() {
  delete _interpreter;
}

std::string JSONParser::getGrammarFileName() const {
  return "JSON.g4";
}

const std::vector<std::string>& JSONParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JSONParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- JsonContext ------------------------------------------------------------------

JSONParser::JsonContext::JsonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JSONParser::ValueContext* JSONParser::JsonContext::value() {
  return getRuleContext<JSONParser::ValueContext>(0);
}


size_t JSONParser::JsonContext::getRuleIndex() const {
  return JSONParser::RuleJson;
}

antlrcpp::Any JSONParser::JsonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitJson(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::JsonContext* JSONParser::json() {
  JsonContext *_localctx = _tracker.createInstance<JsonContext>(_ctx, getState());
  enterRule(_localctx, 0, JSONParser::RuleJson);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjContext ------------------------------------------------------------------

JSONParser::ObjContext::ObjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JSONParser::ObjContext::getRuleIndex() const {
  return JSONParser::RuleObj;
}

void JSONParser::ObjContext::copyFrom(ObjContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyobjContext ------------------------------------------------------------------

JSONParser::EmptyobjContext::EmptyobjContext(ObjContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::EmptyobjContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitEmptyobj(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FullobjContext ------------------------------------------------------------------

std::vector<JSONParser::PairContext *> JSONParser::FullobjContext::pair() {
  return getRuleContexts<JSONParser::PairContext>();
}

JSONParser::PairContext* JSONParser::FullobjContext::pair(size_t i) {
  return getRuleContext<JSONParser::PairContext>(i);
}

JSONParser::FullobjContext::FullobjContext(ObjContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::FullobjContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitFullobj(this);
  else
    return visitor->visitChildren(this);
}
JSONParser::ObjContext* JSONParser::obj() {
  ObjContext *_localctx = _tracker.createInstance<ObjContext>(_ctx, getState());
  enterRule(_localctx, 2, JSONParser::RuleObj);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ObjContext *>(_tracker.createInstance<JSONParser::FullobjContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(12);
      match(JSONParser::T__0);
      setState(13);
      pair();
      setState(18);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == JSONParser::T__1) {
        setState(14);
        match(JSONParser::T__1);
        setState(15);
        pair();
        setState(20);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(21);
      match(JSONParser::T__2);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ObjContext *>(_tracker.createInstance<JSONParser::EmptyobjContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(23);
      match(JSONParser::T__0);
      setState(24);
      match(JSONParser::T__2);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PairContext ------------------------------------------------------------------

JSONParser::PairContext::PairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSONParser::PairContext::STRING() {
  return getToken(JSONParser::STRING, 0);
}

JSONParser::ValueContext* JSONParser::PairContext::value() {
  return getRuleContext<JSONParser::ValueContext>(0);
}


size_t JSONParser::PairContext::getRuleIndex() const {
  return JSONParser::RulePair;
}

antlrcpp::Any JSONParser::PairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitPair(this);
  else
    return visitor->visitChildren(this);
}

JSONParser::PairContext* JSONParser::pair() {
  PairContext *_localctx = _tracker.createInstance<PairContext>(_ctx, getState());
  enterRule(_localctx, 4, JSONParser::RulePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    match(JSONParser::STRING);
    setState(28);
    match(JSONParser::T__3);
    setState(29);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrContext ------------------------------------------------------------------

JSONParser::ArrContext::ArrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JSONParser::ArrContext::getRuleIndex() const {
  return JSONParser::RuleArr;
}

void JSONParser::ArrContext::copyFrom(ArrContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyarrContext ------------------------------------------------------------------

JSONParser::EmptyarrContext::EmptyarrContext(ArrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::EmptyarrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitEmptyarr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FullarrContext ------------------------------------------------------------------

std::vector<JSONParser::ValueContext *> JSONParser::FullarrContext::value() {
  return getRuleContexts<JSONParser::ValueContext>();
}

JSONParser::ValueContext* JSONParser::FullarrContext::value(size_t i) {
  return getRuleContext<JSONParser::ValueContext>(i);
}

JSONParser::FullarrContext::FullarrContext(ArrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::FullarrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitFullarr(this);
  else
    return visitor->visitChildren(this);
}
JSONParser::ArrContext* JSONParser::arr() {
  ArrContext *_localctx = _tracker.createInstance<ArrContext>(_ctx, getState());
  enterRule(_localctx, 6, JSONParser::RuleArr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ArrContext *>(_tracker.createInstance<JSONParser::FullarrContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(31);
      match(JSONParser::T__4);
      setState(32);
      value();
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == JSONParser::T__1) {
        setState(33);
        match(JSONParser::T__1);
        setState(34);
        value();
        setState(39);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(40);
      match(JSONParser::T__5);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ArrContext *>(_tracker.createInstance<JSONParser::EmptyarrContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(42);
      match(JSONParser::T__4);
      setState(43);
      match(JSONParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

JSONParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JSONParser::ValueContext::getRuleIndex() const {
  return JSONParser::RuleValue;
}

void JSONParser::ValueContext::copyFrom(ValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumvalContext ------------------------------------------------------------------

tree::TerminalNode* JSONParser::NumvalContext::NUMBER() {
  return getToken(JSONParser::NUMBER, 0);
}

JSONParser::NumvalContext::NumvalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::NumvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitNumval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrvalContext ------------------------------------------------------------------

JSONParser::ArrContext* JSONParser::ArrvalContext::arr() {
  return getRuleContext<JSONParser::ArrContext>(0);
}

JSONParser::ArrvalContext::ArrvalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::ArrvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitArrval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullvalContext ------------------------------------------------------------------

JSONParser::NullvalContext::NullvalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::NullvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitNullval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrvalContext ------------------------------------------------------------------

tree::TerminalNode* JSONParser::StrvalContext::STRING() {
  return getToken(JSONParser::STRING, 0);
}

JSONParser::StrvalContext::StrvalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::StrvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitStrval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TruevalContext ------------------------------------------------------------------

JSONParser::TruevalContext::TruevalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::TruevalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitTrueval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ObjvalContext ------------------------------------------------------------------

JSONParser::ObjContext* JSONParser::ObjvalContext::obj() {
  return getRuleContext<JSONParser::ObjContext>(0);
}

JSONParser::ObjvalContext::ObjvalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::ObjvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitObjval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FalsevalContext ------------------------------------------------------------------

JSONParser::FalsevalContext::FalsevalContext(ValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any JSONParser::FalsevalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JSONVisitor*>(visitor))
    return parserVisitor->visitFalseval(this);
  else
    return visitor->visitChildren(this);
}
JSONParser::ValueContext* JSONParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 8, JSONParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JSONParser::STRING: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::StrvalContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(46);
        match(JSONParser::STRING);
        break;
      }

      case JSONParser::NUMBER: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::NumvalContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(JSONParser::NUMBER);
        break;
      }

      case JSONParser::T__0: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::ObjvalContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(48);
        obj();
        break;
      }

      case JSONParser::T__4: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::ArrvalContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(49);
        arr();
        break;
      }

      case JSONParser::T__6: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::TruevalContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(50);
        match(JSONParser::T__6);
        break;
      }

      case JSONParser::T__7: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::FalsevalContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(51);
        match(JSONParser::T__7);
        break;
      }

      case JSONParser::T__8: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<JSONParser::NullvalContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(52);
        match(JSONParser::T__8);
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

// Static vars and initialization.
std::vector<dfa::DFA> JSONParser::_decisionToDFA;
atn::PredictionContextCache JSONParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JSONParser::_atn;
std::vector<uint16_t> JSONParser::_serializedATN;

std::vector<std::string> JSONParser::_ruleNames = {
  "json", "obj", "pair", "arr", "value"
};

std::vector<std::string> JSONParser::_literalNames = {
  "", "'{'", "','", "'}'", "':'", "'['", "']'", "'true'", "'false'", "'null'"
};

std::vector<std::string> JSONParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "STRING", "NUMBER", "WS"
};

dfa::Vocabulary JSONParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JSONParser::_tokenNames;

JSONParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xe, 0x3a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x13, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x16, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x1c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x26, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0x29, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x2f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x38, 0xa, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0x2, 0x2, 0x2, 0x3e, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x37, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x5, 0xa, 
    0x6, 0x2, 0xd, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x7, 0x3, 0x2, 0x2, 
    0xf, 0x14, 0x5, 0x6, 0x4, 0x2, 0x10, 0x11, 0x7, 0x4, 0x2, 0x2, 0x11, 
    0x13, 0x5, 0x6, 0x4, 0x2, 0x12, 0x10, 0x3, 0x2, 0x2, 0x2, 0x13, 0x16, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x15, 0x17, 0x3, 0x2, 0x2, 0x2, 0x16, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x18, 0x7, 0x5, 0x2, 0x2, 0x18, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x19, 0x1a, 0x7, 0x3, 0x2, 0x2, 0x1a, 0x1c, 0x7, 0x5, 0x2, 0x2, 
    0x1b, 0xe, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0xc, 0x2, 0x2, 0x1e, 0x1f, 
    0x7, 0x6, 0x2, 0x2, 0x1f, 0x20, 0x5, 0xa, 0x6, 0x2, 0x20, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x7, 0x2, 0x2, 0x22, 0x27, 0x5, 0xa, 
    0x6, 0x2, 0x23, 0x24, 0x7, 0x4, 0x2, 0x2, 0x24, 0x26, 0x5, 0xa, 0x6, 
    0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0x7, 0x8, 0x2, 0x2, 0x2b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 
    0x7, 0x2, 0x2, 0x2d, 0x2f, 0x7, 0x8, 0x2, 0x2, 0x2e, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x38, 0x7, 0xc, 0x2, 0x2, 0x31, 0x38, 0x7, 0xd, 0x2, 0x2, 
    0x32, 0x38, 0x5, 0x4, 0x3, 0x2, 0x33, 0x38, 0x5, 0x8, 0x5, 0x2, 0x34, 
    0x38, 0x7, 0x9, 0x2, 0x2, 0x35, 0x38, 0x7, 0xa, 0x2, 0x2, 0x36, 0x38, 
    0x7, 0xb, 0x2, 0x2, 0x37, 0x30, 0x3, 0x2, 0x2, 0x2, 0x37, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x32, 0x3, 0x2, 0x2, 0x2, 0x37, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x7, 0x14, 0x1b, 0x27, 0x2e, 0x37, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JSONParser::Initializer JSONParser::_init;
