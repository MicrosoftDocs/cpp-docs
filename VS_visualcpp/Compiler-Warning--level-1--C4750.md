---
title: "Compiler Warning (level 1) C4750"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: b0b2c938-7d2a-4c36-8270-7daee15ffee3
caps.latest.revision: 5
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4750
'identifier': function with _alloca() inlined into a loop  
  
 The 'identifier' function forces inline expansion of the [_alloca](../VS_visualcpp/_alloca.md) function within a loop, which might cause a stack overflow when the loop is executed.  
  
### To correct this error  
  
1.  Ensure that the 'identifier' function is not modified with the [__forceinline](../Topic/inline,%20__inline,%20__forceinline.md) specifier.  
  
2.  Ensure that the 'identifier' function does not contain a [_alloca](../VS_visualcpp/_alloca.md) function that is contained in a loop.  
  
3.  Do not specify the [/O1](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md), [/O2](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md), [/Ox](../VS_visualcpp/-Ox--Full-Optimization-.md), or [/Og](../VS_visualcpp/-Og--Global-Optimizations-.md) compilation switch.  
  
4.  Place the [_alloca](../VS_visualcpp/_alloca.md) function in a [try-except statement](../VS_visualcpp/try-except-Statement.md) that will catch a stack overflow.  
  
## Example  
 The following code example calls `MyFunction` in a loop, and `MyFunction` calls the `_alloca` function. The `__forceinline` modifier causes the inline expansion of the `_alloca` function.  
  
```  
// c4750.cpp  
// compile with: /O2 /W1 /c  
#include <intrin.h>  
  
char * volatile newstr;  
  
__forceinline void myFunction(void) // C4750 warning  
{  
// The _alloca function does not require a __try/__except   
// block because the example uses compiler option /c.  
    newstr = (char * volatile) _alloca(1000);  
}  
  
int main(void)  
{  
    for (int i=0; i<50000; i++)  
       myFunction();  
    return 0;  
}  
```  
  
## See Also  
 [_alloca](../VS_visualcpp/_alloca.md)