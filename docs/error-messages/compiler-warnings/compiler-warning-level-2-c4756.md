---
description: "Learn more about: Compiler Warning (level 2) C4756"
title: "Compiler Warning (level 2) C4756"
ms.date: "11/04/2016"
f1_keywords: ["C4756"]
helpviewer_keywords: ["C4756"]
ms.assetid: 5a16df83-6b82-4619-83bd-319af4ef1d1d
---
# Compiler Warning (level 2) C4756

overflow in constant arithmetic

The compiler generated an exception while doing constant arithmetic during compilation.

The following sample generates C4756:

```cpp
// C4756.cpp
// compile with: /W2 /Od
int main()
{
   float f = 1e100+1e100;   // C4756
}
```
