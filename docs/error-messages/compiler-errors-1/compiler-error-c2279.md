---
title: "Compiler Error C2279"
description: "Learn more about: Compiler Error C2279"
ms.date: 11/04/2016
f1_keywords: ["C2279"]
helpviewer_keywords: ["C2279"]
---
# Compiler Error C2279

> exception specification cannot appear in a typedef declaration

## Remarks

Under **/Za**, [exception specifications](../../cpp/exception-specifications-throw-cpp.md) are not allowed in a typedef declaration.

## Example

The following example generates C2279:

```cpp
// C2279.cpp
// compile with: /Za /c
typedef int (*xy)() throw(...);   // C2279
typedef int (*xyz)();   // OK
```
