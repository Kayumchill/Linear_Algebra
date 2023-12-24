#include <iostream>
#include "interpreter.hpp"
#include "parsing.hpp"
#include "syntax.hpp"
#include "Data.hpp"
int main()
{
    std::string file = "C:\\Users\\User\\Desktop\\test_algebra\\log.txt";
    infa::Interpreter interpter(file);
    interpter.readCommand();
    return 0;
}
