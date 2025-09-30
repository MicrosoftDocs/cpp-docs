---
title: "Compiler Error C2008"
description: "Learn more about: Compiler Error C2008"
ms.date: 11/04/2016
f1_keywords: ["C2008"]
helpviewer_keywords: ["C2008"]
---
# Compiler Error C2008

> 'character' : unexpected in macro definition

## Remarks

The character appears immediately following the macro name. To resolve the error, there must be a space after the macro name.

## Example

The following example generates C2008:

```cpp
// C2008.cpp
#define TEST1"mytest1"    // C2008
```

Possible resolution:

```cpp
// C2008b.cpp
// compile with: /c
#define TEST2 "mytest2"
```
