---
title: "pop_macro"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3b5489d0-69ba-4c66-b572-2748af0f12bb
caps.latest.revision: 9
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
# pop_macro
Sets the value of the *macro_name* macro to the value on the top of the stack for this macro.  
  
## Syntax  
  
```  
  
#pragma pop_macro("  
macro_name  
")  
  
```  
  
## Remarks  
 You must first issue a [push_macro](../VS_visualcpp/push_macro.md) for *macro_name* before you can do a **pop_macro**.  
  
## Example  
  
```  
// pragma_directives_pop_macro.cpp  
// compile with: /W1  
#include <stdio.h>  
#define X 1  
#define Y 2  
  
int main() {  
   printf("%d",X);  
   printf("\n%d",Y);  
   #define Y 3   // C4005  
   #pragma push_macro("Y")  
   #pragma push_macro("X")  
   printf("\n%d",X);  
   #define X 2   // C4005  
   printf("\n%d",X);  
   #pragma pop_macro("X")  
   printf("\n%d",X);  
   #pragma pop_macro("Y")  
   printf("\n%d",Y);  
}  
```  
  
 **1**  
**2**  
**1**  
**2**  
**1**  
**3**   
## See Also  
 [Pragma Directives and the __Pragma Keyword](../VS_visualcpp/Pragma-Directives-and-the-__Pragma-Keyword.md)