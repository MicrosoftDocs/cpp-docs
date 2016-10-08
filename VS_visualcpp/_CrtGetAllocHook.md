---
title: "_CrtGetAllocHook"
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
  - _CrtGetAllocHook
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
apitype: DLLExport
ms.assetid: 036acf7c-547a-4b3f-a636-80451070d7ed
caps.latest.revision: 12
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
# _CrtGetAllocHook
Retrieves the current client-defined allocation function for hooking into the C run-time debug memory allocation process (debug version only).  
  
## Syntax  
  
```  
_CRT_ALLOC_HOOK _CrtGetAllocHook( void );  
```  
  
## Return Value  
 Returns the currently defined allocation hook function.  
  
## Remarks  
 `_CrtGetAllocHook` retrieves the current client-defined application hook function for the C run-time debug library memory allocation process.  
  
 For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtGetAllocHook`|<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md) only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_CrtSetAllocHook](../VS_visualcpp/_CrtSetAllocHook.md)