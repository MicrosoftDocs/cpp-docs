---
title: "_chsize_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_chsize_s"
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
  - "chsize_s"
  - "_chsize_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "files [C++], changing size"
  - "chsize_s function"
  - "_chsize_s function"
ms.assetid: d88d2e94-6e3b-42a5-8631-16ac4d82fa38
caps.latest.revision: 16
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
# _chsize_s
Changes the size of a file. This is a version of [_chsize](../../c-runtime-library/reference/chsize.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t _chsize_s(   
   int fd,  
   __int64 size   
);  
```  
  
#### Parameters  
 `fd`  
 File descriptor referring to an open file.  
  
 `size`  
 New length of the file in bytes.  
  
## Return Value  
 `_chsize_s` returns the value 0 if the file size is successfully changed. A nonzero return value indicates an error: the return value is `EACCES` if the specified file is locked against access, `EBADF` if the specified file is read-only or the descriptor is invalid, `ENOSPC` if no space is left on the device, or `EINVAL` if size is less than zero. `errno` is set to the same value.  
  
 For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_chsize_s` function extends or truncates the file associated with `fd` to the length specified by `size`. The file must be open in a mode that permits writing. Null characters ('\0') are appended if the file is extended. If the file is truncated, all data from the end of the shortened file to the original length of the file is lost.  
  
 `_chsize_s` takes a 64-bit integer as the file size, and therefore can handle file sizes greater than 4 GB. `_chsize` is limited to 32-bit file sizes.  
  
 This function validates its parameters. If `fd` is not a valid file descriptor or size is less than zero, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_chsize_s`|\<io.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
  
-   [System::IO::Stream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.stream.setlength.aspx)  
  
-   [System::IO::FileStream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.filestream.setlength.aspx)  
  
## See Also  
 [File Handling](../../c-runtime-library/file-handling.md)   
 [_chsize](../../c-runtime-library/reference/chsize.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)