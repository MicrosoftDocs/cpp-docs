---
title: "__movsw | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__movsw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "movsw instruction"
  - "rep movsw instruction"
  - "__movsw intrinsic"
ms.assetid: db402ad5-7f0e-449a-b0b0-eea9928d6435
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __movsw
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__movsw](https://docs.microsoft.com/cpp/intrinsics/movsw).  
  
  
Microsoft Specific**  
  
 Generates a Move String (`rep movsw`) instruction.  
  
## Syntax  
  
```  
void __movsw(   
   unsigned short* Dest,   
   unsigned short* Source,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Dest`  
 The destination of the operation.  
  
 [in] `Source`  
 The source of the operation.  
  
 [in] `Count`  
 The number of words to copy.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__movsw`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The result is that the first `Count` words pointed to by `Source` are copied to the `Dest` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// movsw.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsw)  
  
int main()  
{  
    unsigned short s1[10];  
    unsigned short s2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };  
    __movsw(s1, s2, 10);  
  
    for (int i = 0; i < 10; i++)  
        printf_s("%d ", s1[i]);  
    printf_s("\n");  
}  
```  
  
```Output  
0 1 2 3 4 5 6 7 8 9   
```  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

