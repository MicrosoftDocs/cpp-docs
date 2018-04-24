---
title: "Compiler Warning (level 1) C4090 | Microsoft Docs"
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
  - "C4090"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4090"
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4090
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4090](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4090).  
  
  
operation' : different 'modifier' qualifiers  
  
 A variable used in an operation is defined with a specified modifier that prevents it from being modified without detection by the compiler. The expression is compiled without modification.  
  
 This warning can be caused when a pointer to a **const** or `volatile` item is assigned to a pointer not declared as pointing to **const** or `volatile`.  
  
 This warning is issued for C programs. In a C++ program, the compiler issues an error: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).  
  
 The following sample generates C4090:  
  
```  
// C4090.c  
// compile with: /W1  
int *volatile *p;  
int *const *q;  
int **r;  
  
int main() {  
   p = q;   // C4090  
   p = r;  
   q = p;   // C4090  
   q = r;  
   r = p;   // C4090  
   r = q;   // C4090  
}  
```

