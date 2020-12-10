---
description: "Learn more about: Compiler Error C2874"
title: "Compiler Error C2874"
ms.date: "11/04/2016"
f1_keywords: ["C2874"]
helpviewer_keywords: ["C2874"]
ms.assetid: b54fa9d8-8df5-40d9-9b3b-aa3e9dd6a3be
---
# Compiler Error C2874

using-declaration causes a multiple declaration of 'symbol'

The declaration causes the same item to be defined twice.

The following sample generates C2874:

```cpp
// C2874.cpp
namespace Z {
   int i;
}

int main() {
   int i;
   using Z::i;   // C2874, i already declared
}
```
