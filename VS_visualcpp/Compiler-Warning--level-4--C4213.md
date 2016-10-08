---
title: "Compiler Warning (level 4) C4213"
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
ms.assetid: 59fc3f61-ebd2-499e-99d7-f57bec11eda1
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4213
nonstandard extension used : cast on l-value  
  
 With the default Microsoft extensions (/Ze), you can use casts on the left side of an assignment statement.  
  
## Example  
  
```  
// C4213.c  
// compile with: /W4  
void *a;  
void f()  
{  
   int   i[3];  
   a = &i;  
   *(( int * )a )++ = 3;  // C4213  
}  
  
int main()  
{  
}  
```  
  
 Such casts are invalid under ANSI compatibility ([/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)).