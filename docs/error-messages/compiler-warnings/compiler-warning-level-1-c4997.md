---
description: "Learn more about: Compiler Warning (level 1) C4997"
title: "Compiler Warning (level 1) C4997"
ms.date: "11/04/2016"
f1_keywords: ["C4997"]
helpviewer_keywords: ["C4997"]
ms.assetid: d39678fd-0c1a-4104-8a45-9e3f20de0407
---
# Compiler Warning (level 1) C4997

'class': coclass does not implement a COM interface or pseudo-interface

A class marked with the [coclass](../../windows/attributes/coclass.md) attribute did not implement an interface.

The following sample generates C4997:

```cpp
// C4997.cpp
// compile with: /WX
// to resolve this C4997, uncomment all code
#include <objbase.h>

[ object ]
__interface I {
   HRESULT func();
};

[ coclass ]
struct C /*: I*/ {
   /*
   HRESULT func() {
      return S_OK;
   }
   */
};   // C4997
```
