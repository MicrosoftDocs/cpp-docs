---
title: "_lock"
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
apiname: 
  - _lock
apilocation: 
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr100.dll
  - msvcr90.dll
  - msvcr80.dll
  - msvcr110.dll
  - msvcrt.dll
  - msvcr120_clr0400.dll
apitype: DLLExport
ms.assetid: 29f77c37-30de-4b3d-91b6-030216e645a6
caps.latest.revision: 7
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
# _lock
Acquires a multi-thread lock.  
  
> [!IMPORTANT]
>  This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.  
  
## Syntax  
  
```  
void __cdecl _lock  
   int locknum  
);  
```  
  
#### Parameters  
 [in] `locknum`  
 The identifier of the lock to acquire.  
  
## Remarks  
 If the lock has already been acquired, this method acquires the lock anyway and causes an internal C run-time (CRT) error. If the method cannot acquire a lock, it exits with a fatal error and sets the error code to `_RT_LOCK`.  
  
## Requirements  
 **Source:** mlock.c  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [_unlock](../VS_visualcpp/_unlock.md)