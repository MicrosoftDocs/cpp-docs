---
title: "__lidt"
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
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
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
# __lidt
**Microsoft Specific**  
  
 Loads the interrupt descriptor table register (IDTR) with the value in the specified memory location.  
  
## Syntax  
  
```  
void __lidt(  
     void *Source);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Source`|Pointer to the value to be copied to the IDTR.|  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__lidt`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The `__lidt` function is equivalent to the `LIDT` machine instruction, and is available only in kernel mode. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__sidt](../VS_visualcpp/__sidt.md)