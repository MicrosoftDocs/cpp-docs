---
title: "__inword"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
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
# __inword
**Microsoft Specific**  
  
 Reads data from the specified port using the `in` instruction.  
  
## Syntax  
  
```  
unsigned short __inword(  
   unsigned short Port  
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to read from.  
  
## Return Value  
 The word of data read.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__inword`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)