---
title: "__sidt"
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
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
caps.latest.revision: 5
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
# __sidt
**Microsoft Specific**  
  
 Stores the value of the interrupt descriptor table register (IDTR) in the specified memory location.  
  
## Syntax  
  
```  
void __sidt(  
     void *Destination);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Destination`|A pointer to the memory location where the IDTR is stored.|  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__sidt`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The `__sidt` function is equivalent to the `SIDT` machine instruction. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__lidt](../VS_visualcpp/__lidt.md)