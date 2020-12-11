---
description: "Learn more about: Compiler Error C3136"
title: "Compiler Error C3136"
ms.date: "10/03/2018"
f1_keywords: ["C3136"]
helpviewer_keywords: ["C3136"]
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
---
# Compiler Error C3136

'interface' : a COM interface can only inherit from another COM interface, 'interface' is not a COM interface

An interface to which you applied an [interface attribute](../../windows/attributes/interface-attributes.md) inherits from an interface that is not a COM interface. A COM interface ultimately inherits from `IUnknown`. Any interface preceded by an interface attribute is a COM interface.

The following example generates C3136:

```cpp
// C3136.cpp
#include "unknwn.h"

__interface A   // C3136
// try the following line instead
// _interface A : IUnknown
{
   int a();
};

[object]
__interface B : A
{
   int aa();
};
```
