---
title: "Compiler Error C2310 | Microsoft Docs"
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
  - "C2310"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2310"
ms.assetid: 1969c682-b97e-43fb-b9a9-f783e7ff1710
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2310
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2310](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2310).  
  
  
catch handlers must specify one type  
  
 A catch handler specified no type or multiple types.  
  
 The following sample generates C2310:  
  
```  
// C2310.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "Out of memory!";  
   }  
   catch( int ,int) {}   // C2310 two types  
   // try the following line instead  
   // catch( int)  {}  
}  
```

