---
description: "Learn more about: Compiler Error C2117"
title: "Compiler Error C2117"
ms.date: "11/04/2016"
f1_keywords: ["C2117"]
helpviewer_keywords: ["C2117"]
ms.assetid: b947379d-5861-42fc-ac26-170318579cbd
---
# Compiler Error C2117

'identifier' : array bounds overflow

An array has too many initializers:

- Array elements and initializers do not match in size and quantity.

- No space for the null terminator in a string.

The following sample generates C2117:

```cpp
// C2117.cpp
int main() {
   char abc[4] = "abcd";   // C2117
   char def[4] = "abd";   // OK
}
```
