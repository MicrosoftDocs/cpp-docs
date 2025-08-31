---
title: "Compiler Warning (level 1) C4659"
description: "Learn more about: Compiler Warning (level 1) C4659"
ms.date: 11/04/2016
f1_keywords: ["C4659"]
helpviewer_keywords: ["C4659"]
---
# Compiler Warning (level 1) C4659

> #pragma 'pragma' : use of reserved segment 'segment' has undefined behavior, use #pragma comment(linker, ...)

## Remarks

The .drectve option was used to pass an option to the linker. Instead use pragma [comment](../../preprocessor/comment-c-cpp.md) for passing a linker option.

## Example

```cpp
// C4659.cpp
// compile with: /W1 /LD
#pragma code_seg(".drectve")   // C4659
```
