---
description: "Learn more about: Compiler Error C3239"
title: "Compiler Error C3239"
ms.date: "11/04/2016"
f1_keywords: ["C3239"]
helpviewer_keywords: ["C3239"]
ms.assetid: 22a518b7-020f-4f3c-9963-a094667fd1ac
---
# Compiler Error C3239

'type' : pointer to interior/pin pointer is disallowed by the common language runtime

The compiler encountered an invalid type.

The following sample generates C3229:

```cpp
// C3239.cpp
// compile with: /clr
int main() {
   interior_ptr<int>* pip0;   // C3239

   // OK
   int * pip1;
   interior_ptr<int> pip2;
   int ** pip;
}
```
