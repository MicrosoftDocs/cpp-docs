---
title: "__movsd"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: eb5cccf3-aa76-47f0-b9fc-eeca38fd943f
caps.latest.revision: 12
manager: ghogen
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
# __movsd
**Microsoft Specific**  
  
 Generates a Move String (`rep movsd`) instruction.  
  
## Syntax  
  
```  
void __movsd(   
   unsigned long* Dest,   
   unsigned long* Source,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Dest`  
 The destination of the operation.  
  
 [in] `Source`  
 The source of the operation.  
  
 [in] `Count`  
 The number of doublewords to copy.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__movsd`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The result is that the first `Count` doublewords pointed to by `Source` are copied to the `Dest` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// movsd.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsd)  
  
int main()  
{  
    unsigned long a1[10];  
    unsigned long a2[10] = {950, 850, 750, 650, 550, 450, 350,  
                            250, 150, 50};  
    __movsd(a1, a2, 10);  
  
    for (int i = 0; i < 10; i++)  
        printf_s("%d ", a1[i]);  
    printf_s("\n");  
}  
```  
  
 **950 850 750 650 550 450 350 250 150 50**    
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)