---
title: "fetestexcept1"
ms.custom: na
ms.date: 10/05/2016
ms.devlang: 
  - C
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - fetestexcept
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
H1: fetestexcept
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
caps.latest.revision: 5
manager: ghogen
translation.priority.mt: 
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
# fetestexcept1
Determines which of the specified floating-point exception status flags are currently set.  
  
## Syntax  
  
```  
int fetestexcept(  
   int excepts  
);  
  
```  
  
#### Parameters  
 `excepts`  
 A bitwise OR of the floating-point     status flags to test.  
  
## Return Value  
 On success, returns a bitmask containing a bitwise OR of the floating-point exception macros that correspond to the exception status flags currently set. Returns 0 if none of the exceptions are set.  
  
## Remarks  
 Use the fetestexcept function to determine which exceptions were raised by a floating point operation. Use the `excepts` parameter to specify which exception status flags to test. The `fetestexcept` function uses these exception macros defined in <fenv.h> in `excepts` and the return value:  
  
|Exception Macro|Description|  
|---------------------|-----------------|  
|FE_DIVBYZERO|A singularity or pole error occurred in an earlier floating-point operation; an infinity value was created.|  
|FE_INEXACT|The function was forced to round the stored result of an earlier floating-point operation.|  
|FE_INVALID|A domain error occurred in an earlier floating-point operation.|  
|FE_OVERFLOW|A range error occurred; an earlier floating-point operation result was too large to be represented.|  
|FE_UNDERFLOW|An earlier floating-point operation result was too small to be represented at full precision; a denormal value was created.|  
|FE_ALLEXCEPT|The bitwise OR of all supported floating-point exceptions.|  
  
 The specified `excepts` argument may be 0, one of the supported floating-point exception macros, or the bitwise OR of two or more of the macros. The effect of any other `excepts` argument value is undefined.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../VS_visualcpp/fenv_access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fetestexcept`|<fenv.h>|<cfenv\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [feclearexcept](../VS_visualcpp/feclearexcept1.md)   
 [feraiseexcept](../VS_visualcpp/feraiseexcept.md)