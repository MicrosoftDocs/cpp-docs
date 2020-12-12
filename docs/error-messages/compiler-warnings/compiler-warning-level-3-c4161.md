---
description: "Learn more about: Compiler Warning (level 3) C4161"
title: "Compiler Warning (level 3) C4161"
ms.date: "08/27/2018"
f1_keywords: ["C4161"]
helpviewer_keywords: ["C4161"]
ms.assetid: 03d3be61-83f1-4009-8310-8758ab67055f
---
# Compiler Warning (level 3) C4161

> #pragma *pragma*(pop...) : more pops than pushes

## Remarks

Because your source code contains one more pop than pushes for pragma *pragma*, the stack may not behave as you expect. To avoid the warning, be sure that the number of pops does not exceed the number of pushes.

## Example

The following example generates C4161:

```cpp
// C4161.cpp
// compile with: /W3 /LD
#pragma pack(push, id)
#pragma pack(pop, id)
#pragma pack(pop, id)   // C4161, an extra pop

#pragma bss_seg(".my_data1")
int j;

#pragma bss_seg(push, stack1, ".my_data2")
int l;

#pragma bss_seg(pop, stack1)
int m;

#pragma bss_seg(pop, stack1)   // C4161
```
