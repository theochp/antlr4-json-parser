
// Generated from JSON.g4 by ANTLR 4.7.2

#pragma once

#include "antlr4-runtime.h"
#include "JSONVisitor.h"


/**
 * This class provides an empty implementation of JSONVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyJSONVisitor : public JSONVisitor {
public:

  virtual antlrcpp::Any visitJson(JSONParser::JsonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullobj(JSONParser::FullobjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyobj(JSONParser::EmptyobjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPair(JSONParser::PairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullarr(JSONParser::FullarrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyarr(JSONParser::EmptyarrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrval(JSONParser::StrvalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumval(JSONParser::NumvalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObjval(JSONParser::ObjvalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrval(JSONParser::ArrvalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrueval(JSONParser::TruevalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFalseval(JSONParser::FalsevalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullval(JSONParser::NullvalContext *ctx) override {
    return visitChildren(ctx);
  }


};

