---
title: "Compiler Error C3138"
description: "Learn more about: Compiler Error C3138"
ms.date: 11/04/2016
f1_keywords: ["C3138"]
helpviewer_keywords: ["C3138"]
---
# Compiler Error C3138

> 'interface' : a 'attribute' interface must inherit from IDispatch, or from an interface that inherits from IDispatch

## Remarks

An interface with the [dual](../../windows/attributes/dual.md) or [dispinterface](../../windows/attributes/dispinterface.md) attributes does not have `IDispatch` as a direct or indirect base interface.

## Example

The following example generates C3138:

```cpp
// C3138.cpp
#include <unknwn.h>

[ object, uuid("77ac9240-6e9a-11d2-97de-0000f805d73b") ]
__interface IMyCustomInterface
{
   HRESULT mf1(void);
};

[ dispinterface, uuid("3536f8a0-6e9a-11d2-97de-0000f805d73b") ]
__interface IMyDispInterface : IUnknown
{
   [id(1)] HRESULT mf2(void);
};

[ object, dual, uuid("34e90a10-6e9a-11d2-97de-0000f805d73b") ]
__interface IMyDualInterface : IMyCustomInterface  // C3138 expected
{
   HRESULT mf3(void);
};
```
