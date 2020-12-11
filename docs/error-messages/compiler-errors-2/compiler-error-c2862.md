---
description: "Learn more about: Compiler Error C2862"
title: "Compiler Error C2862"
ms.date: "11/04/2016"
f1_keywords: ["C2862"]
helpviewer_keywords: ["C2862"]
ms.assetid: c04d8499-b799-48a1-9fb4-7902a0b0ac8e
---
# Compiler Error C2862

'interface' : an interface can only have public members

Protected and private members may be accessed only from other member functions. Such members are no use in an interface, since it may not provide implementations for any of its members.

The following sample will generate C2862:

```cpp
// C2862.cpp
// compile with: /c
#include <unknwn.h>

[object, uuid="60719E20-EF37-11D1-978D-0000F805D73B"]
__interface IMyInterface {
   HRESULT mf1(void);   // OK
protected:
   HRESULT mf2(int *b);   // C2862
private:
   HRESULT mf3(int *c);   // C2862
};
```
