---
description: "Learn more about: Compiler Error C2810"
title: "Compiler Error C2810"
ms.date: "11/04/2016"
f1_keywords: ["C2810"]
helpviewer_keywords: ["C2810"]
ms.assetid: f63e8f24-d7f6-42ac-904f-72ff49592ba6
---
# Compiler Error C2810

'interface' : an interface can only inherit from another interface

An [interface](../../cpp/interface.md) may only inherit from another interface and may not inherit from a class or struct.

The following sample generates C2810:

```cpp
// C2810.cpp
#include <unknwn.h>
class CBase1 {
public:
  HRESULT mf1();
  int  m_i;
};

[object, uuid="40719E20-EF37-11D1-978D-0000F805D73B"]
__interface IDerived : public CBase1 {  // C2810
// try the following line instead
// __interface IDerived {
   HRESULT mf2(void *a);
};

struct CBase2 {
   HRESULT mf1(int a, char *b);
   HRESULT mf2();
};
```
