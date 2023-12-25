#include <cstdint>
#include <iostream>
#include "algebra.hpp"
#include "parsing.hpp"
#include "exception.hpp"

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