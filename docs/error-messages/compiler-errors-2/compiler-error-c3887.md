---
title: "Compiler Error C3887 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3887"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3887"]
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3887

'var' : the initializer for a literal data member must be a constant expression

A [literal](../../windows/literal-cpp-component-extensions.md) data member can only be initialized with a constant expresion.

The following sample generates C3887:

```
// C3887.cpp
// compile with: /clr
ref struct Y1 {
   static int i = 9;
   literal
   int staticConst = i;   // C3887
};
```

Possible resolution:

```
// C3887b.cpp
// compile with: /clr /c
ref struct Y1 {
   literal
   int staticConst = 9;
};
```