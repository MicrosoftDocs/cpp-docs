---
title: "_setmaxstdio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_setmaxstdio"
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
  - "setmaxstdio"
  - "_setmaxstdio"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "maximum open files"
  - "_setmaxstdio function"
  - "setmaxstdio function"
  - "open files, maximum"
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
caps.latest.revision: 12
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
# _setmaxstdio
Sets a maximum for the number of simultaneously open files at the `stdio` level.  
  
## Syntax  
  
```  
int _setmaxstdio(  
   int newmax   
);  
```  
  
#### Parameters  
 `newmax`  
 New maximum for the number of simultaneously open files at the `stdio` level.  
  
## Return Value  
 Returns `newmax` if successful; –1 otherwise.  
  
 If `newmax` is less than `_IOB_ENTRIES` or greater then the maximum number of handles available in the operating system, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns -1 and sets `errno` to `EINVAL`.  
  
 For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_setmaxstdio` function changes the maximum value for the number of files that might be simultaneously open at the `stdio` level.  
  
 C run-time I/O now supports many more open files on Win32 platforms than in previous versions. Up to 2,048 files can be open simultaneously at the [lowio level](../../c-runtime-library/low-level-i-o.md) (that is, opened and accessed by means of the `_open`, `_read`, `_write`, and so forth family of I/O functions). Up to 512 files can be open simultaneously at the [stdio level](../../c-runtime-library/stream-i-o.md) (that is, opened and accessed by means of the `fopen`, `fgetc`, `fputc`, and so forth family of functions). The limit of 512 open files at the `stdio` level can be increased to a maximum of 2,048 by means of the `_setmaxstdio` function.  
  
 Because `stdio`-level functions, such as `fopen`, are built on top of the `lowio` functions, the maximum of 2,048 is a hard upper limit for the number of simultaneously open files accessed through the C run-time library.  
  
> [!NOTE]
>  This upper limit might be beyond what is supported by a particular Win32 platform and configuration.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_setmaxstdio`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See [_getmaxstdio](../../c-runtime-library/reference/getmaxstdio.md) for an example of using `_setmaxstdio`.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)