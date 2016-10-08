---
title: "__ptr32, __ptr64"
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
ms.assetid: afb563d8-7458-4fe7-9c30-bd4b5385a59f
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
# __ptr32, __ptr64
## Microsoft Specific  
 `__ptr32` represents a native pointer on a 32-bit system, while `__ptr64` represents a native pointer on a 64-bit system.  
  
 The following example shows how to declare each of these pointer types:  
  
```  
int * __ptr32 p32;  
int * __ptr64 p64;  
```  
  
 On a 32-bit system, a pointer declared with `__ptr64` is truncated to a 32-bit pointer. On a 64-bit system, a pointer declared with `__ptr32` is coerced to a 64-bit pointer.  
  
> [!NOTE]
>  You cannot use `__ptr32` or `__ptr64` when compiling with **/clr:pure**. Otherwise, `Compiler Error C2472` will be generated.  
  
## Example  
 The following example shows how to declare and allocate pointers with the `__ptr32` and `__ptr64` keywords.  
  
```  
#include <cstdlib>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
  
    int * __ptr32 p32;  
    int * __ptr64 p64;  
  
    p32 = (int * __ptr32)malloc(4);  
    *p32 = 32;  
    cout << *p32 << endl;  
  
    p64 = (int * __ptr64)malloc(4);  
    *p64 = 64;  
    cout << *p64 << endl;  
}  
```  
  
 **32**  
**64**   
## END Microsoft Specific  
  
## See Also  
 [Fundamental Types](../VS_visualcpp/Fundamental-Types---C---.md)