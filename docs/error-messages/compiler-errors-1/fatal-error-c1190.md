---
description: "Learn more about: Fatal Error C1190"
title: "Fatal Error C1190"
ms.date: "11/04/2016"
f1_keywords: ["C1190"]
helpviewer_keywords: ["C1190"]
ms.assetid: dee2266d-6c40-4f6e-91db-f01e65f8d2bc
---
# Fatal Error C1190

managed targeted code requires a '/clr' option

You are using CLR constructs but you did not specify **/clr**.

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

The following sample generates C1190:

```cpp
// C1190.cpp
// compile with: /c
__gc class A {};   // C1190
ref class A {};
```
