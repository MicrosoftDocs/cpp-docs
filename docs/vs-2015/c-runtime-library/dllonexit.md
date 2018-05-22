---
title: "__dllonexit | Microsoft Docs"
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
  - "__dllonexit"
api_location: 
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr120_clr0400.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "__dllonexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__dllonexit"
ms.assetid: 708f2ceb-f95c-46b0-a58d-d68b3fa36f12
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __dllonexit
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__dllonexit](https://docs.microsoft.com/cpp/c-runtime-library/dllonexit).  
  
Registers a routine to be called at exit time.  
  
## Syntax  
  
```  
_onexit_t __dllonexit(   _onexit_t func,  
   _PVFV **  pbegin,   
   _PVFV **  pend   
   )  
```  
  
#### Parameters  
 `func`  
 Pointer to a function to be executed upon exit.  
  
 `pbegin`  
 Pointer to a variable that points to the beginning of a list of functions to execute on detach.  
  
 `pend`  
 Pointer to variable that points to the end of a list of functions to execute on detach.  
  
## Return Value  
 If successful, a pointer to the user’s function. Otherwise, a NULL pointer.  
  
## Remarks  
 The `__dllonexit` function is analogous to the [_onexit](../c-runtime-library/reference/onexit-onexit-m.md) function except that the global variables used by that function are not visible to this routine. Instead of global variables, this function uses the `pbegin` and `pend` parameters.  
  
 The `_onexit` and `atexit` functions in a DLL linked with MSVCRT.LIB must maintain their own atexit/_onexit list. This routine is the worker that gets called by such DLLs.  
  
 The `_PVFV` type is defined as `typedef void (__cdecl *_PVFV)(void)`.  
  
## Requirements  
  
|Routine|Required file|  
|-------------|-------------------|  
|__dllonexit|onexit.c|  
  
## See Also  
 [_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)





