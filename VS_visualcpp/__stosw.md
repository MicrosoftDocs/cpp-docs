---
title: "__stosw"
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
ms.assetid: 7620fd1d-dba5-40e3-8e07-01aa68895133
caps.latest.revision: 13
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
# __stosw
**Microsoft Specific**  
  
 Generates a store string instruction (`rep stosw`).  
  
## Syntax  
  
```  
void __stosw(   
   unsigned short* Dest,   
   unsigned short Data,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Dest`  
 The destination of the operation.  
  
 [in] `Data`  
 The data to store.  
  
 [in] `Count`  
 The length of the block of words to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__stosw`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The result is that the word `Data` is written into a block of `Count` words in the `Dest` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// stosw.c  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__stosw)  
  
int main()  
{  
    unsigned short val = 128;  
    unsigned short a[100];  
    memset(a, 0, sizeof(a));  
    __stosw(a+10, val, 2);  
    printf_s("%u %u %u %u", a[9], a[10], a[11], a[12]);     
}  
```  
  
 **0 128 128 0**   
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)