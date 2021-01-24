---
description: "Learn more about: Compiler Error C2147"
title: "Compiler Error C2147"
ms.date: "11/04/2016"
f1_keywords: ["C2147"]
helpviewer_keywords: ["C2147"]
ms.assetid: d1adb3bf-7ece-4815-922c-ad7492fb6670
---
# Compiler Error C2147

syntax error : 'identifier' is a new keyword

An identifier was used that is now a reserved keyword in the language.

The following sample generates C2147:

```cpp
// C2147.cpp
// compile with: /clr
int main() {
   int gcnew = 0;   // C2147
   int i = 0;   // OK
}
```
