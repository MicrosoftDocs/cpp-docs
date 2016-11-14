---
title: "_fileno | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fileno"
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
  - "_fileno"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "file handles [C++], getting from streams"
  - "fileno function"
  - "_fileno function"
  - "streams, getting file handles"
ms.assetid: 86474174-2f17-4100-bcc4-352dd976c7b5
caps.latest.revision: 19
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
# _fileno
Gets the file descriptor associated with a stream.  
  
## Syntax  
  
```  
int _fileno(   
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to the `FILE` structure.  
  
## Return Value  
 `_fileno` returns the file descriptor. There is no error return. The result is undefined if `stream` does not specify an open file. If stream is `NULL`, _`fileno` invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns -1 and sets `errno` to `EINVAL`.  
  
 For more information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
> [!NOTE]
>  If `stdout` or `stderr` is not associated with an output stream (for example, in a Windows application without a console window), the file descriptor returned is -2. In previous versions, the file descriptor returned was -1. This change allows applications to distinguish this condition from an error.  
  
## Remarks  
 The `_fileno` routine returns the file descriptor currently associated with `stream`. This routine is implemented both as a function and as a macro. For information about choosing either implementation, see [Choosing Between Functions and Macros](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md).  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fileno`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fileno.c  
// This program uses _fileno to obtain  
// the file descriptor for some standard C streams.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   printf( "The file descriptor for stdin is %d\n", _fileno( stdin ) );  
   printf( "The file descriptor for stdout is %d\n", _fileno( stdout ) );  
   printf( "The file descriptor for stderr is %d\n", _fileno( stderr ) );  
}  
```  
  
```Output  
The file descriptor for stdin is 0  
The file descriptor for stdout is 1  
The file descriptor for stderr is 2  
```  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [_filelength, _filelengthi64](../../c-runtime-library/reference/filelength-filelengthi64.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)