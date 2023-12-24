#include <iostream>
#include "intepreter.hpp"
#include "parsing.hpp"
#include "syntax.hpp"
#include "Data.hpp"
int main()
{
    std::string file = "C:\\Users\\User\\Desktop\\test_algebra\\log.txt";
    infa::Interpreter interpter(file);
    interpter.readCommand();
    system("pause");
    return 0;
}
