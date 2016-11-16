---
title: "__movsq | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__movsq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__movsq intrinsic"
  - "rep movsq instruction"
  - "movsq instruction"
ms.assetid: be116a6e-2176-4ca4-93b1-9ccf3e7e7835
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __movsq
**Microsoft Specific**  
  
 Generates a repeated Move String (`rep movsq`) instruction.  
  
## Syntax  
  
```  
void __movsq(   
   unsigned char* Dest,   
   unsigned char* Source,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Dest`  
 The destination of the operation.  
  
 [in] `Source`  
 The source of the operation.  
  
 [in] `Count`  
 The number of quadwords to copy.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__movsq`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The result is that the first `Count` quadwords pointed to by `Source` are copied to the `Dest` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// movsq.cpp  
// processor: x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsq)  
  
int main()  
{  
    unsigned __int64 a1[10];  
    unsigned __int64 a2[10] = {950, 850, 750, 650, 550, 450, 350, 250,  
                               150, 50};  
    __movsq(a1, a2, 10);  
  
    for (int i = 0; i < 10; i++)  
       printf_s("%d ", a1[i]);  
    printf_s("\n");  
}  
```  
  
```Output  
950 850 750 650 550 450 350 250 150 50   
```  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)