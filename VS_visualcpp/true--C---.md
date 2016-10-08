---
title: "true (C++)"
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
ms.topic: language-reference
ms.assetid: 96be2a70-51c3-4250-9752-874d25a5a11e
caps.latest.revision: 10
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
# true (C++)
## Syntax  
  
```  
  
      bool-identifier = true ;  
bool-expression logical-operator true ;  
```  
  
## Remarks  
 This keyword is one of the two values for a variable of type [bool](../VS_visualcpp/bool--C---.md) or a conditional expression (a conditional expression is now a true boolean expression). If `i` is of type `bool`, then the statement `i = true;` assigns **true** to `i`.  
  
## Example  
  
```  
// bool_true.cpp  
#include <stdio.h>  
int main()  
{  
    bool bb = true;  
    printf_s("%d\n", bb);  
    bb = false;  
    printf_s("%d\n", bb);  
}  
```  
  
 **1**  
**0**   
## See Also  
 [Keywords](../VS_visualcpp/Keywords--C---.md)