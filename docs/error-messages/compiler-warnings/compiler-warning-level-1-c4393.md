---
title: "Compiler Warning (level 1) C4393 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4393"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4393"]
ms.assetid: 353a0539-d1ea-4c1b-8849-c9b321ec9842
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4393
'var' : const has no effect on literal data member; ignored  
  
 A [literal](../../windows/literal-cpp-component-extensions.md) data member was also specified as const.  Since a literal data member implies const, you do not need to add const to the declaration.  
  
 The following sample generates C4393:  
  
```  
// C4393.cpp  
// compile with: /clr /W1 /c  
ref struct Y1 {  
   literal const int staticConst = 10;   // C4393  
   literal int staticConst2 = 10;   // OK  
};  
```