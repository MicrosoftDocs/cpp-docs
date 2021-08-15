---
description: "Learn more about: Compiler Error C3117"
title: "Compiler Error C3117"
ms.date: "11/04/2016"
f1_keywords: ["C3117"]
helpviewer_keywords: ["C3117"]
ms.assetid: dceee392-d4c7-4599-b75e-7aaac7c36fdd
---
# Compiler Error C3117

'%$S' : an interface can only have one base class

You declared an interface that inherits from multiple base classes.

The following sample generates C3117:

```cpp
// C3117.cpp
#include <windows.h>

[ object, uuid("00000000-0000-0000-0000-000000000001") ]
__interface I1
{
};

[ object, uuid("00000000-0000-0000-0000-000000000002") ]
__interface I2
{
};

[ object, uuid("00000000-0000-0000-0000-000000000003") ]
__interface I3 : I1, I2
{   // C3117
};
```
