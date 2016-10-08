---
title: "_set_doserrno"
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
  - _set_doserrno
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
ms.assetid: 8686c159-3797-4705-a53e-7457869ca6f3
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
# _set_doserrno
Sets the value of the [_doserrno](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) global variable.  
  
## Syntax  
  
```  
errno_t _set_doserrno(   
   int value   
);  
```  
  
#### Parameters  
 [in] `value`  
 The new value of `_doserrno`.  
  
## Return Value  
 Returns zero if successful.  
  
## Remarks  
 Possible values are defined in Errno.h.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_set_doserrno`|<stdlib.h>|<errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [_get_doserrno](../VS_visualcpp/_get_doserrno.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md)