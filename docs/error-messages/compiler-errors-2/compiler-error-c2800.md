---
description: "Learn more about: Compiler Error C2800"
title: "Compiler Error C2800"
ms.date: "11/04/2016"
f1_keywords: ["C2800"]
helpviewer_keywords: ["C2800"]
ms.assetid: a2f1a590-9fe6-44cb-ad09-b4505ef47c6a
---
# Compiler Error C2800

'operator operator' cannot be overloaded

The following operators cannot be overloaded: class member access (`.`), pointer to member (`.*`), scope resolution (`::`), conditional expression (`? :`), and **`sizeof`**.

The following sample generates C2800:

```cpp
// C2800.cpp
// compile with: /c
class C {
   operator:: ();   // C2800
};
```
