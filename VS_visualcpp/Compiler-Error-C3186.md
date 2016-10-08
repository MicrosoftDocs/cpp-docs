---
title: "Compiler Error C3186"
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
ms.assetid: 60540c31-b858-4dc0-8736-04a6b432087d
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
# Compiler Error C3186
multi-dimensional native array is not allowed  
  
 A native multidimensional array was declared incorrectly.  
  
 The following sample generates C3186:  
  
```  
// C3186.cpp  
// compile with: /clr  
#using <mscorlib.dll>  
int main()  
{  
   int a[,];   // C3186  
   int b[2][3];   // native multidimension array  
   array<int,2> ^c = new array<int, 2>(2,5);   // managed multidimension array  
}  
```