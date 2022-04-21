---
description: "Learn more about: `chrono` literals"
title: "<chrono> literals"
f1_keywords: ["chrono/std::literals::chrono_literals", "std::literals::chrono_literals", "chrono_literals", 'chrono/std::operator"" d', 'chrono/std::operator"" h', 'chrono/std::operator"" min', 'chrono/std::operator"" s', 'chrono/std::operator"" ms', 'chrono/std::operator"" us', 'chrono/std::operator"" ns', 'chrono/std::operator"" y']
ms.date: "6/3/2021"
---
# `chrono` literals

(C++14) The `<chrono>` header defines 12 [user-defined literals](../cpp/user-defined-literals-cpp.md) that represent hours, minutes, seconds, milliseconds, microseconds, and nanoseconds. Each user-defined literal has an integral and a floating-point overload. The literals are defined in the `literals::chrono_literals` inline namespace, which is brought into scope automatically when `std::chrono` is in scope.

## Syntax

```cpp
inline namespace literals {
  inline namespace chrono_literals {
    // return integral days
    constexpr std::chrono::day operator"" d(unsigned long long d) noexcept;

    // return integral hours
    constexpr chrono::hours operator"" h(unsigned long long Val);

    // return floating-point hours
    constexpr chrono::duration<double, ratio<3600>> operator"" h(long double Val);

    // return integral minutes
    constexpr chrono::minutes(operator"" min)(unsigned long long Val);

    // return floating-point minutes
    constexpr chrono::duration<double, ratio<60>>(operator"" min)(long double Val);

    // return integral seconds
    constexpr chrono::seconds operator"" s(unsigned long long Val);

    // return floating-point seconds
    constexpr chrono::duration<double> operator"" s(long double Val);

    // return integral milliseconds
    constexpr chrono::milliseconds operator"" ms(unsigned long long Val);

    // return floating-point milliseconds
    constexpr chrono::duration<double, milli> operator"" ms(long double Val);

    // return integral microseconds
    constexpr chrono::microseconds operator"" us(unsigned long long Val);

    // return floating-point microseconds
    inline constexpr chrono::duration<double, micro> operator"" us(long double Val);

    // return integral nanoseconds
    inline constexpr chrono::nanoseconds operator"" ns(unsigned long long Val);

    // return floating-point nanoseconds
    constexpr chrono::duration<double, nano> operator"" ns(long double Val);

    // return integral year
    constexpr chrono::year operator""y(unsigned long long y) noexcept; // C++ 20
  } // inline namespace chrono_literals
} // inline namespace literals
```

## Return value

The literals that take a **`long long`** argument return a value or the corresponding type. The literals that take a floating point argument return a [`duration`](../standard-library/duration-class.md).

## Example

The following examples show how to use the `chrono` literals.

```cpp
constexpr auto day = 14d; // If the value > 255, then the stored value is unspecified. 
constexpr auto twoDays = 48h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
constexpr auto theYear = 2021y;
```
