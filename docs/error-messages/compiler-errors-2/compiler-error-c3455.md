---
title: "Compiler Error C3455 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3455"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3455"]
ms.assetid: 218e5cfe-5391-4eeb-81c2-85c47e3a6cd2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3455

'attribute': none of the attribute constructors matched the arguments

An invalid value was used to declare an attribute.  See [attribute](../../windows/attribute.md) for more information.

## Example

The following sample generates C3455.

```
// C3455.cpp
// compile with: /clr /c
using namespace System;

[attribute("MyAt")]   // C3455
// try the following line instead
// [attribute(All)]
ref struct MyAttr {
   MyAttr() {}
};
```