---
title: "__rdtsc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__rdtsc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__rdtsc intrinsic"
  - "rdtsc instruction"
  - "Read Time Stamp Counter instruction"
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
caps.latest.revision: 17
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
# __rdtsc
**Microsoft Specific**  
  
 Generates the `rdtsc` instruction, which returns the processor time stamp. The processor time stamp records the number of clock cycles since the last reset.  
  
## Syntax  
  
```  
unsigned __int64 __rdtsc();  
```  
  
## Return Value  
 A 64-bit unsigned integer representing a tick count.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__rdtsc`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is available only as an intrinsic.  
  
 The interpretation of the TSC value in this generation of hardware differs from that in earlier versions of [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]. See hardware manuals for more information.  
  
## Example  
  
```  
// rdtsc.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__rdtsc)  
  
int main()  
{  
    unsigned __int64 i;  
    i = __rdtsc();  
    printf_s("%I64d ticks\n", i);  
}  
```  
  
```Output  
3363423610155519 ticks  
```  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)