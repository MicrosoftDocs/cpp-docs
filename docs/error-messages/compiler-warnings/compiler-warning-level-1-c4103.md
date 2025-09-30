---
title: "Compiler Warning (level 1) C4103"
description: "Learn more about: Compiler Warning (level 1) C4103"
ms.date: 11/04/2016
f1_keywords: ["C4103"]
helpviewer_keywords: ["C4103"]
---
# Compiler Warning (level 1) C4103

> 'filename' : alignment changed after including header, may be due to missing #pragma pack(pop)

## Remarks

Packing affects the layout of classes, and commonly, if packing changes across header files, there can be problems.

Use #pragma [pack](../../preprocessor/pack.md)(pop) before exiting the header file to resolve this warning.

## Example

The following example generates C4103:

```cpp
// C4103.h
#pragma pack(push, 4)

// definitions and declarations

// uncomment the following line to resolve
// #pragma pack(pop)
```

And then,

```cpp
// C4103.cpp
// compile with: /LD /W1
#include "c4103.h"   // C4103
```
