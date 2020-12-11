---
description: "Learn more about: Compiler Error C2785"
title: "Compiler Error C2785"
ms.date: "11/04/2016"
f1_keywords: ["C2785"]
helpviewer_keywords: ["C2785"]
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
---
# Compiler Error C2785

'declaration1' and 'declaration2' have different return types

The return type of function template specialization differs from the return type of the primary function template.

### To correct this error

1. Check all specializations of the function template for consistency.

## Example

The following sample generates C2785:

```cpp
// C2785.cpp
// compile with: /c
template<class T> void f(T);

template<> int f(int); // C2785
template<> void f(int); // OK
```
