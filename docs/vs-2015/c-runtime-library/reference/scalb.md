---
title: "_scalb | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_scalb"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-math-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "scalb"
  - "_scalb"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "exponential calculations"
  - "_scalb function"
  - "scalb function"
ms.assetid: 148cf5a8-b405-44bf-a1f0-7487adba2421
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _scalb
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_scalb](https://docs.microsoft.com/cpp/c-runtime-library/reference/scalb).  
  
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
  
 For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_scalb` function calculates the value of `x *` 2exp.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_scalb`|\<float.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [ldexp](../../c-runtime-library/reference/ldexp.md)





