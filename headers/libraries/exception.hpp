#pragma once

#include <exception>
#include <string>

namespace exc
{
    class Exception : public std::exception
    {
    public:
        const char *what() const noexcept
        {
            return this->message_.c_str(); // Теперь можно использовать cstr, как обычный массив символов
            // Этот указатель может использоваться для доступа к содержимому строки как к обычному массиву символов
        }

    protected:
        explicit Exception(const std::string &message) noexcept : message_{message} // explicit - неявное приведение типов, т.е при констурктор необходимо вызвать явно: Exception myException(errorMessage)
        // для преобразования строк в объекты Exception. данный констрктор будет вызван только в том случае, если получит объект класса
        {
        }

    private:
        const std::string message_; // содержит сообщение об ошибке
    };

    struct invalid_data : public Exception
    {
        invalid_data(const std::string &message) : Exception{
                                                       "Invalid data. Code: " + message + "."} {}
    };

    struct unknown_data : public Exception
    {
        unknown_data(const std::string &message) : Exception{
                                                       "Unknown data. Code: " + message + "."} {}
    };

    struct unspecified_data : public Exception
    {
        unspecified_data(const std::string &message) : Exception{
                                                           "Unspecified data. Code: " + message + "."} {}
    };

    struct undefined_data : public Exception
    {

        undefined_data(const std::string &message) : Exception{
                                                         "Undefined data. Code: " + message + "."} {}
    };
};

// const char *exc::Exception::what() const noexcept
// {
//     return this->message_.c_str();
// }

// exc::Exception::Exception(const std::string &msg) noexcept : message_{msg}
// {}