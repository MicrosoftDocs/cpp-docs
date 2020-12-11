---
description: "Learn more about: Compiler Warning (level 3) C4310"
title: "Compiler Warning (level 3) C4310"
ms.date: "11/04/2016"
f1_keywords: ["C4310"]
helpviewer_keywords: ["C4310"]
ms.assetid: cba3eca1-f1ed-499c-9243-337446bdbdd8
---
# Compiler Warning (level 3) C4310

cast truncates constant value

A constant value is cast to a smaller type. The compiler performs the cast, which truncates data. The following sample generates C4310:

```cpp
// C4310.cpp
// compile with: /W4
int main() {
   long int a;
   a = (char) 128;   // C4310, use value 0-127 to resolve
}
```
