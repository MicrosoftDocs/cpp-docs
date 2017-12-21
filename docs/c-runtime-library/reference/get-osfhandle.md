---
title: "_get_osfhandle | Microsoft Docs"
ms.custom: ""
ms.date: "12/12/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: ["_get_osfhandle"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["get_osfhandle", "_get_osfhandle"]
dev_langs: ["C++"]
helpviewer_keywords: ["operating systems, getting file handles", "get_osfhandle function", "_get_osfhandle function", "file handles [C++], operating system"]
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _get_osfhandle

Retrieves the operating-system file handle that is associated with the specified file descriptor.  
  
## Syntax  
  
```  
intptr_t _get_osfhandle(   
   int fd   
);  
```  
  
### Parameters

*fd*  
An existing file descriptor.  
  
## Return Value

Returns an operating-system file handle if *fd* is valid. Otherwise, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns `INVALID_HANDLE_VALUE` (-1) and sets `errno` to `EBADF`, indicating an invalid file handle.  
  
## Remarks

To close a file whose operating system (OS) file handle is obtained by `_get_osfhandle`, call [\_close](../../c-runtime-library/reference/close.md) on the file descriptor *fd*. Do not call `CloseHandle` on the return value of this function. The underlying OS file handle is owned by the *fd* file descriptor, and is closed when `_close` is called on *fd*. If the file descriptor is owned by a `FILE *` stream, then calling [fclose](../../c-runtime-library/reference/fclose-fcloseall.md) on that `FILE *` stream closes both the file descriptor and the underlying OS file handle. In this case, do not call `_close` on the file descriptor.
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_osfhandle`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also

[File Handling](../../c-runtime-library/file-handling.md)   
[_close](../../c-runtime-library/reference/close.md)   
[_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
[_dup, _dup2](../../c-runtime-library/reference/dup-dup2.md)   
[_open, _wopen](../../c-runtime-library/reference/open-wopen.md)
