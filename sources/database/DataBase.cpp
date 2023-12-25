#include "DataBase.hpp"

DataBase::DataBase() { // инициализация таблиц под переменные разного типа
    intTable.createTabel(0, bitmapSize);
    doubleTable.createTabel(0, bitmapSize);
    vectorDoubleTable.createTabel(0, bitmapSize);
    vectorIntTable.createTabel(0, bitmapSize);
}

bool DataBase::exists(std::string name) { // проверка есть ли переменная в одной из таблиц
    return intTable.isActiveVar(0, name) || doubleTable.isActiveVar(0, name) || 
           vectorDoubleTable.isActiveVar(0, name) || vectorIntTable.isActiveVar(0, name);
}