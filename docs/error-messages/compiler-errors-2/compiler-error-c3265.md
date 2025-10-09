---
title: "Compiler Error C3265"
description: "Learn more about: Compiler Error C3265"
ms.date: 11/04/2016
f1_keywords: ["C3265"]
helpviewer_keywords: ["C3265"]
---
# Compiler Error C3265

> cannot declare a managed 'managed construct' in an unmanaged 'unmanaged construct'

## Remarks

You cannot include a managed object in an unmanaged context.

## Example

The following example reproduces C3265:

```cpp
// C3265_2.cpp
// compile with: /clr /LD
#include <vcclr.h>

ref class A { };

class B
// try the following line instead
// ref class B
{
   A ^a;   // C3265
   // or embed the managed handle using gcroot
   // try the following line instead
   // gcroot<A^> a;
};
```
