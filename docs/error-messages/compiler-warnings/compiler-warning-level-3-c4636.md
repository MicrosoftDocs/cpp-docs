---
title: "Compiler Warning (level 3) C4636 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4636"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4636"]
ms.assetid: 59112a0f-850f-41c6-bd84-8ae8dc84706a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4636

XML document comment applied to 'construct': tag requires non-empty '' attribute.

A tag, such as `cref`, did not have a value.

## Example

The following sample generates C4636.

```
// C4636.cpp
// compile with: /clr /doc /W3 /c
/// <see cref=''/>
// /// <see cref='System::Exception'/>
ref struct A {   // C4636
   void f(int);
};

// OK
/// <see cref='System::Exception'/>
ref struct B {
   void f(int);
};
```