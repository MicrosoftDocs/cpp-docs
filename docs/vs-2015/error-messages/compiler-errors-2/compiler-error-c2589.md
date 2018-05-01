---
title: "Compiler Error C2589 | Microsoft Docs"
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
  - "C2589"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2589"
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2589
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2589](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2589).  
  
  
identifier' : illegal token on right side of '::'  
  
 If a class, structure, or union name appears to the left of the scope-resolution operator (double colons), the token on the right must be a class, structure, or union member. Otherwise, any global identifier can appear on the right.  
  
 The scope-resolution operator cannot be overloaded.  
  
 The following sample generates C2589:  
  
```  
// C2589.cpp  
void Test(){}  
class A {};  
void operator :: ();   // C2589  
  
int main() {  
   ::Test();  
}  
```

