---
title: "Compiler Error C3609 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3609"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3609"]
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3609
'member': a sealed or final function must be virtual  
  
 The [sealed](../../windows/sealed-cpp-component-extensions.md) and [final](../../cpp/final-specifier.md) keywords are only allowed on a class, struct, or member function marked `virtual`.  
  
 The following sample generates C3609:  
  
```  
// C3609.cpp  
// compile with: /clr /c  
ref class C {  
   int f() sealed;   // C3609  
   virtual int f2() sealed;   // OK  
};  
```  
