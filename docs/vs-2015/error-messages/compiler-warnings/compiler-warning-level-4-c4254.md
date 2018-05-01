---
title: "Compiler Warning (level 4) C4254 | Microsoft Docs"
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
  - "c4254"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4254"
ms.assetid: c7dcef24-d535-4c98-bb41-fc3d2b88fd11
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4254
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4254](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4254).  
  
  
operator' : conversion from 'type1' to 'type2', possible loss of data  
  
 A larger bit field was assigned to a smaller bit field. There could be a loss of data.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4254:  
  
```  
// C4254.cpp  
// compile with: /W4  
#pragma warning(default: 4254)  
  
struct X {  
   int a : 20;  
   int b : 12;  
};  
  
int main() {  
   X *x = new X();  
   x->b = 10;  
   x->a = 4;  
   x->a = x->b;    // OK  
   x->b = x->a;    // C4254  
};  
```

