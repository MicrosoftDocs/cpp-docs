---
title: "_getdcwd, _wgetdcwd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_getdcwd"
  - "_wgetdcwd"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wgetdcwd"
  - "getdcwd"
  - "_getdcwd"
  - "tgetdcwd"
  - "_wgetdcwd"
  - "_tgetdcwd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wgetdcwd function"
  - "working directory"
  - "getdcwd function"
  - "_getdcwd function"
  - "_wgetdcwd function"
  - "current working directory"
  - "directories [C++], current working"
ms.assetid: 184152f5-c7b0-495b-918d-f9a6adc178bd
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# _getdcwd, _wgetdcwd
Gets the full path of the current working directory on the specified drive.  
  
## Syntax  
  
```  
char *_getdcwd(   
   int drive,  
   char *buffer,  
   int maxlen   
);  
wchar_t *_wgetdcwd(   
   int drive,  
   wchar_t *buffer,  
   int maxlen   
);  
```  
  
#### Parameters  
 `drive`  
 A non-negative integer that specifies the drive (0 = default drive, 1 = A, 2 = B, and so on).  
  
 If the specified drive is not available, or the kind of drive (for example, removable, fixed, CD-ROM, RAM disk, or network drive) cannot be determined, the invalid-parameter handler, which is described in [Parameter Validation](../../c-runtime-library/parameter-validation.md), is invoked.  
  
 `buffer`  
 Storage location for the path, or **NULL**.  
  
 If **NULL** is specified, this function allocates a buffer of at least `maxlen` size by using **malloc**, and the return value of `_getdcwd` is a pointer to the allocated buffer. The buffer can be freed by calling `free` and passing it the pointer.  
  
 `maxlen`  
 A nonzero positive integer that specifies the maximum length of the path, in characters: `char` for `_getdcwd` and `wchar_t` for `_wgetdcwd`.  
  
 If `maxlen` is not greater than zero, the invalid-parameter handler, which is described in [Parameter Validation](../../c-runtime-library/parameter-validation.md), is invoked.  
  
## Return Value  
 Pointer to a string that represents the full path of the current working directory on the specified drive, or `NULL`, which indicates an error.  
  
 If `buffer` is specified as `NULL` and there is insufficient memory to allocate `maxlen` characters, an error occurs and `errno` is set to `ENOMEM`. If the length of the path,  which includes the terminating null character, exceeds `maxlen`, an error occurs and `errno` is set to `ERANGE`. For more information about these error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_getdcwd` function gets the full path of the current working directory on the specified drive and stores it at `buffer`. If the current working directory is set to the root, the string ends with a backslash (\\). If the current working directory is set to a directory other than the root, the string ends with the name of the directory and not with a backslash.  
  
 `_wgetdcwd` is a wide-character version of `_getdcwd`, and its `buffer` parameter and return value are wide-character strings. Otherwise, `_wgetdcwd` and `_getdcwd` behave identically.  
  
 This function is thread-safe even though it depends on **GetFullPathName**, which is itself not thread-safe. However, you can violate thread safety if your multithreaded application calls both this function and **GetFullPathName**. For more information, go to [MSDN Library](http://go.microsoft.com/fwlink/?LinkID=150542) and then search for **GetFullPathName**.  
  
 The version of this function that has the `_nolock` suffix behaves identically to this function except that it is not thread-safe and is not protected from interference by other threads. For more information, see [_getdcwd_nolock, _wgetdcwd_nolock](../../c-runtime-library/reference/getdcwd-nolock-wgetdcwd-nolock.md).  
  
 When `_DEBUG` and `_CRTDBG_MAP_ALLOC` are defined, calls to `_getdcwd` and `_wgetdcwd` are replaced by calls to `_getdcwd_dbg` and `_wgetdcwd_dbg` so that you can debug memory allocations. For more information, see[_getdcwd_dbg, _wgetdcwd_dbg](../../c-runtime-library/reference/getdcwd-dbg-wgetdcwd-dbg.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tgetdcwd`|`_getdcwd`|`_getdcwd`|`_wgetdcwd`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getdcwd`|\<direct.h>|  
|`_wgetdcwd`|\<direct.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example in [_getdrive](../../c-runtime-library/reference/getdrive.md).  
  
## .NET Framework Equivalent  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## See Also  
 [Directory Control](../../c-runtime-library/directory-control.md)   
 [_chdir, _wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [_getcwd, _wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [_getdrive](../../c-runtime-library/reference/getdrive.md)   
 [_mkdir, _wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [_rmdir, _wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)