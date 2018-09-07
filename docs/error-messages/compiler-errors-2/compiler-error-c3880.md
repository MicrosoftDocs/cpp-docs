---
title: "Compiler Error C3880 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3880"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3880"]
ms.assetid: b0e05d1e-32d0-4034-9246-f37d23573ea9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3880
'var' : cannot be a literal data member  
  
 The type of a [literal](../../windows/literal-cpp-component-extensions.md) attribute must be, or compile-time convertible to, one of the following types:  
  
-   integral type  
  
-   string  
  
-   enum with an integral or underlying type  
  
 The following sample generates C3880:  
  
```  
// C3880.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal System::Decimal staticConst1 = 10;   // C3880  
   literal int staticConst2 = 10;   // OK  
};  
```