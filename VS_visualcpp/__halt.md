---
title: "__halt"
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
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
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
# __halt
**Microsoft Specific**  
  
 Halts the microprocessor until an enabled interrupt, a nonmaskable interrupt (NMI), or a reset occurs.  
  
## Syntax  
  
```  
void __halt( void );  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__halt`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The `__halt` function is equivalent to the `HLT` machine instruction, and is available only in kernel mode. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)