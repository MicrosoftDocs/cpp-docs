---
title: "Compiler Error C2032 | Microsoft Docs"
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
  - "C2032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2032"
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2032
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2032](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2032).  
  
  
identifier' : function cannot be member of struct/union 'structorunion'  
  
 The structure or union has a member function, which is allowed in C++ but not in C. To resolve the error, either compile as a C++ program or remove the member function.  
  
 The following sample generates C2032:  
  
```  
// C2032.c  
struct z {  
   int i;  
   void func();   // C2032  
};  
```  
  
 Possible resolution:  
  
```  
// C2032b.c  
// compile with: /c  
struct z {  
   int i;  
};  
```

