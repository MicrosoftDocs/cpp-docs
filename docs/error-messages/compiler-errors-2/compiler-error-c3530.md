---
title: "Compiler Error C3530"
description: "Learn more about: Compiler Error C3530"
ms.date: 11/04/2016
f1_keywords: ["C3530"]
helpviewer_keywords: ["C3530"]
---
# Compiler Error C3530

> 'auto' cannot be combined with any other type-specifier

## Remarks

A type specifier is used with the **`auto`** keyword.

### To correct this error

1. Do not use a type specifier in a variable declaration that uses the **`auto`** keyword.

## Example

The following example yields C3530 because variable `x` is declared with both the **`auto`** keyword and type **`int`**, and because the example is compiled with **/Zc:auto**.

```cpp
// C3530.cpp
// Compile with /Zc:auto
int main()
{
   auto int x;   // C3530
   return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)
