// #pragma once
// #include <fstream>
// #include <string>
// // #include <string_view>
// #include <filesystem>
// #include "parsing.hpp"

// class string_view
// {
// public:
//     string_view(const char *str) : data_(str), size_(strlen(str)) {}
//     string_view(const char *str, size_t size) : data_(str), size_(size) {}

//     const char *data() const { return data_; }
//     size_t size() const { return size_; }

// private:
//     const char *data_;
//     size_t size_;
// };
// struct Passfile
// {
//     template <typename... T>
//     Passfile(const T &...) {}
// };

// namespace file
// {
//     template <typename... T>
//     void write(const T &...line, string_view path);
//     template <typename... T>
//     void read(const T &...line, string_view path);
//     template <typename Op>
//     void stream(std::filesystem::path path, std::ios_base::openmode om, Op op);
// }

// template <typename... T>
// void file::write(const T &...line, string_view path)
// {
//     std::ofstream file(path.data());
//     if (file.is_open())
//     {
//         file << line;
//         file.close();
//     }
// }
// template <typename... T>
// void file::read(const T &...line, string_view path)
// {
//     std::ifstream file(path.data());
//     if (file.is_open())
//     {
//         std::getline(file, line);
//         file.close();
//     }
// }
// template <typename Op>
// void file::stream(std::filesystem::path path, std::ios_base::openmode om, Op op)
// {
//     std::fstream file(path, om);
//     if (file.is_open())
//     {
//         op(file);
//         file.close();
//     }
// }