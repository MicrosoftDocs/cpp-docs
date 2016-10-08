---
title: "_getpid"
ms.custom: na
ms.date: 10/06/2016
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
  - _getpid
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
ms.assetid: d3e13bae-9a0c-4f33-86d3-ec9df9519285
caps.latest.revision: 18
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
# _getpid
Gets the process identification.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see                  [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _getpid( void );  
```  
  
## Return Value  
 Returns the process ID obtained from the system. There is no error return.  
  
## Remarks  
 The `_getpid` function obtains the process ID from the system. The process ID uniquely identifies the calling process.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getpid`|<process.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_getpid.c  
// This program uses _getpid to obtain  
// the process ID and then prints the ID.  
  
#include <stdio.h>  
#include <process.h>  
  
int main( void )  
{  
   // If run from command line, shows different ID for   
   // command line than for operating system shell.  
  
   printf( "Process id: %d\n", _getpid() );  
}  
```  
  
 **Process id: 3584**   
## .NET Framework Equivalent  
 [System::Diagnostics::Process::Id](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.id.aspx)  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [_mktemp, _wmktemp](../VS_visualcpp/_mktemp--_wmktemp.md)