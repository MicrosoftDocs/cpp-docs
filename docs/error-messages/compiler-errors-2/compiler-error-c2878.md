---
title: "Compiler Error C2878 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2878"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2878"]
ms.assetid: 83ee3de1-f554-49e8-a840-1f550cee7f69
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2878
'name' : a namespace or class of this name does not exist  
  
 You made reference to a namespace or class that is not defined.  
  
 The following sample generates C2878:  
  
```  
// C2878.cpp  
// compile with: /c  
namespace A {}  
namespace B = C;   // C2878 namespace C doesn't exist  
namespace B = A;   
```