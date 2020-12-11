---
description: "Learn more about: Compiler Error C2040"
title: "Compiler Error C2040"
ms.date: "11/04/2016"
f1_keywords: ["C2040"]
helpviewer_keywords: ["C2040"]
ms.assetid: 74ca3592-1469-4965-ab34-a4815e2fbefe
---
# Compiler Error C2040

'operator' : 'identifier1' differs in levels of indirection from 'identifier2'

An expression involving the specified operands has incompatible operand types or implicitly converted operand types. If both operands are arithmetic, or both are nonarithmetic (such as array or pointer), they are used without change. If one operand is arithmetic and the other is not, the arithmetic operand is converted to the type of the nonarithmetic operand.

This sample generates C2040 and shows how to fix it.

```cpp
// C2040.cpp
// Compile by using: cl /c /W3 C2040.cpp
bool test() {
   char c = '3';
   return c == "3"; // C2446, C2040
   // return c == '3'; // OK
}
```
