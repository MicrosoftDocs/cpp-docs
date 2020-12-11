---
description: "Learn more about: Compiler Error C2846"
title: "Compiler Error C2846"
ms.date: "11/04/2016"
f1_keywords: ["C2846"]
helpviewer_keywords: ["C2846"]
ms.assetid: bc090ec2-5410-4112-9ec6-261325374375
---
# Compiler Error C2846

'constructor' : an interface cannot have a constructor

A Visual C++ [interface](../../cpp/interface.md) cannot have a constructor.

The following sample generates C2846:

```cpp
// C2846.cpp
// compile with: /c
__interface C {
   C();   // C2846 constructor not allowed in an interface
};
```
