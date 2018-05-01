---
title: "Compiler Error C2648 | Microsoft Docs"
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
  - "C2648"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2648"
ms.assetid: ce338337-9154-4f85-bb61-b05fdbfad75d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2648
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2648](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2648).  
  
  
identifier' : use of member as default parameter requires static member  
  
 A non-static member is used as a default parameter.  
  
 The following sample generates C2648:  
  
```  
// C2648.cpp  
// compile with: /c  
class C {  
public:  
   int i;  
   static int j;  
   void func1( int i = i );  // C2648  i is not static  
   void func2( int i = j );  // OK  
};  
```

