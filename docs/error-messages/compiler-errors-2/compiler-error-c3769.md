---
title: "Compiler Error C3769 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3769"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3769"]
ms.assetid: 341675e1-7428-4da6-8275-1b2f0a70dacc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3769
'type' : a nested class cannot have the same name as the immediately enclosing class  
  
 A nested class cannot have the same name as the immediately enclosing class.  
  
## Example  
 The following sample generates C3769.  
  
```  
// C3769.cpp  
// compile with: /c  
class x {  
   class x {};   // C3769  
   class y {  
      class x{};   // OK  
   };  
};  
```