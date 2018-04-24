---
title: "_getpid | Microsoft Docs"
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
  - "_getpid"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_getpid"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "getpid function"
  - "_getpid function"
  - "process identification numbers"
ms.assetid: d3e13bae-9a0c-4f33-86d3-ec9df9519285
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getpid
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_getpid](https://docs.microsoft.com/cpp/c-runtime-library/reference/getpid).  
  
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
|`_getpid`|\<process.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
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
  
```Output  
Process id: 3584  
```  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Process::Id](https://msdn.microsoft.com/library/system.diagnostics.process.id.aspx)  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [_mktemp, _wmktemp](../../c-runtime-library/reference/mktemp-wmktemp.md)





