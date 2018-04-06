---
title: "Compiler Error C2459 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2459"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2459"]
ms.assetid: 81e29f4c-5b60-40fb-9557-1cdc630d77e8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2459
'identifier' : is being defined; cannot add as an anonymous member  
  
 A class, structure, or union is redefined in its own scope by a member of an anonymous union.  
  
 The following sample generates C2459:  
  
```  
// C2459.cpp  
// compile with: /c  
class C {  
   union { int C; };   // C2459  
   union { int D; };  
};  
```