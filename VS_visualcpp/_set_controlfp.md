---
title: "_set_controlfp"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _set_controlfp
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
ms.assetid: e0689d50-f68a-4028-a9c1-fb23eedee4ad
caps.latest.revision: 11
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
# _set_controlfp
Sets the floating-point control word.  
  
## Syntax  
  
```  
void __cdecl _set_controlfp(  
    unsigned int newControl,  
    unsigned int mask  
);  
```  
  
#### Parameters  
 `newControl`  
 New control-word bit values.  
  
 `mask`  
 Mask for new control-word bits to set.  
  
## Return Value  
 None.  
  
## Remarks  
 The `_set_controlfp` is similar to `_control87`, but it only sets the floating-point control word to `newControl`. The bits in the values indicate the floating-point control state. The floating-point control state allows the program to change the precision, rounding, and infinity modes in the floating-point math package. You can also mask or unmask floating-point exceptions using `_set_controlfp`. For more information, see [_control87, _controlfp, \__control87_2](../VS_visualcpp/_control87--_controlfp--__control87_2.md).  
  
 This function is deprecated when compiling with [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md) or `/clr:pure` because the common language runtime only supports the default floating-point precision.  
  
## Requirements  
  
|Routine|Required header|Compatibility|  
|-------------|---------------------|-------------------|  
|`_set_controlfp`|<float.h>|x86 processor only|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [_clear87, _clearfp](../VS_visualcpp/_clear87--_clearfp.md)   
 [_status87, _statusfp, _statusfp2](../VS_visualcpp/_status87--_statusfp--_statusfp2.md)