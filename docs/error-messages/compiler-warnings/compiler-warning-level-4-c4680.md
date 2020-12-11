---
description: "Learn more about: Compiler Warning (level 4) C4680"
title: "Compiler Warning (level 4) C4680"
ms.date: "11/04/2016"
f1_keywords: ["C4680"]
helpviewer_keywords: ["C4680"]
ms.assetid: 6e043f4c-c601-4b77-8130-920cff1d912e
---
# Compiler Warning (level 4) C4680

'class' : coclass does not specify a default interface

A [default](../../windows/attributes/default-cpp.md) interface was not specified for a class that was marked with the [coclass](../../windows/attributes/coclass.md) attribute. In order for an object to be useful, it must implement an interface.

The following sample generates C4680:

```cpp
// C4680.cpp
// compile with: /W4
#include <windows.h>
[module(name="MyModule")];

[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface1
{
   HRESULT f1();
};

[ object, uuid(37331a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface2
{
   HRESULT f1();
};

// to resolve C4680, specify a source interface also
// for example, default(IMyIface1, IMyface2)
[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f), default(IMyIface1), source(IMyIface1) ]
class CMyClass : public IMyIface1
{   // C4680
};

int main()
{
}
```
