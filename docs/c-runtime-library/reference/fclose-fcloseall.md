---
title: "fclose, _fcloseall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fclose"
  - "_fcloseall"
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
  - "fclose"
  - "_fcloseall"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fclose function"
  - "streams, closing"
  - "_fcloseall function"
ms.assetid: c3c6ea72-92c6-450a-a33e-3e568d2784a4
caps.latest.revision: 17
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
# fclose, _fcloseall
Closes a stream (`fclose`) or closes all open streams (`_fcloseall`).  
  
## Syntax  
  
```  
int fclose(   
   FILE *stream   
);  
int _fcloseall( void );  
```  
  
#### Parameters  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 `fclose` returns 0 if the stream is successfully closed. `_fcloseall` returns the total number of streams closed. Both functions return `EOF` to indicate an error.  
  
## Remarks  
 The `fclose` function closes `stream`. If `stream` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `fclose` sets `errno` to `EINVAL` and returns `EOF`. It is recommended that the `stream` pointer always be checked prior to calling this function.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.  
  
 The `_fcloseall` function closes all open streams except `stdin`, `stdout`, `stderr` (and, in MS-DOS, `_stdaux` and `_stdprn`). It also closes and deletes any temporary files created by `tmpfile`. In both functions, all buffers associated with the stream are flushed prior to closing. System-allocated buffers are released when the stream is closed. Buffers assigned by the user with `setbuf` and `setvbuf` are not automatically released.  
  
 **Note:** When these functions are used to close a stream, the underlying file descriptor and OS file handle (or socket) are closed, as well as the stream. Thus, if the file was originally opened as a file handle or file descriptor and is closed with `fclose`, do not also call `_close` to close the file descriptor; do not call the Win32 function `CloseHandle` to close the file handle.  
  
 `fclose` and `_fcloseall` include code to protect against interference from other threads. For non-locking version of a `fclose`, see `_fclose_nolock`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fclose`|\<stdio.h>|  
|`_fcloseall`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
## .NET Framework Equivalent  
  
-   [System::IO::BinaryReader::Close](https://msdn.microsoft.com/en-us/library/system.io.binaryreader.close.aspx)  
  
-   [System::IO::BinaryWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.close.aspx)  
  
-   [System::IO::StringReader::Close](https://msdn.microsoft.com/en-us/library/system.io.stringreader.close.aspx)  
  
-   [System::IO::StringWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.stringwriter.close.aspx)  
  
-   [System::IO::Stream::Close](https://msdn.microsoft.com/en-us/library/system.io.stream.close.aspx)  
  
-   [System::IO::StreamReader::Close](https://msdn.microsoft.com/en-us/library/system.io.streamreader.close.aspx)  
  
-   [System::IO::StreamWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.close.aspx)  
  
-   [System::IO::TextReader::Close](https://msdn.microsoft.com/en-us/library/system.io.textreader.close.aspx)  
  
-   [System::IO::TextWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.textwriter.close.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)