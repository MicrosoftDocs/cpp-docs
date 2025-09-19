---
title: "Compiler Error C3358"
description: "Learn more about: Compiler Error C3358"
ms.date: 11/04/2016
f1_keywords: ["C3358"]
helpviewer_keywords: ["C3358"]
---
# Compiler Error C3358

> 'symbol': symbol not found

## Remarks

The required symbol was not found.

## Example

The following example generates C3358:

```cpp
// C3358.cpp
#define __ATLEVENT_H__ 1   // remove this line to resolve the error
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[event_receiver(com)]
struct A   // C3358
{
   void func();
};

int main()
{
}
```
