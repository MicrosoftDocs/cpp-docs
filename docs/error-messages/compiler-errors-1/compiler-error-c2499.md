---
description: "Learn more about: Compiler Error C2499"
title: "Compiler Error C2499"
ms.date: "11/04/2016"
f1_keywords: ["C2499"]
helpviewer_keywords: ["C2499"]
ms.assetid: b323ff4d-b3c1-4bfd-b052-ae7292d53222
---
# Compiler Error C2499

'class' : a class cannot be its own base class

You attempted to specify the class that you are defining as a base class.

The following sample generates C2499:

```cpp
// C2499.cpp
// compile with: /c
class CMyClass : public CMyClass {};   // C2499
class CMyClass{};   // OK
```
