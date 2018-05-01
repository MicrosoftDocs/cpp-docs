---
title: "Compiler Error C2117 | Microsoft Docs"
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
  - "C2117"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2117"
ms.assetid: b947379d-5861-42fc-ac26-170318579cbd
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2117
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2117](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2117).  
  
  
identifier' : array bounds overflow  
  
 An array has too many initializers:  
  
-   Array elements and initializers do not match in size and quantity.  
  
-   No space for the null terminator in a string.  
  
 The following sample generates C2117:  
  
```  
// C2117.cpp  
int main() {  
   char abc[4] = "abcd";   // C2117  
   char def[4] = "abd";   // OK  
}  
```

