---
description: "Learn more about: bool (C++)"
title: "bool (C++)"
ms.date: "11/04/2016"
f1_keywords: ["bool_cpp", "__BOOL_DEFINED"]
helpviewer_keywords: ["bool keyword [C++]", "__BOOL_DEFINED macro"]
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
---
# bool (C++)

This keyword is a built-in type. A variable of this type can have values [`true`](../cpp/true-cpp.md) and [`false`](../cpp/false-cpp.md). Conditional expressions have the type **`bool`** and so have values of type **`bool`**. For example, `i != 0` now has **`true`** or **`false`** depending on the value of `i`.

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): The operand of a postfix or prefix increment or decrement operator may not be of type **`bool`**. In other words, given a variable `b` of type **`bool`**, these expressions are no longer allowed:

```cpp
    b++;
    ++b;
    b--;
    --b;
```

The values **`true`** and **`false`** have the following relationship:

```cpp
!false == true
!true == false
```

In the following statement:

```cpp
if (condexpr1) statement1;
```

If `condexpr1` is **`true`**, `statement1` is always executed; if `condexpr1` is **`false`**, `statement1` is never executed.

When a postfix or prefix **`++`** operator is applied to a variable of type **`bool`**, the variable is set to **`true`**.

**Visual Studio 2017 version 15.3 and later**: `operator++` for **`bool`** was removed from the language and is no longer supported.

The postfix or prefix **`--`** operator can't be applied to a variable of this type.

The **`bool`** type participates in default integral promotions. An r-value of type **`bool`** can be converted to an r-value of type **`int`**, with **`false`** becoming zero and **`true`** becoming one. As a distinct type, **`bool`** participates in overload resolution.

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Built-in types](../cpp/fundamental-types-cpp.md)
