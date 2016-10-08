---
title: "_CrtGetDumpClient"
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
  - _CrtGetDumpClient
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
ms.assetid: 9051867f-341b-493b-b53d-45d2b454a3ad
caps.latest.revision: 13
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
# _CrtGetDumpClient
Retrieves the current application-defined function for dumping the `_CLIENT_BLOCK` type memory blocks (debug version only).  
  
## Syntax  
  
```  
_CRT_DUMP_CLIENT _CrtGetDumpClient( void );  
```  
  
## Return Value  
 Returns the current dump routine.  
  
## Remarks  
 The `_CrtGetDumpClient` function retrieves the current hook function for dumping objects stored in the `_CLIENT_BLOCK` memory blocks for the C run-time debug memory dump process.  
  
 For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtGetDumpClient`|<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md) only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_CrtReportBlockType](../VS_visualcpp/_CrtReportBlockType.md)   
 [_CrtSetDumpClient](../VS_visualcpp/_CrtSetDumpClient.md)