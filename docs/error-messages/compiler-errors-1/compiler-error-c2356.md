---
title: "Compiler Error C2356"
description: "Learn more about: Compiler Error C2356"
ms.date: 11/04/2016
f1_keywords: ["C2356"]
helpviewer_keywords: ["C2356"]
---
# Compiler Error C2356

> initialization segment must not change during translation unit

## Remarks

Possible causes:

- `#pragma init_seg` preceded by segment initialization code

- `#pragma init_seg` preceded by another `#pragma init_seg`

To resolve, move the segment initialization code to the beginning of the module. If multiple areas must be initialized, move them to separate modules.

## Example

The following example generates C2356:

```cpp
// C2356.cpp
#pragma warning(disable : 4075)

int __cdecl myexit(void (__cdecl *)());
int __cdecl myexit2(void (__cdecl *)());

#pragma init_seg(".mine$m",myexit)
#pragma init_seg(".mine$m",myexit2)   // C2356
```
