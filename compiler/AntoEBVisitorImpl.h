#ifndef __ANTOEB_VISITOR_IMPL_
#define __ANTOEB_VISITOR_IMPL_

#include "AntoEBBaseVisitor.h"
#include "AntoEBParser.h"

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/Support/raw_ostream.h"

#include <algorithm>
#include <any>
#include <iostream>
#include <map>
#include <string>

/* added the Impl at the end of the class to avoid it being .gitignored sorry */
class AntoEBVisitorImpl: AntoEBBaseVisitor {
public:
	AntoEBVisitorImpl()
		: context(std::make_unique<llvm::LLVMContext>()),
		  module(std::make_unique<llvm::Module>("EB", *context)),
		  builder(std::make_unique<llvm::IRBuilder>(*context)) {}

	// void test() {
	// 	std::error_code error;
	// 	llvm::raw_fd_stream outLL("test.ll", error);
	// 	module->print(outLL, nullptr);
	// };
	
  virtual std::any visitProgram(AntoEBParser::ProgramContext *ctx) override ;
  virtual std::any visitExprStat(AntoEBParser::ExprStatContext *ctx) override ;
  virtual std::any visitReturnStat(AntoEBParser::ReturnStatContext *ctx) override ;
  virtual std::any visitPrintStat(AntoEBParser::PrintStatContext *ctx) override ;
  virtual std::any visitAssign(AntoEBParser::AssignContext *ctx) override ;
  virtual std::any visitIfElseStat(AntoEBParser::IfElseStatContext *ctx) override ;
  virtual std::any visitBlank(AntoEBParser::BlankContext *ctx) override ;
  virtual std::any visitNpComp(AntoEBParser::NpCompContext *ctx) override ;
  virtual std::any visitNpMulDiv(AntoEBParser::NpMulDivContext *ctx) override ;
  virtual std::any visitNpAddSub(AntoEBParser::NpAddSubContext *ctx) override ;
  virtual std::any visitId(AntoEBParser::IdContext *ctx) override ;
  virtual std::any visitNumber(AntoEBParser::NumberContext *ctx) override ;
  virtual std::any visitIf(AntoEBParser::IfContext *ctx) override ;
  virtual std::any visitIfelse(AntoEBParser::IfelseContext *ctx) override ;
  virtual std::any visitElse(AntoEBParser::ElseContext *ctx) override ;
  virtual std::any visitIfElseStruct(AntoEBParser::IfElseStructContext *ctx) override ;


private:
	std::map<std::string, std::any> memory;
	std::unique_ptr<llvm::LLVMContext> context;
	std::unique_ptr<llvm::Module> module;
	std::unique_ptr<llvm::IRBuilder<>> builder;
};

#endif