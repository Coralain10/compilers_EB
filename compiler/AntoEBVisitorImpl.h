#ifndef __PCDOS_VISITOR_IMPL_
#define __PCDOS_VISITOR_IMPL_

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
		  module(std::make_unique<llvm::Module>("LaPC2", *context)),
		  builder(std::make_unique<llvm::IRBuilder>(*context)) {}

	// void test() {
	// 	std::error_code error;
	// 	llvm::raw_fd_stream outLL("test.ll", error);
	// 	module->print(outLL, nullptr);
	// };

private:
	std::map<std::string, std::any> memory;
	std::unique_ptr<llvm::LLVMContext> context;
	std::unique_ptr<llvm::Module> module;
	std::unique_ptr<llvm::IRBuilder<>> builder;
};

#endif