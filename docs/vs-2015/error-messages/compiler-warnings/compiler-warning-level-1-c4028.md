---
title: "Compiler Warning (level 1) C4028 | Microsoft Docs"
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
  - "C4028"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4028"
ms.assetid: c3e8b70b-e870-416c-a285-bba5f71dbfc6
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4028
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4028](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4028).  
  
  
formal parameter 'number' different from declaration  
  
 The type of the formal parameter does not agree with the corresponding parameter in the declaration. The type in the original declaration is used.  
  
 This warning is only valid for C source code.  
  
## Example  
 The following sample generates C4028.  
  
```  
// C4028.c  
// compile with: /W1 /Za  
void f(int , ...);  
void f(int i, int j) {}   // C4028  
  
void g(int , int);  
void g(int i, int j) {}   // OK  
  
int main() {}  
```

