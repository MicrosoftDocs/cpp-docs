---
description: "Learn more about: Compiler Error C3204"
title: "Compiler Error C3204"
ms.date: "11/04/2016"
f1_keywords: ["C3204"]
helpviewer_keywords: ["C3204"]
ms.assetid: 06e578da-0262-48c8-b2ae-be1cd6d28884
---
# Compiler Error C3204

'_alloca' cannot be called from within a catch block

This error occurs when you use a call to [_alloca](../../c-runtime-library/reference/alloca.md) from within a catch block.

## Example

The following sample generates C3204:

```cpp
// C3204.cpp
// compile with: /EHsc
#include <malloc.h>

void ShowError(void)
{
   try
   {
   }
   catch(...)
   {
      _alloca(1);   // C3204
   }
}
```
