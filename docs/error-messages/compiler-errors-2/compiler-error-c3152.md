---
description: "Learn more about: Compiler Error C3152"
title: "Compiler Error C3152"
ms.date: "11/04/2016"
f1_keywords: ["C3152"]
helpviewer_keywords: ["C3152"]
ms.assetid: 4ee6e2cd-5d19-4b73-833d-765c35797e4b
---
# Compiler Error C3152

'construct' : 'keyword' can only be applied to a class, struct, or virtual member function

Certain keywords can only be applied to a C++ class.

The following sample generates C3152 and shows how to fix it:

```cpp
// C3152.cpp
// compile with: /clr /c
ref class C {
   int (*pfn)() sealed;   // C3152
   virtual int g() sealed;   // OK
};
```
