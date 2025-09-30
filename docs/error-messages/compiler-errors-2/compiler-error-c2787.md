---
title: "Compiler Error C2787"
description: "Learn more about: Compiler Error C2787"
ms.date: 11/04/2016
f1_keywords: ["C2787"]
helpviewer_keywords: ["C2787"]
---
# Compiler Error C2787

> 'identifier' : no GUID has been associated with this object

## Remarks

The [__uuidof](../../cpp/uuidof-operator.md) operator takes a user-defined type with a GUID attached or an object of such a user-defined type. This error occurs when the argument is a user-defined type with no GUID.

## Example

The following example generates C2787:

```cpp
// C2787.cpp
#include <windows.h>
struct F {};

struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) F2;

int main() {
   __uuidof(F);   // C2787
   __uuidof(F2);   // OK
}
```
