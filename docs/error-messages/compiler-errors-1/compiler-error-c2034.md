---
description: "Learn more about: Compiler Error C2034"
title: "Compiler Error C2034"
ms.date: "11/04/2016"
f1_keywords: ["C2034"]
helpviewer_keywords: ["C2034"]
ms.assetid: 953d70fa-bde9-4ce6-a55d-741e7bc63ff4
---
# Compiler Error C2034

'identifier' : type of bit field too small for number of bits

The number of bits in the bit-field declaration exceeds the size of the base type.

The following sample generates C2034:

```cpp
// C2034.cpp
struct A {
   char test : 9;   // C2034, char has 8 bits
};
```

Possible resolution:

```cpp
// C2034b.cpp
// compile with: /c
struct A {
   char test : 8;
};
```
