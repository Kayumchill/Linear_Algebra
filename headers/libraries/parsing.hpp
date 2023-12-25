#pragma once

#include <string>
#include <vector>
#include <iostream>

namespace libs
{
  using floating_point_type = float;
  using integer_number_type = std::intmax_t;
  using line_type = std::string;
  using lines_type = std::vector<line_type>;
  using size_type = std::size_t;

  floating_point_type line_to_float(const std::string &line);
  integer_number_type line_to_int(line_type &line);
  auto parse(const line_type &cmd, char sep) -> lines_type;

};

auto libs::parse(const line_type &cmd, char sep) -> lines_type
{
  lines_type result;
  line_type word;
  for (char c : cmd)
  {
    if (c != sep || c != ';') // set x 10;
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

float libs::line_to_float(const std::string &line)
{
  return (std::stof(line));
}

std::intmax_t libs::line_to_int(std::string &line)
{
  return (std::stoi(line));
}
