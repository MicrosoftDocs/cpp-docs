---
title: "Compiler Error C3279"
description: "Learn more about: Compiler Error C3279"
ms.date: 11/04/2016
f1_keywords: ["C3279"]
helpviewer_keywords: ["C3279"]
---
# Compiler Error C3279

> partial and explicit specializations as well as explicit instantiations of class templates declared in the cli namespace are disallowed

## Remarks

The `cli` namespace is defined by Microsoft and contains pseudo-templates. The Microsoft C++ compiler does not allow user-defined, partial and explicit specializations, and explicit instantiations of class templates in this namespace.

## Example

The following example generates C3279:

```cpp
// C3279.cpp
// compile with: /clr
namespace cli {
   template <> ref class array<int> {};   // C3279
   template <typename T> ref class array<T, 2> {};   // C3279
}
```
