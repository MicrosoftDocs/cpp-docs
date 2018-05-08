---
title: "Compiler Error C3417 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3417"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3417"]
ms.assetid: 3e7869ea-8948-42fb-ba30-6ccafe499c35
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3417
'member' : value types cannot contain user-defined special member functions  
  
 Value types cannot contain functions such as a default instance constructor, destructor, or copy constructor.  
  
 The following sample generates C3517:  
  
```  
// C3417.cpp  
// compile with: /clr /c  
value class VC {  
   VC(){}   // C3417  
  
   // OK  
   static VC(){}  
   VC(int i){}  
};  
```