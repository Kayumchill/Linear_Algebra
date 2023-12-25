#include <iostream>
#include "intepreter.hpp"
#include "parsing.hpp"
#include "syntax.hpp"
#include "data.hpp"
int main()
{
    std::string file = "C:\\Users\\User\\Desktop\\test_algebra\\log.txt";
    infa::Interpreter interpter(file);
    interpter.readCommand();
    system("pause");
    return 0;
}

// #include "DataBase.hpp"
// #include <iostream>
// // В данном случае main функция просто как пример сделана то есть её потом можно изменить и использовать базу данных там где это нужно будет
// int main() {
//     DataBase database;

//     // Пример использования методов set и get для разных типов данных
//     database.set("age", 2222222);
//     int age = database.get<int>("age");
//     std::cout << "Age: " << age << std::endl;

//     database.set("pi", 3.14);
//     double pi = database.get<double>("pi");
//     std::cout << "Pi: " << pi << std::endl;

//     std::vector<double> vectorData = {1.1, 2.2, 3.3};
//     database.set("vector", vectorData);
//     std::vector<double> retrievedVector = database.get<std::vector<double>>("vector");
//     std::cout << "Retrieved Vector: ";
//     for (const auto& value : retrievedVector) {
//         std::cout << value << " ";
//     }
//     std::cout << std::endl;

//     // Пример проверки существования имени
//     std::string name = "age";
//     if (database.exists(name)) {
//         std::cout << "Name '" << name << "' exists in the database." << std::endl;
//     } else {
//         std::cout << "Name '" << name << "' does not exist in the database." << std::endl;
//     }

//     return 0;
// }

