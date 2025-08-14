---
title: "Compiler Error C3152"
description: "Learn more about: Compiler Error C3152"
ms.date: 11/04/2016
f1_keywords: ["C3152"]
helpviewer_keywords: ["C3152"]
---
# Compiler Error C3152

> 'construct' : 'keyword' can only be applied to a class, struct, or virtual member function

## Remarks

Certain keywords can only be applied to a C++ class.

## Example

The following example generates C3152 and shows how to fix it:

```cpp
// C3152.cpp
// compile with: /clr /c
ref class C {
   int (*pfn)() sealed;   // C3152
   virtual int g() sealed;   // OK
};
```
