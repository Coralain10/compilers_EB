#include "AntoEBVisitorImpl.h"
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <memory>

std::any AntoEBVisitorImpl::visitProgram(AntoEBParser::ProgramContext *ctx)  {
    std::cout << "visitProgram" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitExprStat(AntoEBParser::ExprStatContext *ctx)  {
    std::cout << "visitExprStat" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitReturnStat(AntoEBParser::ReturnStatContext *ctx)  {
    std::cout << "visitReturnStat" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitPrintStat(AntoEBParser::PrintStatContext *ctx)  {
    std::cout << "visitPrintStat" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitAssign(AntoEBParser::AssignContext *ctx)  {
    std::cout << "visitAssign" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitIfElseStat(AntoEBParser::IfElseStatContext *ctx)  {
    std::cout << "visitIfElseStat" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitBlank(AntoEBParser::BlankContext *ctx)  {
    std::cout << "visitBlank" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNpComp(AntoEBParser::NpCompContext *ctx)  {
    std::cout << "visitNpComp" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNpMulDiv(AntoEBParser::NpMulDivContext *ctx)  {
    std::cout << "visitNpMulDiv" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNpAddSub(AntoEBParser::NpAddSubContext *ctx)  {
    std::cout << "visitNpAddSub" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitId(AntoEBParser::IdContext *ctx)  {
    std::cout << "visitId" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNumber(AntoEBParser::NumberContext *ctx)  {
    std::cout << "visitNumber" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitIf(AntoEBParser::IfContext *ctx)  {
    std::cout << "visitIf" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitIfelse(AntoEBParser::IfelseContext *ctx)  {
    std::cout << "visitIfelse" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitElse(AntoEBParser::ElseContext *ctx)  {
    std::cout << "visitElse" << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitIfElseStruct(AntoEBParser::IfElseStructContext *ctx)  {
    std::cout << "visitIfElseStruct" << std::endl;
    return visitChildren(ctx);
}
