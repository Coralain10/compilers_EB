#include <cstdio>
#include <fstream>
#include <string>

#include "AntoEBVisitorImpl.h"
#include "AntoEBLexer.h"
#include "AntoEBParser.h"
#include <antlr4-runtime.h>

int main(int argc, char**argv) {
    if (argc <= 1)
        return -1;

    std::ifstream is;
    is.open(argv[1]);
    antlr4::ANTLRInputStream input(is);
    AntoEBLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    AntoEBParser parser(&tokens);
    auto tree = parser.program();
    // EvalVisitorImpl eval;
    // eval.visitProg(tree);
    std::cout << tree ->toStringTree(true) << std::endl;
}
