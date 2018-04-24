---
title: "Compiler Error C2180 | Microsoft Docs"
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
  - "C2180"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2180"
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2180
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2180](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2180).  
  
  
controlling expression has type 'type'  
  
 The controlling expression in an `if`, `while`, `for`, or `do` statement is an expression cast to `void`. To fix this issue, change the controlling expression to one that produces a `bool` or a type that can be converted to `bool`.  
  
 The following sample generates C2180:  
  
```  
// C2180.c  
  
int main() {  
   while ((void)1)   // C2180  
      return 1;  
   while (1)         // OK  
      return 0;  
}  
```

