---
title: "_get_osfhandle"
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
  - _get_osfhandle
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
  - api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
caps.latest.revision: 14
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
# _get_osfhandle
Retrieves the operating-system file handle that is associated with the specified file descriptor.  
  
## Syntax  
  
```  
intptr_t _get_osfhandle(   
   int fd   
);  
```  
  
#### Parameters  
 `fd`  
 An existing file descriptor.  
  
## Return Value  
 An operating-system file handle if `fd` is valid. Otherwise, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function returns `INVALID_HANDLE_VALUE` (–1) and sets `errno` to `EBADF`, indicating an invalid file handle.  
  
## Remarks  
 To close a file opened with `_get_osfhandle`, call `_close`. The underlying handle is also closed by a call to `_close`, so it is not necessary to call the Win32 function `CloseHandle` on the original handle.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_osfhandle`|<io.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [_close](../VS_visualcpp/_close.md)   
 [_creat, _wcreat](../VS_visualcpp/_creat--_wcreat.md)   
 [_dup, _dup2](../VS_visualcpp/_dup--_dup2.md)   
 [_open, _wopen](../VS_visualcpp/_open--_wopen.md)