---
title: "Compiler Error C3626 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3626"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3626"
ms.assetid: 43926e2b-1ba9-4a43-9343-c58449cbb336
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3626
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3626](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3626).  
  
  
keyword': '__event' keyword can only be used on COM interfaces, member functions and data members that are pointers to delegates  
  
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

