
// Generated from JSON.g4 by ANTLR 4.7.2

#pragma once

#include <iostream>

#include "antlr4-runtime.h"
#include "JSONVisitor.h"

using namespace std;

/**
 * This class provides an empty implementation of JSONVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyJSONVisitor : public JSONVisitor {
public:

  virtual antlrcpp::Any visitJson(JSONParser::JsonContext *ctx) override {
    auto value = visit(ctx->value()).as<string>();
    cout << value << endl;
    return value;
  }

  virtual antlrcpp::Any visitFullobj(JSONParser::FullobjContext *ctx) override {
    auto value = visit(ctx->pair(0)).as<string>();
    for (int i = 1; i < ctx->pair().size(); ++i) {
      value += "," + visit(ctx->pair(i)).as<string>();
    }
    return "{" + value + "}";
  }

  virtual antlrcpp::Any visitEmptyobj(JSONParser::EmptyobjContext *ctx) override {
    return string("{}");
  }

  virtual antlrcpp::Any visitPair(JSONParser::PairContext *ctx) override {
    return ctx->STRING()->getText() + ":" + visit(ctx->value()).as<string>();
  }

  virtual antlrcpp::Any visitFullarr(JSONParser::FullarrContext *ctx) override {
    auto value = visit(ctx->value(0)).as<string>();
    for (int i = 1; i < ctx->value().size(); ++i) {
      value += "," + visit(ctx->value(i)).as<string>();
    }
    return "[" + value + "]";
  }

  virtual antlrcpp::Any visitEmptyarr(JSONParser::EmptyarrContext *ctx) override {
    return string("[]");
  }

  virtual antlrcpp::Any visitStrval(JSONParser::StrvalContext *ctx) override {
    return ctx->STRING()->getText();
  }

  virtual antlrcpp::Any visitNumval(JSONParser::NumvalContext *ctx) override {
    return ctx->NUMBER()->getText();
  }

  virtual antlrcpp::Any visitObjval(JSONParser::ObjvalContext *ctx) override {
    return visit(ctx->obj());
  }

  virtual antlrcpp::Any visitArrval(JSONParser::ArrvalContext *ctx) override {
    return visit(ctx->arr());
  }

  virtual antlrcpp::Any visitTrueval(JSONParser::TruevalContext *ctx) override {
    return string("true");
  }

  virtual antlrcpp::Any visitFalseval(JSONParser::FalsevalContext *ctx) override {
    return string("false");
  }

  virtual antlrcpp::Any visitNullval(JSONParser::NullvalContext *ctx) override {
    return string("null");
  }


};

