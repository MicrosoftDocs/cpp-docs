---
title: "Compiler Error C3152 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3152"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3152"]
ms.assetid: 4ee6e2cd-5d19-4b73-833d-765c35797e4b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3152
'construct' : 'keyword' can only be applied to a class, struct, or virtual member function  
  
 Certain keywords can only be applied to a C++ class.  
  
 The following sample generates C3152 and shows how to fix it:  
  
```  
// C3152.cpp  
// compile with: /clr /c  
ref class C {  
   int (*pfn)() sealed;   // C3152  
   virtual int g() sealed;   // OK  
};  
```  
