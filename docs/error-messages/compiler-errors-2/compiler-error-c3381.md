---
title: "Compiler Error C3381"
description: "Microsoft C++ compiler error C3381, its causes and how to resolve them."
ms.date: 09/28/2020
f1_keywords: ["C3381"]
helpviewer_keywords: ["C3381"]
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
---
# Compiler Error C3381

> '*identifier*' : assembly access specifiers are only available in code compiled with a /clr option

A type was declared or defined by using an access specifier, which is only permitted in code compiled by using **`/clr`**.

## Remarks

This error may result from a misplaced **`public`**, **`protected`**, or **`private`** keyword, or a missing colon (**`:`**) after an access specifier within a **`class`** or **`struct`**.

In C++/CLI, native types can be visible outside an assembly, but you can only specify assembly access for native types in a **`/clr`** compilation. For more information, see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) and [`/clr` (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following sample generates C3381. To fix it, first either remove the **`public`** specifier from the `class A` definition, or compile by using the **`/clr`** option. Next, add a colon after **`private`** to specify access for `class B {} b;`. That's because a nested class can't have an assembly access specifier as part of its declaration.

```cpp
// C3381.cpp
// compile with: /c
public class A {   // C3381
    private class B {} b;   // C3381
};
```
