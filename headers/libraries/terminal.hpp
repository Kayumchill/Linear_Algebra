#pragma once

#include "file.hpp"
#include "parsing.hpp"
#include <iostream>
#include <cstddef>
#include <vector>
#include <algorithm>

struct Pass
{
    template <typename... T>
    Pass(const T &...) {}
};

namespace term
{
    void input(std::string &line, std::string prefix);
    template <char end = '\n', char sep = ' ', typename... T>
    void display(const T &...t);
    
}

// template <typename... T>
// std::string term::display(const T &...t)
// {
//     std::string line;
//     std::vector<std::string> lines;
//     Pass{(std::cout << t << ' ', 1)...};
//     std::cout << '\n';
//     Pass{(lines.push_back(t))...};
//     for (auto it = lines.begin(); it != lines.end(); ++it)
//     {
//         for (size_t i = 0; i < (*it).size(); ++i)
//         {
//             line.push_back((*it)[i]);
//         }
//     }
//     return line;
// }
template <char end = '\n', char sep = ' ', typename... T>

void term::display(const T &...t)
{
    ((std::cout << t << sep), ...);
    std::cout << end;
}
void term::input(std::string &line, std::string prefix)
{
    std::cout << prefix << ": ";
    //std::cin >> line;
    std::getline(std::cin, line);
} 