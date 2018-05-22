---
title: "Compiler Warning (level 1) C4533 | Microsoft Docs"
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
  - "C4533"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4533"
ms.assetid: 359fecda-d540-46e5-b214-dbabe9ef50d2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4533
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4533](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4533).  
  
  
initialization of 'variable' is skipped by 'instruction'  
  
 An instruction in your program changed the flow of control, such that, an instruction that initialized a variable was not executed. The following sample generates C4533:  
  
```  
// C4533.cpp  
// compile with: /W1  
#include <stdio.h>  
  
struct A  
{  
   int m_data;  
};  
  
int main()  
{  
   if (1)  
   {  
      goto Label;  
   }  
  
   A a = { 100 };  
  
   Label:   // C4533  
      printf("\n%d", a.m_data);   // prints an uninitialized value  
}  
```

