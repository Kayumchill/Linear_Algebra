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

template <typename T>
T alg::inc(T &t) noexcept
{
  return ++t;
}

template <typename T>
T alg::pow(T &t, const libs::integer_number_type &n)
{
  if (n < 0)
  {
    return 1 / alg::pow(t, n + 1);
  }
  else if (n > 0)
  {
    return t * alg::pow(t, n - 1);
  }
  else
  {
    return 1;
  }
}

template <typename T1, typename T2>
auto alg::sum(const T1 &t1, const T2 &t2) noexcept(true)
{
  return t1 + t2;
}

template <typename T1, typename T2>
auto alg::sub(const T1 &t1, const T2 &t2) noexcept(true)
{
  return t1 - t2;
}

template <typename T1, typename T2>
auto alg::mult(const T1 &t1, const T2 &t2) noexcept(true)
{
  return t1 * t2;
}

template <typename T1, typename T2>
auto alg::del(const T1 &t1, const T2 &t2) noexcept(false)
{
  if (t2 == 0)
  {
    throw exc::invalid_data("Divisor is zero");
  }
  else
  {
    return t1 / t2;
  }
}