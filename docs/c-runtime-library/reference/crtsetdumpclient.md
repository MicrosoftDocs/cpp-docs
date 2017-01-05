---
title: "_CrtSetDumpClient | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetDumpClient"
apilocation: 
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
apitype: "DLLExport"
f1_keywords: 
  - "_CrtSetDumpClient"
  - "CrtSetDumpClient"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CrtSetDumpClient function"
  - "CrtSetDumpClient function"
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _CrtSetDumpClient
Installs an application-defined function to dump `_CLIENT_BLOCK` type memory blocks (debug version only).  
  
## Syntax  
  
```  
  
      _CRT_DUMP_CLIENT _CrtSetDumpClient(   
   _CRT_DUMP_CLIENT dumpClient   
);  
```  
  
#### Parameters  
 `dumpClient`  
 New client-defined memory dump function to hook into the C run-time debug memory dump process.  
  
## Return Value  
 Returns the previously defined client block dump function.  
  
## Remarks  
 The `_CrtSetDumpClient` function allows the application to hook its own function to dump objects stored in `_CLIENT_BLOCK` memory blocks into the C run-time debug memory dump process. As a result, every time a debug dump function such as [_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md) or [_CrtDumpMemoryLeaks](../../c-runtime-library/reference/crtdumpmemoryleaks.md) dumps a `_CLIENT_BLOCK` memory block, the application's dump function is called as well. `_CrtSetDumpClient` provides an application with an easy method for detecting memory leaks and validating or reporting the contents of data stored in `_CLIENT_BLOCK` blocks. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to `_CrtSetDumpClient` are removed during preprocessing.  
  
 The `_CrtSetDumpClient` function installs the new application-defined dump function specified in `dumpClient` and returns the previously defined dump function. An example of a client block dump function is as follows:  
  
```  
void DumpClientFunction( void *userPortion, size_t blockSize );  
```  
  
 The `userPortion` argument is a pointer to the beginning of the user data portion of the memory block and `blockSize` specifies the size of the allocated memory block in bytes. The client block dump function must return `void`. The pointer to the client dump function that is passed to `_CrtSetDumpClient` is of type `_CRT_DUMP_CLIENT`, as defined in Crtdbg.h:  
  
```  
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );  
```  
  
 For more information about functions that operate on `_CLIENT_BLOCK` type memory blocks, see [Client Block Hook Functions](/visualstudio/debugger/client-block-hook-functions). The [_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md) function can be used to return information about block types and subtypes.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtSetDumpClient`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)   
 [_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md)   
 [_CrtGetDumpClient](../../c-runtime-library/reference/crtgetdumpclient.md)