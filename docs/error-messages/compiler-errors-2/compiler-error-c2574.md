---
title: "Compiler Error C2574 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2574"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2574"]
ms.assetid: 3e1c5c18-ee8b-4dbb-bfc0-d3b8991af71b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2574

'destructor' : cannot be declared static

Neither destructors nor constructors can be declared `static`.

The following sample generates C2574:

```
// C2574.cpp
// compile with: /c
class A {
   virtual static ~A();   // C2574
   //  try the following line instead
   // virtual ~A();
};
```