---
title: "Compiler Error C2309 | Microsoft Docs"
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
  - "C2309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2309"
ms.assetid: 6303d5b5-72cf-42b8-92ce-b1eb48e80d48
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2309
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2309](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2309).  
  
  
catch handler expected a parenthesized exception declaration  
  
 A catch handler has no parenthesized type.  
  
 The following sample generates C2309:  
  
```  
// C2309.cpp  
// compile with: /EHsc  
#include <eh.h>  
class C {};  
int main() {  
   try {  
      throw "ooops!";  
   }  
   catch C {}   // C2309  
   // try the following line instead  
   // catch( C ) {}  
}  
```

