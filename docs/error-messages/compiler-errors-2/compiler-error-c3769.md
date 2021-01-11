---
description: "Learn more about: Compiler Error C3769"
title: "Compiler Error C3769"
ms.date: "11/04/2016"
f1_keywords: ["C3769"]
helpviewer_keywords: ["C3769"]
ms.assetid: 341675e1-7428-4da6-8275-1b2f0a70dacc
---
# Compiler Error C3769

'type' : a nested class cannot have the same name as the immediately enclosing class

A nested class cannot have the same name as the immediately enclosing class.

## Example

The following sample generates C3769.

```cpp
// C3769.cpp
// compile with: /c
class x {
   class x {};   // C3769
   class y {
      class x{};   // OK
   };
};
```
