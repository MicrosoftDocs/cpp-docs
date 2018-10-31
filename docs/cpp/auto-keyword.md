---
title: "auto Keyword"
ms.date: "11/04/2016"
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
---
# auto Keyword

The **auto** keyword is a declaration specifier. However, the C++ standard defines an original and a revised meaning for this keyword. Before Visual C++ 2010, the **auto** keyword declares a variable in the *automatic* storage class; that is, a variable that has a local lifetime. Starting with Visual C++ 2010, the **auto** keyword declares a variable whose type is deduced from the initialization expression in its declaration. The [/Zc:auto&#91;-&#93;](../build/reference/zc-auto-deduce-variable-type.md) compiler option controls the meaning of the **auto** keyword.

## Syntax

```cpp
auto declarator ;
auto declarator initializer;
```

## Remarks

The definition of the **auto** keyword changes in the C++ programming language, but not in the C programming language.

The following topics describe the **auto** keyword and the corresponding compiler option:

- [auto](../cpp/auto-cpp.md) describes the new definition of the **auto** keyword.

- [/Zc:auto (Deduce Variable Type)](../build/reference/zc-auto-deduce-variable-type.md) describes the compiler option that tells the compiler which definition of the **auto** keyword to use.

## See also

[Keywords](../cpp/keywords-cpp.md)