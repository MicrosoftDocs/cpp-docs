---
title: "Compiler Error C2480"
description: "Learn more about: Compiler Error C2480"
ms.date: 11/04/2016
f1_keywords: ["C2480"]
helpviewer_keywords: ["C2480"]
---
# Compiler Error C2480

> 'identifier' : 'thread' is only valid for data items of static extent

## Remarks

You cannot use the `thread` attribute with an automatic variable, nonstatic data member, function parameter, or on function declarations or definitions.

Use the `thread` attribute for global variables, static data members, and local static variables only.

## Example

The following example generates C2480:

```cpp
// C2480.cpp
// compile with: /c
__declspec( thread ) void func();   // C2480
__declspec( thread ) static int i;   // OK
```
