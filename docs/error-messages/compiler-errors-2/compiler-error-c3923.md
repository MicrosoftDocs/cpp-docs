---
title: "Compiler Error C3923"
description: "Learn more about: Compiler Error C3923"
ms.date: 11/04/2016
f1_keywords: ["C3923"]
helpviewer_keywords: ["C3923"]
---
# Compiler Error C3923

> 'member' : local class, struct, or union definitions are not allowed in a member function of a WinRT or managed class

## Example

The following example generates C3923.

```cpp
// C3923.cpp
// compile with: /clr /c
ref struct x {
   void Test() {
      struct a {};   // C3923
      class b {};   // C3923
      union c {};   // C3923
   }
};
```
