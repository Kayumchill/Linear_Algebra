#include <string>
#include <vector>
#include <iostream>

#include "parsing.hpp"

  auto libs::parse(const line_type &cmd, char sep) -> lines_type
  {
    lines_type result;
    line_type word;
    for (char c : cmd)
    {
      if (c != sep || c != ';')// set x 10;
      {
        word.push_back(c);
      }
      else
      {
        if (!word.empty())
        {
          result.push_back(word);
          word.clear();
        }
      }
    }

    if (!word.empty())
    {
      result.push_back(word);
    }

    return result;
  }

// float libs::line_to_float(const std::string &line)
// {
//   return (std::stof(line));
// }
std::intmax_t libs::line_to_int(std::string& line)
{
 return (std::stoi(line));
}

