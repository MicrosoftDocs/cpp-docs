---
title: "Compiler Warning (level 4) C4389 | Microsoft Docs"
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
  - "c4389"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4389"
ms.assetid: fc0e3a8e-f766-437c-b7f1-e61abb2a8765
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4389
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4389](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4389).  
  
  
operator' : signed/unsigned mismatch  
  
 An operation involved signed and unsigned variables. This could result in a loss of data.  
  
 The following sample generates C4389:  
  
```  
// C4389.cpp  
// compile with: /W4  
#pragma warning(default: 4389)  
  
int main()  
{  
   int a = 9;  
   unsigned int b = 10;  
   if (a == b)   // C4389  
      return 0;  
   else  
      return 0;  
};  
```

