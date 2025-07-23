---
title: "Compiler Error C2341"
description: "Learn more about: Compiler Error C2341"
ms.date: 11/04/2016
f1_keywords: ["C2341"]
helpviewer_keywords: ["C2341"]
---
# Compiler Error C2341

> 'section name' : segment must be defined using #pragma data_seg, code_seg or section prior to use

## Remarks

An [allocate](../../cpp/allocate.md) statement refers to a segment not yet defined by [code_seg](../../preprocessor/code-seg.md), [data_seg](../../preprocessor/data-seg.md), or [section](../../preprocessor/section.md) pragmas.

## Example

The following example generates C2341:

```cpp
// C2341.cpp
// compile with: /c
__declspec(allocate(".test"))   // C2341
int j = 1;
```

Possible resolution:

```cpp
// C2341b.cpp
// compile with: /c
#pragma data_seg(".test")
__declspec(allocate(".test"))
int j = 1;
```
