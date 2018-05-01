---
title: "__ptr32, __ptr64 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__ptr32_cpp"
  - "__ptr64_cpp"
  - "__ptr32"
  - "__ptr64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__ptr64 keyword [C++]"
  - "_ptr32 keyword [C++]"
  - "ptr32 keyword [C++]"
  - "ptr64 keyword [C++]"
  - "_ptr64 keyword [C++]"
  - "__ptr32 keyword [C++]"
ms.assetid: afb563d8-7458-4fe7-9c30-bd4b5385a59f
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __ptr32, __ptr64
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__ptr32, __ptr64](https://docs.microsoft.com/cpp/cpp/ptr32-ptr64).  
  
Microsoft Specific  
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
  
```Output  
32  
64  
```  
  
## END Microsoft Specific  
  
## See Also  
 [Fundamental Types](../cpp/fundamental-types-cpp.md)





