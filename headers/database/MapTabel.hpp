#pragma once

#include <unordered_map>
#include <vector>
#include <bitset>
#include <string>
#include <stdexcept>

#include "DefaultValues.hpp"
template<typename T>
class MapTabel {
private:
   std::bitset<bitmapSize> activeTables;
   // std::vector<std::unordered_map<std::string, T>> tabels;
   std::unordered_map<std::string, T> table;


public:
   bool isActiveTabel(int tabelIndex) { // проверяем в битовой карте активна ли таблица 
      return activeTables.test(tabelIndex);
   }

   bool isActiveVar(int tabelIndex, const std::string& key) { // проверяем в таблице существует ли переменная
      if (isActiveTabel(tabelIndex)) {
      //   return tabels[tabelIndex].find(key) != tabels[tabelIndex].end();
           return table.find(key) != table.end();
      }
       return false;
   }

   T& getVar(int tabelIndex, const std::string& key) { // получаем переменную из таблицы
      if (isActiveTabel(tabelIndex) && isActiveVar(tabelIndex, key)) {
         //   return tabels[tabelIndex].at(key);
         return table.at(key);
      } else {
           throw std::out_of_range("Variable not found in the table");
      }
}


   void writeToTabel(int tabelIndex, const std::string& key, const T& value) { // пишем переменную в таблицу
      if (isActiveTabel(tabelIndex)) {
         //   tabels[tabelIndex][key] = value;
         table[key] = value;
      }
   }

   void createTabel(int tabelIndex, int size) { // создаём таблицу в карте таблиц(т.е одна карта таблиц может содержать несколько разных таблиц с переменными и они нумеруются от 0 до 256 по умолчанию)
      if (!isActiveTabel(tabelIndex)) {
           activeTables.set(tabelIndex);
         //   if(tabelIndex >= tabels.size()) {
         //       tabels.resize(tabelIndex + 1);
         //   }

         //   tabels[tabelIndex] = std::unordered_map<std::string, T>();
         //   tabels[tabelIndex].reserve(size);
      }
   }

   void removeFromTabel(int tabelIndex, const std::string& key) { // удаляем из таблицы элемент
       if (isActiveTabel(tabelIndex)) {
         //   tabels[tabelIndex].erase(key);
             table.erase(key);
       }
   }
};