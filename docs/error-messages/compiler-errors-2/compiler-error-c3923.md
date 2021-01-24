---
description: "Learn more about: Compiler Error C3923"
title: "Compiler Error C3923"
ms.date: "11/04/2016"
f1_keywords: ["C3923"]
helpviewer_keywords: ["C3923"]
ms.assetid: db8838e9-6344-4cd6-83e0-a8abeb12c4c0
---
# Compiler Error C3923

'member' : local class, struct, or union definitions are not allowed in a member function of a WinRT or managed class

## Example

The following sample generates C3923.

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
