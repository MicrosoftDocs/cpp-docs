---
description: "Learn more about: Compiler Error C3372"
title: "Compiler Error C3372"
ms.date: "11/04/2016"
f1_keywords: ["C3372"]
helpviewer_keywords: ["C3372"]
ms.assetid: 38ee39ed-03ff-4e6d-9104-f1977b96645d
---
# Compiler Error C3372

must specify at least 1 interface for attribute 'source' on a coclass

For certain attributes, you must pass an interface name as a parameter.

The following sample generates C3372:

```cpp
// C3372.cpp
#include <windows.h>
[module(name="MyModule")];

[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface {
   HRESULT f1();
};
// to resolve, pass an interface name to the source attribute
// for example, source(IMyIface)
[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f), source,
  default(IMyIface) ] // C3372
class CMyClass {
};

int main() {
}
```
