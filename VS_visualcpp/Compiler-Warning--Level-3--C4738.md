---
title: "Compiler Warning (Level 3) C4738"
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
ms.assetid: 9094895f-7eec-46c2-83d3-249b761d585e
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
# Compiler Warning (Level 3) C4738
storing 32-bit float result in memory, possible loss of performance  
  
 C4738 warns that the result of an assignment, cast, passed argument, or other operation may need to be rounded or that the operation ran out of registers and needed to use memory (spilling). This can result in performance loss.  
  
 To resolve this warning and avoid rounding, compile with [/fp:fast](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) or use `double`s instead of `float`s.  
  
 To resolve this warning and avoid running out of registers, change the order of computation and modify your use of inlining  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md).  
  
## Example  
 The following sample generates C4738:  
  
```  
// C4738.cpp  
// compile with: /c /fp:precise /O2 /W3  
// processor: x86  
#include <stdio.h>  
  
#pragma warning(default : 4738)  
  
float func(float f)  
{  
    return f;  
}  
  
int main()  
{  
    extern float f, f1, f2;  
    double d = 0.0;  
  
    f1 = func(d);  
    f2 = (float) d;  
    f = f1 + f2;   // C4738  
    printf_s("%f\n", f);  
}  
```