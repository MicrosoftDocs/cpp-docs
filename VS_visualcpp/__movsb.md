---
title: "__movsb"
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
ms.assetid: ba5469f6-f797-4cd2-bee8-74c7666c26d4
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
# __movsb
**Microsoft Specific**  
  
 Generates a Move String (`rep movsb`) instruction.  
  
## Syntax  
  
```  
void __movsb(   
   unsigned char* Destination,   
   unsigned const char* Source,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Destination`  
 A pointer to the destination of the copy.  
  
 [in] `Source`  
 A pointer to the source of the copy.  
  
 [in] `Count`  
 The number of bytes to copy.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__movsb`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The result is that the first `Count` bytes pointed to by `Source` are copied to the `Destination` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// movsb.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsb)  
  
int main()  
{  
    unsigned char s1[100];  
    unsigned char s2[100] = "A big black dog.";  
    __movsb(s1, s2, 100);  
  
    printf_s("%s %s", s1, s2);  
}  
```  
  
 **A big black dog. A big black dog.**   
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)