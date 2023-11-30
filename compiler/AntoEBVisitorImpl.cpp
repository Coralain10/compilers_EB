#include "AntoEBVisitorImpl.h"
#include "AntoEBParser.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/IR/Constant.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/Value.h"
#include "llvm/Support/CodeGen.h"
#include <any>
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
    auto value = std::any_cast<int>(visitChildren(ctx->expr()));
    std::cout << value << std::endl;
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitAssign(AntoEBParser::AssignContext *ctx)  {
    std::cout << "visitAssign" << std::endl;
    auto value = std::any_cast<int>(visitChildren(ctx->expr()));
    // memory[ctx->ID()] = visit(ctx->expr());
    memory[ctx->ID()] = value;
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
    
    llvm::Value* first = std::any_cast<llvm::Value*>(visit(ctx->expr(0)));
    llvm::Value* second = std::any_cast<llvm::Value*>(visit(ctx->expr(1)));
    // int resp;
    if (ctx->COMP->getType() == AntoEBParser::LESS) {
        return std::any(builder->CreateFCmpULT(first, second, "lessThan"));
    }
    else {
        return std::any(builder->CreateFSGT(first, second, "greaterThan"));
    }

    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNpMulDiv(AntoEBParser::NpMulDivContext *ctx)  {
    std::cout << "visitNpMulDiv" << std::endl;
    llvm::Value* first = std::any_cast<llvm::Value*>(visit(ctx->expr(0)));
    llvm::Value* second = std::any_cast<llvm::Value*>(visit(ctx->expr(1)));
    // int resp;
    if (ctx->OPL->getType() == AntoEBParser::MUL) {
        return std::any(builder->CreateFMul(first, second, "addTemp"));
    }
    else {
        return std::any(builder->CreateFDiv(first, second, "subTemp"));
    }
    // return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNpAddSub(AntoEBParser::NpAddSubContext *ctx)  {
    std::cout << "visitNpAddSub" << std::endl;
    llvm::Value* first = std::any_cast<llvm::Value*>(visit(ctx->expr(0)));
    llvm::Value* second = std::any_cast<llvm::Value*>(visit(ctx->expr(1)));
    // int resp;
    if (ctx->OPH->getType() == AntoEBParser::ADD) {
        return std::any(builder->CreateFAdd(first, second, "addTemp"));
    }
    else {
        return std::any(builder->CreateFSub(first, second, "subTemp"));
    }
    // return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitId(AntoEBParser::IdContext *ctx)  {
    std::cout << "visitId" << std::endl;
    std::string id = ctx->ID()->getText();
		if (memory.count(id)) return memory[id];
    return visitChildren(ctx);
}

std::any AntoEBVisitorImpl::visitNumber(AntoEBParser::NumberContext *ctx)  {
    std::cout << "visitNumber" << std::endl;
    auto numVal = std::stod(ctx->NUMBER()->getText());
    // auto Result = std::make_unique<double>(numVal);
    // return visitChildren(ctx);
    llvm::Value* val = llvm::ConstantFP::get(*context, llvm::APFloat(numVal));
    return std::any(val);
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
