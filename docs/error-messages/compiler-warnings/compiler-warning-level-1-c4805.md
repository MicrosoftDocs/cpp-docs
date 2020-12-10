---
description: "Learn more about: Compiler Warning (level 1) C4805"
title: "Compiler Warning (level 1) C4805"
ms.date: "11/04/2016"
f1_keywords: ["C4805"]
helpviewer_keywords: ["C4805"]
ms.assetid: 99c7b7e2-272e-4ab5-8580-17c42e62e2ef
---
# Compiler Warning (level 1) C4805

'operation' : unsafe mix of type 'type' and type 'type' in operation

This warning is generated for comparison operations between [bool](../../cpp/bool-cpp.md) and [int](../../c-language/integer-types.md). The following sample generates C4805:

```cpp
// C4805.cpp
// compile with: /W1
int main() {
   int i = 1;
   bool b = true;

   if (i == b) {   // C4805, comparing bool and int variables
   }
}
```
