#pragma once

#include <cstdint>
#include "parsing.hpp"
#include "exception.hpp"
#include <iostream>

namespace alg
{

  template <typename T>
  T inc(T &t) noexcept;

  template <typename T>
  T pow(T &t, const libs::integer_number_type &n);

  template <typename T1, typename T2>
  auto sum(const T1 &t1, const T2 &t2) noexcept(true);

  template <typename T1, typename T2>
  auto sub(const T1 &t1, const T2 &t2) noexcept(true);

  template <typename T1, typename T2>
  auto mult(const T1 &t1, const T2 &t2) noexcept(true);

  template <typename T1, typename T2>
  auto del(const T1 &t1, const T2 &t2) noexcept(false);
}