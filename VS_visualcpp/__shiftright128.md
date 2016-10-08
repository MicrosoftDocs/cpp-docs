---
title: "__shiftright128"
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
ms.assetid: 5419a6c4-0de1-43fb-b314-4faa5b2d051f
caps.latest.revision: 12
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# __shiftright128
**Microsoft Specific**  
  
 Shifts a 128-bit quantity, represented as two 64-bit quantities `LowPart` and `HighPart`, to the right by a number of bits specified by `Shift` and returns the low 64 bits of the result.  
  
## Syntax  
  
```  
unsigned __int64 __shiftright128(   
   unsigned __int64 LowPart,   
   unsigned __int64 HighPart,   
   unsigned char Shift   
);  
```  
  
#### Parameters  
 [in] `LowPart`  
 The low 64 bits of the 128-bit quantity to shift.  
  
 [in] `HighPart`  
 The high 64 bits of the 128-bit quantity to shift.  
  
 [in] `Shift`  
 The number of bits to shift.  
  
## Return Value  
 The low 64 bits of the result.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__shiftright128`|x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The `Shift` value is always modulo 64 so that, for example, if you call `__shiftright128(0, 1, 64)`, the function will shift the high part `0` bits right and return a low part of `0` and not `1` as might otherwise be expected.  
  
## Example  
 For an example, see [__shiftleft128](../VS_visualcpp/__shiftleft128.md).  
  
## END Microsoft Specific  
  
## See Also  
 [__shiftleft128](../VS_visualcpp/__shiftleft128.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)