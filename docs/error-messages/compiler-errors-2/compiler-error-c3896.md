---
title: "Compiler Error C3896 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3896"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3896"]
ms.assetid: eb8be0f6-5b4e-4d71-8285-8a2a94f8ba29
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3896
'member' : improper initializer: this literal data member can only be initialized with 'nullptr'  
  
 A [literal](../../windows/literal-cpp-component-extensions.md) data member was initialized incorrectly.  See [nullptr](../../windows/nullptr-cpp-component-extensions.md) for more information.  
  
 The following sample generates C3896:  
  
```  
// C3896.cpp  
// compile with: /clr /c  
ref class R{};  
  
value class V {  
   literal R ^ r = "test";   // C3896  
   literal R ^ r2 = nullptr;   // OK  
};  
```