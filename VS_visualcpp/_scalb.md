---
title: "_scalb"
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
  - _scalb
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
  - api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
ms.assetid: 148cf5a8-b405-44bf-a1f0-7487adba2421
caps.latest.revision: 14
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
# _scalb
Scales argument by a power of 2.  
  
## Syntax  
  
```  
double _scalb(  
   double x,  
   long exp   
);  
```  
  
#### Parameters  
 `x`  
 Double-precision, floating-point value.  
  
 `exp`  
 Long integer exponent.  
  
## Return Value  
 Returns an exponential value if successful. On overflow (depending on the sign of `x`), `_scalb` returns +/– `HUGE_VAL`; the `errno` variable is set to `ERANGE`.  
  
 For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 The `_scalb` function calculates the value of `x *` 2exp.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_scalb`|<float.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [ldexp](../VS_visualcpp/ldexp.md)