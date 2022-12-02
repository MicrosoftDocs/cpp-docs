---
title: "Numeric, boolean, and pointer literals (C++)"
description: "The C++ standard language formats for integer, floating-point, boolean, and pointer literals."
ms.date: "11/04/2016"
helpviewer_keywords: ["literals, C++", "constants, literals", "literals [C++]"]
ms.assetid: 17c09fc3-3ad7-47e2-8b48-ba8ae994edc8
---
# Numeric, boolean, and pointer literals

A literal is a program element that directly represents a value. This article covers literals of type integer, floating-point, boolean, and pointer. For information about string and character literals, see [String and Character Literals  (C++)](../cpp/string-and-character-literals-cpp.md). You can also define your own literals based on any of these categories. For more information, see [User-defined literals (C++)](../cpp/user-defined-literals-cpp.md).

You can use literals in many contexts, but most commonly to initialize named variables and to pass arguments to functions:

```cpp
const int answer = 42;      // integer literal
double d = sin(108.87);     // floating point literal passed to sin function
bool b = true;              // boolean literal
MyClass* mc = nullptr;      // pointer literal
```

Sometimes it's important to tell the compiler how to interpret a literal, or what specific type to give to it. It's done by appending prefixes or suffixes to the literal. For example, the prefix `0x` tells the compiler to interpret the number that follows it as a hexadecimal value, for example `0x35`. The `ULL` suffix tells the compiler to treat the value as an **`unsigned long long`** type, as in `5894345ULL`. See the following sections for the complete list of prefixes and suffixes for each literal type.

## Integer literals

Integer literals begin with a digit and have no fractional parts or exponents. You can specify integer literals in decimal, binary, octal, or hexadecimal form. You can optionally specify an integer literal as unsigned, and as a long or long long type, by using a suffix.

When no prefix or suffix is present, the compiler will give an integral literal value type **`int`** (32 bits), if the value will fit, otherwise it will give it type **`long long`** (64 bits).

To specify a decimal integral literal, begin the specification with a nonzero digit. For example:

```cpp
int i = 157;        // Decimal literal
int j = 0198;       // Not a decimal number; erroneous octal literal
int k = 0365;       // Leading zero specifies octal literal, not decimal
int m = 36'000'000  // digit separators make large values more readable
```

To specify an octal integral literal, begin the specification with 0, followed by a sequence of digits in the range 0 through 7. The digits 8 and 9 are errors in specifying an octal literal. For example:

```cpp
int i = 0377;   // Octal literal
int j = 0397;   // Error: 9 is not an octal digit
```

To specify a hexadecimal integral literal, begin the specification with `0x` or `0X` (the case of the "x" doesn't matter), followed by a sequence of digits in the range `0` through `9` and `a` (or `A`) through `f` (or `F`). Hexadecimal digits `a` (or `A`) through `f` (or `F`) represent values in the range 10 through 15. For example:

```cpp
int i = 0x3fff;   // Hexadecimal literal
int j = 0X3FFF;   // Equal to i
```

To specify an unsigned type, use either the `u` or `U` suffix. To specify a long type, use either the `l` or `L` suffix. To specify a 64-bit integral type, use the LL, or ll suffix. The i64 suffix is still supported, but we don't recommend it. It's specific to Microsoft and isn't portable. For example:

```cpp
unsigned val_1 = 328u;                  // Unsigned value
long val_2 = 0x7FFFFFL;                 // Long value specified
                                        //  as hex literal
unsigned long val_3 = 0776745ul;        // Unsigned long value
auto val_4 = 108LL;                           // signed long long
auto val_4 = 0x8000000000000000ULL << 16;     // unsigned long long
```

**Digit separators**: You can use the single-quote character (apostrophe) to separate place values in larger numbers to make them easier for humans to read. Separators have no effect on compilation.

```cpp
long long i = 24'847'458'121;
```

## Floating point literals

Floating-point literals specify values that must have a fractional part. These values contain decimal points (**`.`**) and can contain exponents.

Floating-point literals have a *significand* (sometimes called a *mantissa*), which specifies the value of the number. They have an *exponent*, which specifies the magnitude of the number. And, they have an optional suffix that specifies the literal's type. The significand is specified as a sequence of digits followed by a period, followed by an optional sequence of digits representing the fractional part of the number. For example:

```cpp
18.46
38.
```

The exponent, if present, specifies the magnitude of the number as a power of 10, as shown in the following example:

```cpp
18.46e0      // 18.46
18.46e1      // 184.6
```

The exponent may be specified using `e` or `E`, which have the same meaning, followed by an optional sign (+ or -) and a sequence of digits.  If an exponent is present, the trailing decimal point is unnecessary in whole numbers such as `18E0`.

Floating-point literals default to type **`double`**. By using the suffixes `f` or `l` or `F` or `L` (the suffix isn't case sensitive), the literal can be specified as **`float`** or **`long double`**.

Although **`long double`** and **`double`** have the same representation, they're not the same type. For example, you can have overloaded functions such as

```cpp
void func( double );
```

and

```cpp
void func( long double );
```

## Boolean literals

The boolean literals are **`true`** and **`false`**.

## Pointer literal (C++11)

C++ introduces the [`nullptr`](../cpp/nullptr.md) literal to specify a zero-initialized pointer. In portable code, **`nullptr`** should be used instead of integral-type zero or macros such as `NULL`.

## Binary literals (C++14)

A binary literal can be specified by the use of the `0B` or `0b` prefix, followed by a sequence of 1's and 0's:

```cpp
auto x = 0B001101 ; // int
auto y = 0b000001 ; // int
```

## Avoid using literals as "magic constants"

You can use literals directly in expressions and statements although it's not always good programming practice:

```cpp
if (num < 100)
    return "Success";
```

In the previous example, a better practice is to use a named constant that conveys a clear meaning, for example "MAXIMUM_ERROR_THRESHOLD". And if the return value "Success" is seen by end users, then it might be better to use a named string constant. You can keep string constants in a single location in a file that can be localized into other languages. Using named constants helps both yourself and others to understand the intent of the code.

## See also

[Lexical conventions](../cpp/lexical-conventions.md)<br/>
[C++ string literals](../cpp/string-and-character-literals-cpp.md)<br/>
[C++ user-defined literals](../cpp/user-defined-literals-cpp.md)
