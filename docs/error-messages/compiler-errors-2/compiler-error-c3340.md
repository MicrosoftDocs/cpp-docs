---
description: "Learn more about: Compiler Error C3340"
title: "Compiler Error C3340"
ms.date: "11/04/2016"
f1_keywords: ["C3340"]
helpviewer_keywords: ["C3340"]
ms.assetid: 23b12298-b92a-4717-8380-f165c998cb8a
---
# Compiler Error C3340

'interface': interface cannot be both 'restricted' and 'default' in coclass 'class'

The [restricted](../../windows/attributes/restricted.md) attribute and the [default](../../windows/attributes/default-cpp.md) attribute are mutually exclusive.

The following sample generates C3340:

```cpp
// C3340.cpp
#include <windows.h>
[module(name="MyModule")];

[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface
{
   HRESULT f1();
};

[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f),
default(IMyIface),
source(IMyIface),restricted(IMyIface) ]
class CmyClass // C3340
{
};

int main()
{
}
```
