---
description: "Learn more about: Calling Example: Function Prototype and Call"
title: "Calling Example: Function Prototype and Call"
ms.date: "11/04/2016"
helpviewer_keywords: ["calling conventions, examples [C++]", "examples [C++], calling conventions"]
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
---
# Calling Example: Function Prototype and Call

**Microsoft Specific**

The following example shows the results of making a function call using various calling conventions.

This example is based on the following function skeleton. Replace `calltype` with the appropriate calling convention.

```cpp
void    calltype MyFunc( char c, short s, int i, double f );
.
.
.
void    MyFunc( char c, short s, int i, double f )
    {
    .
    .
    .
    }
.
.
.
MyFunc ('x', 12, 8192, 2.7183);
```

For more information, see [Results of Calling Example](../cpp/results-of-calling-example.md).

**END Microsoft Specific**

## See also

[Calling Conventions](../cpp/calling-conventions.md)
