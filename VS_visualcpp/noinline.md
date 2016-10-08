---
title: "noinline"
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
ms.assetid: f259d55b-dec7-4bde-8cf9-14521e4fdc42
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
# noinline
## Microsoft Specific  
 **__declspec(noinline)** tells the compiler to never inline a particular member function (function in a class).  
  
 It may be worthwhile to not inline a function if it is small and not critical to the performance of your code. That is, if the function is small and not likely to be called often, such as a function that handles an error condition.  
  
 Keep in mind that if a function is marked `noinline`, the calling function will be smaller and thus, itself a candidate for compiler inlining.  
  
```  
class X {  
   __declspec(noinline) int mbrfunc() {  
      return 0;   
   }   // will not inline  
};  
```  
  
## END Microsoft Specific  
  
## See Also  
 [__declspec](../VS_visualcpp/__declspec.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [inline, __inline, \__forceinline](../Topic/inline,%20__inline,%20__forceinline.md)