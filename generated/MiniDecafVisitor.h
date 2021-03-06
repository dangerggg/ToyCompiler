
// Generated from MiniDecaf.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "MiniDecafParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MiniDecafParser.
 */
class  MiniDecafVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MiniDecafParser.
   */
    virtual antlrcpp::Any visitToplv(MiniDecafParser::ToplvContext *context) = 0;

    virtual antlrcpp::Any visitProg(MiniDecafParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitReturn(MiniDecafParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(MiniDecafParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(MiniDecafParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitForLoop(MiniDecafParser::ForLoopContext *context) = 0;

    virtual antlrcpp::Any visitDowhile(MiniDecafParser::DowhileContext *context) = 0;

    virtual antlrcpp::Any visitPrintExpr(MiniDecafParser::PrintExprContext *context) = 0;

    virtual antlrcpp::Any visitStmtBlock(MiniDecafParser::StmtBlockContext *context) = 0;

    virtual antlrcpp::Any visitNop(MiniDecafParser::NopContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(MiniDecafParser::MulDivContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(MiniDecafParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitTernary(MiniDecafParser::TernaryContext *context) = 0;

    virtual antlrcpp::Any visitArrayDef(MiniDecafParser::ArrayDefContext *context) = 0;

    virtual antlrcpp::Any visitCallFunc(MiniDecafParser::CallFuncContext *context) = 0;

    virtual antlrcpp::Any visitBreak(MiniDecafParser::BreakContext *context) = 0;

    virtual antlrcpp::Any visitLAND(MiniDecafParser::LANDContext *context) = 0;

    virtual antlrcpp::Any visitArrayCall(MiniDecafParser::ArrayCallContext *context) = 0;

    virtual antlrcpp::Any visitContinue(MiniDecafParser::ContinueContext *context) = 0;

    virtual antlrcpp::Any visitUnary(MiniDecafParser::UnaryContext *context) = 0;

    virtual antlrcpp::Any visitLOR(MiniDecafParser::LORContext *context) = 0;

    virtual antlrcpp::Any visitVarDef(MiniDecafParser::VarDefContext *context) = 0;

    virtual antlrcpp::Any visitEqual(MiniDecafParser::EqualContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(MiniDecafParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitSizeOf(MiniDecafParser::SizeOfContext *context) = 0;

    virtual antlrcpp::Any visitLessGreat(MiniDecafParser::LessGreatContext *context) = 0;

    virtual antlrcpp::Any visitParen(MiniDecafParser::ParenContext *context) = 0;

    virtual antlrcpp::Any visitType(MiniDecafParser::TypeContext *context) = 0;


};

