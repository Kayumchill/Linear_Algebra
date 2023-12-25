#include "MapTabel.hpp"

class DataBase {
private:
    MapTabel<int> intTable; // приватными полями базы данных выступают карты таблиц под переменные разных типов
    MapTabel<double> doubleTable;
    MapTabel<std::vector<double>> vectorDoubleTable;
    MapTabel<std::vector<int>> vectorIntTable;

public:

    DataBase(); // конструктор по умолчанию для базы данных

    bool exists(std::string name); // проверяем есть ли в одной из таблиц переменная с таким именем

    template<typename T>
    T get(std::string name) { // получаем значение переменной по имени из таблиц
        if (exists(name)) {
            if constexpr (std::is_same_v<T, int>) {
                return intTable.getVar(0, name);
            } else if constexpr (std::is_same_v<T, double>) {
                return doubleTable.getVar(0, name);
            } else if constexpr (std::is_same_v<T, std::vector<double>>) {
                return vectorDoubleTable.getVar(0, name);
            } else if constexpr (std::is_same_v<T, std::vector<int>>) {
                return vectorIntTable.getVar(0, name);
            }
        } else {
           throw std::out_of_range("Variable not found in the table");
      }
    }   

    template<typename T>
    void set(std::string name, const T& value) { // устанавливаем значение переменной по имени 
        if constexpr (std::is_same_v<T, int>) {
            intTable.writeToTabel(0, name, value);
        } else if constexpr (std::is_same_v<T, double>) {
            doubleTable.writeToTabel(0, name, value);
        } else if constexpr (std::is_same_v<T, std::vector<double>>) {
            vectorDoubleTable.writeToTabel(0, name, value);
        } else if constexpr (std::is_same_v<T, std::vector<int>>) {
            vectorIntTable.writeToTabel(0, name, value);
        } else {
           throw std::out_of_range("Variable not found in the table");
      }
    }


    template<typename T>
    void assign(std::string name, std::string type, const T& value) { // изменяем значение по имени
         set(name, type, value);
    }

};