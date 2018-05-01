---
title: "Compiler Warning (level 1) C4549 | Microsoft Docs"
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
  - "C4549"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4549"
ms.assetid: 81a07676-625b-4f58-9b0c-3ee22830b04a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4549
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4549](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4549).  
  
  
operator' : operator before comma has no effect; did you intend 'operator'?  
  
 The compiler detected an ill-formed comma expression.  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 The following sample generates C4549:  
  
```  
// C4549.cpp  
// compile with: /W1  
#pragma warning (default : 4549)  
  
int main() {  
   int i = 0, k = 0;  
  
   if ( i == 0, k )   // C4549  
   // try the following line instead  
   // if ( i == 0 )  
      i++;  
}  
```

