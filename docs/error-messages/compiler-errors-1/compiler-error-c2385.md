---
title: "Compiler Error C2385 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2385"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2385"
ms.assetid: 6d3dd1f2-e56d-49d7-865c-6a9acdb17417
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2385
ambiguous access of 'member'  
  
 The member can derive from more than one object (it is inherited from more than one object).  To resolve this error,  
  
-   Make the member unambiguous by providing a cast.  
  
-   Rename the ambiguous members in the base classes.  
  
## Example  
 The following sample generates C2385.  
  
```  
// C2385.cpp  
// C2385 expected  
#include <stdio.h>  
  
struct A   
{  
    void x(int i)   
    {  
        printf_s("\nIn A::x");  
    }  
};  
  
struct B   
{  
    void x(char c)   
    {  
        printf_s("\nIn B::x");  
    }  
};  
  
// Delete the following line to resolve.  
struct C : A, B {}  
  
// Uncomment the following 4 lines to resolve.  
// struct C : A, B   
// {  
//     using B::x;  
//     using A::x;  
// };  
  
int main()   
{  
    C aC;  
    aC.x(100);  
    aC.x('c');  
}  
  
struct C : A, B   
{  
    using B::x;  
    using A::x;  
};  
```