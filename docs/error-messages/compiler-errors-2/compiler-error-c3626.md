---
title: "Compiler Error C3626 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3626"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3626"]
ms.assetid: 43926e2b-1ba9-4a43-9343-c58449cbb336
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3626
'keyword': '__event' keyword can only be used on COM interfaces, member functions and data members that are pointers to delegates  
  
 A keyword was used incorrectly.  
  
 The following sample generates C3626:  
  
```  
// C3626.cpp  
// compile with: /c  
struct A {  
   __event int i;   // C3626  
// try the following line instead  
// __event int i();  
};  
```