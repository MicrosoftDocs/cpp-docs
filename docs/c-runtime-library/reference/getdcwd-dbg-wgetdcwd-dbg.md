---
title: "_getdcwd_dbg, _wgetdcwd_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_getdcwd_dbg"
  - "_wgetdcwd_dbg"
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
  - "_getdcwd_dbg"
  - "getdcwd_dbg"
  - "_wgetdcwd_dbg"
  - "wgetdcwd_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "working directory"
  - "_getdcwd_dbg function"
  - "wgetdcwd_dbg function"
  - "current working directory"
  - "getdcwd_dbg function"
  - "_wgetdcwd_dbg function"
  - "directories [C++], current working"
ms.assetid: 266bf6f0-0417-497f-963d-2e0f306d9385
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _getdcwd_dbg, _wgetdcwd_dbg
Debug versions of the [_getdcwd, _wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md) functions (only available during debug).  
  
## Syntax  
  
```  
char *_getdcwd_dbg(  
   int drive,  
   char *buffer,  
   int maxlen,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
wchar_t *_wgetdcwd_dbg(  
   int drive,  
   wchar_t *buffer,  
   int maxlen,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### Parameters  
 `drive`  
 Name of the disk drive.  
  
 `buffer`  
 Storage location for the path.  
  
 `maxlen`  
 Maximum length of the path in characters: `char` for `_getdcwd_dbg`and `wchar_t`for `_wgetdcwd_dbg`.  
  
 `blockType`  
 Requested type of the memory block: `_CLIENT_BLOCK`or `_NORMAL_BLOCK`.  
  
 `filename`  
 Pointer to the name of the source file that requested the allocation operation or `NULL`.  
  
 `linenumber`  
 Line number in the source file where the allocation operation was requested or `NULL`.  
  
## Return Value  
 Returns a pointer to `buffer`. A `NULL` return value indicates an error, and `errno` is set either to `ENOMEM`, indicating that there is insufficient memory to allocate `maxlen` bytes (when a `NULL` argument is given as `buffer`), or to `ERANGE`, indicating that the path is longer than `maxlen` characters. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_getdcwd_dbg` and `_wgetdcwd_dbg` functions are identical to `_getdcwd` and `_wgetdcwd` except that, when `_DEBUG` is defined, these functions use the debug version of `malloc` and `_malloc_dbg` to allocate memory if `NULL` is passed as the `buffer` parameter. For more information, see [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 You do not need to call these functions explicitly in most cases. Instead, you can define the `_CRTDBG_MAP_ALLOC` flag. When `_CRTDBG_MAP_ALLOC` is defined, calls to `_getdcwd` and `_wgetdcwd` are remapped to `_getdcwd_dbg` and `_wgetdcwd_dbg`, respectively, with the `blockType` set to `_NORMAL_BLOCK`. Thus, you do not need to call these functions explicitly unless you want to mark the heap blocks as `_CLIENT_BLOCK`. For more information, see [Types of Blocks on the Debug Heap](/visualstudio/debugger/crt-debug-heap-details).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tgetdcwd_dbg`|`_getdcwd_dbg`|`_getdcwd_dbg`|`_wgetdcwd_dbg`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getdcwd_dbg`|\<crtdbg.h>|  
|`_wgetdcwd_dbg`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 <xref:System.Environment.CurrentDirectory%2A?displayProperty=fullName>  
  
## See Also  
 [_getdcwd, _wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md)   
 [Directory Control](../../c-runtime-library/directory-control.md)   
 [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)