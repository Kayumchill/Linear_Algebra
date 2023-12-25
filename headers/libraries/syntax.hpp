#pragma once

#include <string>
#include <algorithm>
#include "parsing.hpp"
namespace stx
{
  bool isBounded(std::string line, char bound);
  std::string toUppercase(std::string line);
}
