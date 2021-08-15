---
description: "Learn more about: Compiler Error C2137"
title: "Compiler Error C2137"
ms.date: "11/04/2016"
f1_keywords: ["C2137"]
helpviewer_keywords: ["C2137"]
ms.assetid: 984687ee-7766-4f6b-ae15-0c9a010e2366
---
# Compiler Error C2137

empty character constant

The empty character constant ( ' ' ) is not permitted.

The following sample generates C2137:

```cpp
// C2137.cpp
int main() {
   char c = '';   // C2137
   char d = ' ';   // OK
}
```
