---
description: "Learn more about: Compiler Warning (level 1) C4806"
title: "Compiler Warning (level 1) C4806"
ms.date: "11/04/2016"
f1_keywords: ["C4806"]
helpviewer_keywords: ["C4806"]
ms.assetid: 79eb74cd-b925-4b5b-84e1-8ae6f33e38b3
---
# Compiler Warning (level 1) C4806

'operation' : unsafe operation: no value of type 'type' promoted to type 'type' can equal the given constant

This message warns against code such as `b == 3`, where `b` has type **`bool`**. The promotion rules cause **`bool`** to be promoted to **`int`**. This is legal, but it can never be **`true`**. The following sample generates C4806:

```cpp
// C4806.cpp
// compile with: /W1
int main()
{
   bool b = true;
   // try..
   // int b = true;

   if (b == 3)   // C4806
   {
      b = false;
   }
}
```
