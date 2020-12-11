---
description: "Learn more about: Compiler Error C2480"
title: "Compiler Error C2480"
ms.date: "11/04/2016"
f1_keywords: ["C2480"]
helpviewer_keywords: ["C2480"]
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
---
# Compiler Error C2480

'identifier' : 'thread' is only valid for data items of static extent

You cannot use the `thread` attribute with an automatic variable, nonstatic data member, function parameter, or on function declarations or definitions.

Use the `thread` attribute for global variables, static data members, and local static variables only.

The following sample generates C2480:

```cpp
// C2480.cpp
// compile with: /c
__declspec( thread ) void func();   // C2480
__declspec( thread ) static int i;   // OK
```
