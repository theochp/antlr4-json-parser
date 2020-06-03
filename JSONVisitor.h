
// Generated from JSON.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "JSONParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by JSONParser.
 */
class  JSONVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by JSONParser.
   */
    virtual antlrcpp::Any visitJson(JSONParser::JsonContext *context) = 0;

    virtual antlrcpp::Any visitFullobj(JSONParser::FullobjContext *context) = 0;

    virtual antlrcpp::Any visitEmptyobj(JSONParser::EmptyobjContext *context) = 0;

    virtual antlrcpp::Any visitPair(JSONParser::PairContext *context) = 0;

    virtual antlrcpp::Any visitFullarr(JSONParser::FullarrContext *context) = 0;

    virtual antlrcpp::Any visitEmptyarr(JSONParser::EmptyarrContext *context) = 0;

    virtual antlrcpp::Any visitStrval(JSONParser::StrvalContext *context) = 0;

    virtual antlrcpp::Any visitNumval(JSONParser::NumvalContext *context) = 0;

    virtual antlrcpp::Any visitObjval(JSONParser::ObjvalContext *context) = 0;

    virtual antlrcpp::Any visitArrval(JSONParser::ArrvalContext *context) = 0;

    virtual antlrcpp::Any visitTrueval(JSONParser::TruevalContext *context) = 0;

    virtual antlrcpp::Any visitFalseval(JSONParser::FalsevalContext *context) = 0;

    virtual antlrcpp::Any visitNullval(JSONParser::NullvalContext *context) = 0;


};

