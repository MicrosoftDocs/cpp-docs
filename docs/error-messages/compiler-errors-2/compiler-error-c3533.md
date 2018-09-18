---
title: "Compiler Error C3533 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3533"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3533"]
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3533

'type': a parameter cannot have a type that contains 'auto'

A method or template parameter cannot be declared with the `auto` keyword if the default [/Zc:auto](../../build/reference/zc-auto-deduce-variable-type.md) compiler option is in effect.

### To correct this error

1. Remove the `auto` keyword from the parameter declaration.

## Example

The following example yields C3533 because it declares a function parameter with the `auto` keyword and it is compiled with **/Zc:auto**.

```
// C3533a.cpp
// Compile with /Zc:auto
void f(auto j) {} // C3533
```

## Example

The following example yields C3533 in C++14 mode because it declares a template parameter with the `auto` keyword and it is compiled with **/Zc:auto**. (In C++17, this is a valid definition of a class template with a single non-type template parameter whose type is deduced.)

```
// C3533b.cpp
// Compile with /Zc:auto
template<auto T> class C {}; // C3533
```

## See Also

[auto Keyword](../../cpp/auto-keyword.md)<br/>
[/Zc:auto (Deduce Variable Type)](../../build/reference/zc-auto-deduce-variable-type.md)
