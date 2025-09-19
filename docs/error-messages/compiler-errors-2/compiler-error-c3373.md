---
title: "Compiler Error C3373"
description: "Learn more about: Compiler Error C3373"
ms.date: 11/04/2016
f1_keywords: ["C3373"]
helpviewer_keywords: ["C3373"]
---
# Compiler Error C3373

> attribute 'attribute' takes no arguments except on a coclass

## Remarks

Some attributes can be applied to more than one C++ construct, but arguments to the attribute may only be allowed on some constructs.

## Example

The following example generates C3373:

```cpp
// C3373.cpp
#include <windows.h>

[module(name="MyModule")];

[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface
{
   // arguments to source and restricted are not allowed when
   // these attributes are applied to an interface
   [source(IMyIface)] HRESULT f1();
   [restricted(IMyIface)] HRESULT f2(); // C3373
};

[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f) ]
class CMyClass : public IMyIface {
};

int main() {
}
```
