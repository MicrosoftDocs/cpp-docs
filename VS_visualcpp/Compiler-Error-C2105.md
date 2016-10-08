---
title: "Compiler Error C2105"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 19b7f7bc-a9da-4d23-8193-005b6d09274f
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C2105
'operator' needs l-value  
  
 The operator must have an l-value as operand.  
  
 The following sample generates C2105:  
  
```  
// C2105.cpp  
int main() {  
   unsigned char * p1 = 0;  
   unsigned int * p2 = (unsigned int *)p1;  
   p2++;  
  
   unsigned int * p = 0;  
   p++;   // ok  
  
   p2 = (unsigned int *)p1;  
   ((unsigned int *)p1)++;   // C2105  
}  
```  
  
 The following sample generates C2105:  
  
```  
// C2105b.cpp  
int main() {  
   int a[10] = {0};  
   int b[10] = {0};  
   ++(a , b);   // C2105  
  
   // OK  
   ++(a[0] , b[0]);  
   ++a[0];  
}  
```