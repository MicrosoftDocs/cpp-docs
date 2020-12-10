---
description: "Learn more about: Compiler Error C3273"
title: "Compiler Error C3273"
ms.date: "11/04/2016"
f1_keywords: ["C3273"]
helpviewer_keywords: ["C3273"]
ms.assetid: 1d2ce9d9-222b-4cab-94e2-d2c1a9f5ebe0
---
# Compiler Error C3273

__finally cannot be used on an exception block in unmanaged code.

The following sample generates C3273:

```cpp
// C3273.cpp
// compile with: /GX
int main()
{
   try
   {
   }
   catch (int)
   {
   }
   __finally   // C3273, remove __finally clause
   {
   }
}
```
