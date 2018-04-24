---
title: "Compiler Error C2464 | Microsoft Docs"
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
  - "C2464"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2464"
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2464
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2464](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2464).  
  
  
identifier' : cannot use 'new' to allocate a reference  
  
 A reference identifier was allocated with the `new` operator. References are not memory objects, so `new` cannot return a pointer to them. Use the standard variable declaration syntax to declare a reference.  
  
 The following sample generates C2464:  
  
```  
// C2464.cpp  
int main() {  
   new ( int& ir );   // C2464  
}  
```

