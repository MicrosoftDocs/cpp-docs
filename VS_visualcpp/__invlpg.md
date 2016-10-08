---
title: "__invlpg"
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
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
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
# __invlpg
**Microsoft Specific**  
  
 Generates the x86 `invlpg` instruction, which invalidates the translation lookaside buffer (TLB) for the page associated with memory pointed to by `Address`.  
  
## Syntax  
  
```  
void __invlpg(  
   void* Address  
);  
```  
  
#### Parameters  
 [in]  `Address`  
 A 64-bit address.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__invlpg`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The intrinsic `__invlpg` emits a privileged instruction and is only available in kernel mode with a privilege level (CPL) of 0.  
  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)