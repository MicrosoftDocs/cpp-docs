---
title: "Compiler Error C3126 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3126"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3126"]
ms.assetid: e72658a3-5d85-4a31-89a4-dbc3d475973d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3126
cannot define a union 'union' inside of managed type 'type'  
  
 A union cannot be defined inside a managed type.  
  
 The following sample generates C3126:  
  
```  
// C3126_2.cpp  
// compile with: /clr /c  
ref class Test  
{  
   union x  
   {   // C3126  
      int a;  
      int b;  
   };  
};  
```  
