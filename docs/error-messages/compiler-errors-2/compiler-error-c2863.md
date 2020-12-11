---
description: "Learn more about: Compiler Error C2863"
title: "Compiler Error C2863"
ms.date: "11/04/2016"
f1_keywords: ["C2863"]
helpviewer_keywords: ["C2863"]
ms.assetid: 32561d67-a795-486b-b3b6-4b90a1acb176
---
# Compiler Error C2863

'interface' : an interface cannot have friends

Declaring friends on an interface is not allowed.

The following sample generates C2863:

```cpp
// C2863.cpp
// compile with: /c
#include <unknwn.h>

class CMyClass {
   void *f();
};

__interface IMyInterface {
   void g();

   friend int h();   // 2863
   friend interface IMyInterface1;  // C2863
   friend void *CMyClass::f();  // C2863
};
```
