---
title: "Compiler Error C2093 | Microsoft Docs"
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
  - "C2093"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2093"
ms.assetid: 17529a70-9169-46b5-9fc6-57a5ce224e6a
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2093
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2093](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2093).  
  
  
variable1' : cannot be initialized using address of automatic variable 'variable2'  
  
 When compiling with [/Za](../../build/reference/za-ze-disable-language-extensions.md), the program tried to use the address of an automatic variable as an initializer.  
  
 The following sample generates C2093:  
  
```  
// C2093.c  
// compile with: /Za /c  
void func() {  
   int li;   // an implicit auto variable  
   int * s[]= { &li };   // C2093 address is not a constant  
  
   // OK  
   static int li2;  
   int * s2[]= { &li2 };  
}  
```

