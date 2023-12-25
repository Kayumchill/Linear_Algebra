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
