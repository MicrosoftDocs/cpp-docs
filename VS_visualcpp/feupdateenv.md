---
title: "feupdateenv"
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
  - feupdateenv
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
apitype: HeaderDef
ms.assetid: 3d170042-dfd5-4e4f-a55f-038cf2296cc9
caps.latest.revision: 3
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
# feupdateenv
Saves the currently raised floating-point exceptions, restores the specified floating-point environment state, and then raises the saved floating-point exceptions.  
  
## Syntax  
  
```  
int feupdateenv(  
   const fenv_t* penv  
);  
```  
  
#### Parameters  
 `penv`  
 Pointer to a `fenv_t` object that contains a floating-point environment as set by a call to [fegetenv](../Topic/fegetenv2.md) or [feholdexcept](../Topic/feholdexcept1.md). You can also specify the default startup floating-point environment by using the FE_DFL_ENV macro.  
  
## Return Value  
 Returns 0 if all actions completed successfully.        Otherwise, returns a nonzero value.  
  
## Remarks  
 The `feupdateenv` function performs multiple actions. First, it stores the current raised floating-point exception status flags in automatic storage. Then, it sets the current floating-point environment from the value stored in the `fenv_t` object pointed to by `penv`. If `penv` is not FE_DFL_ENV or does not point to a valid `fenv_t` object, subsequent behavior is undefined. Finally, `feupdateenv` raises the locally stored floating-point exceptions.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../VS_visualcpp/fenv_access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`feupdateenv`|<fenv.h>|<cfenv\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [fegetenv](../VS_visualcpp/fegetenv1.md)   
 [feclearexcept](../VS_visualcpp/feclearexcept1.md)   
 [feholdexcept](../VS_visualcpp/feholdexcept2.md)   
 [fesetexceptflag](../VS_visualcpp/fesetexceptflag2.md)