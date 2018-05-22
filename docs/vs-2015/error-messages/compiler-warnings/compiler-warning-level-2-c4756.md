---
title: "Compiler Warning (level 2) C4756 | Microsoft Docs"
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
  - "C4756"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4756"
ms.assetid: 5a16df83-6b82-4619-83bd-319af4ef1d1d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4756
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4756](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4756).  
  
  
overflow in constant arithmetic  
  
 The compiler generated an exception while doing constant arithmetic during compilation.  
  
 The following sample generates C4756:  
  
```  
// C4756.cpp  
// compile with: /W2 /Od  
int main()  
{  
   float f = 1e100+1e100;   // C4756  
}  
```

