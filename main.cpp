#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "ArxCyLexer.h"
#include "ArxCyParser.h"
#include "CodeGenVisitor.h" // Include our new visitor

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: arxcy <file.arx>" << std::endl;
        return 1;
    }

    std::ifstream stream;
    stream.open(argv[1]);
    if (!stream) {
        std::cerr << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    ArxCyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ArxCyParser parser(&tokens);

    tree::ParseTree *tree = parser.program();

    // --- New Code Generation Step ---
    std::cout << "Parse tree generated. Starting code generation..." << std::endl;

    CodeGenVisitor visitor;
    std::any result = visitor.visit(tree);

    // Ensure the result is not empty and is a string
    if (result.has_value() && result.type() == typeid(std::string)) {
        std::string c_code = std::any_cast<std::string>(result);

        // Write the generated C code to output.c
        std::ofstream out_file("output.c");
        out_file << c_code;
        out_file.close();

        std::cout << "Successfully generated C code to output.c" << std::endl;
        std::cout << "To compile and run:" << std::endl;
        std::cout << "  gcc output.c -o output" << std::endl;
        std::cout << "  ./output" << std::endl;

    } else {
        std::cerr << "Code generation failed. Visitor did not return a string." << std::endl;
        return 1;
    }

    return 0;
}
