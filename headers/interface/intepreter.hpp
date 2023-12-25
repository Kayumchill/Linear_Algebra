#pragma once

#include <fstream> // std::ifstream
#include <map>     // std::map

#include "parsing.hpp"
#include "exception.hpp"
#include "data.hpp"
#include <string>

namespace infa
{
  class Interpreter
  {
  public:
    using path_type = libs::line_type;
    using file_strm_type_ = std::ifstream;
    using command_type_ = libs::line_type;
    using elements_type_ = libs::lines_type;
    using functions_type_ = std::map<command_type_, void (Interpreter::*)(const elements_type_ &)>;

    Interpreter(const path_type &logPath);

    auto readCommand() -> void;
    auto readLogFile() -> void;

  private:
    Data db;

    // using library_type = Database<integer_number_type, floating_point_type,
    //                                                            line_type>;

    const path_type logPath_;
    file_strm_type_ fileStrm_;
    const functions_type_ commands_;

    void set_(const elements_type_ &elements);
    void dot_(const elements_type_ &elements);
    // void out_(const elements_type_& elements);
  };
}
infa::Interpreter::Interpreter(const path_type &logPath) : logPath_(logPath), fileStrm_(logPath), commands_({{"set", &infa::Interpreter::set_}, {"dot", &infa::Interpreter::dot_}})
{
  if (!this->fileStrm_.is_open())
  {
    throw exc::invalid_data("wrong log path");
  }
}

auto infa::Interpreter::readCommand() -> void
{
  command_type_ cmd;
  std::getline(this->fileStrm_, cmd);
  const auto parsing = libs::parse(cmd, ' ');
  const auto key = parsing.front();
  const auto elems = elements_type_(++parsing.begin(), parsing.end());
  auto temp_function = this->commands_.at(key);
  (this->*temp_function)(elems);
  // this->*x=10
}
void infa::Interpreter::set_(const elements_type_ &elements)
{
  //db.set(elements);
}
void infa::Interpreter::dot_(const elements_type_ &elements)
{
  // db.set(elements);
}

