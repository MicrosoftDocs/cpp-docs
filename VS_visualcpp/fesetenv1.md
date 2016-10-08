---
title: "fesetenv1"
ms.custom: na
ms.date: 10/06/2016
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
  - fesetenv
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
H1: fesetenv
ms.assetid: ffc64fff-8ea7-4d59-9e04-ff96ef8cd012
caps.latest.revision: 6
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
# fesetenv1
Sets the current floating-point environment.  
  
## Syntax  
  
```  
int fesetenv(  
   const fenv_t *penv  
);  
  
```  
  
#### Parameters  
 `penv`  
 Pointer to a `fenv_t` object that contains a floating-point environment as set by a call to [fegetenv](../Topic/fegetenv2.md) or [feholdexcept](../Topic/feholdexcept1.md). You can also specify the default startup floating-point environment by using the FE_DFL_ENV macro.  
  
## Return Value  
 Returns 0 if the environment was successfully set.        Otherwise, returns a nonzero value.  
  
## Remarks  
 The `fesetenv` function sets the current floating-point environment from the value stored in the `fenv_t` object pointed to by `penv`. The floating point environment is the set of status flags and control modes that affect floating-point calculations. This includes the rounding mode and the status flags for floating-point exceptions.  If `penv` is not FE_DFL_ENV or does not point to a valid `fenv_t` object, subsequent behavior is undefined.  
  
 A call to this function sets the exception status flags that are in the `penv` object, but it does not raise those exceptions.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../VS_visualcpp/fenv_access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fesetenv`|<fenv.h>|<cfenv\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [fegetenv](../VS_visualcpp/fegetenv1.md)   
 [feclearexcept](../VS_visualcpp/feclearexcept1.md)   
 [feholdexcept](../VS_visualcpp/feholdexcept2.md)   
 [fesetexceptflag](../VS_visualcpp/fesetexceptflag2.md)