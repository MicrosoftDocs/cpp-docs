---
title: "Compiler Error C3733"
description: "Learn more about: Compiler Error C3733"
ms.date: 11/04/2016
f1_keywords: ["C3733"]
helpviewer_keywords: ["C3733"]
---
# Compiler Error C3733

> 'event': improper syntax for specifying a COM event; did you forget '__interface'?

## Remarks

The wrong syntax was used for a COM event. To fix this error, change the event type or correct the syntax to comply with the COM event rules.

## Example

The following example generates C3733:

```cpp
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[coclass, event_source(com), // change 'com' to 'native' to resolve
uuid("00000000-0000-0000-0000-000000000001")]
class A
{
   __event void func();   // C3733
};

int main()
{
}
```
