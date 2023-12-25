#include "intepreter.hpp"
#include "parsing.hpp"
#include "data.hpp"

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

