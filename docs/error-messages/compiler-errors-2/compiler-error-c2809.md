---
description: "Learn more about: Compiler Error C2809"
title: "Compiler Error C2809"
ms.date: "11/04/2016"
f1_keywords: ["C2809"]
helpviewer_keywords: ["C2809"]
ms.assetid: ce796b8e-1a8c-4074-995d-1ad09afd0e93
---
# Compiler Error C2809

'operator operator' has no formal parameters

The operator lacks required parameters.

The following sample generates C2809:

```cpp
// C2809.cpp
// compile with: /c
class A{};
int operator+ ();   // C2809
int operator+ (A);   // OK
```
