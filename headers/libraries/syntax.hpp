#pragma once

#include <string>
#include <algorithm>
#include "parsing.hpp"
namespace stx
{
  bool isBounded(std::string line, char bound);
  std::string toUppercase(std::string line);
};

std::string stx::toUppercase(std::string line)
{
  std::transform(line.begin(), line.end(), line.begin(), ::toupper);
  return line;
}

bool stx::isBounded(std::string line, char bound)
{
  if (line.front() == bound && line.back() == bound)
  {
    return true;
  }
  return false;
}
