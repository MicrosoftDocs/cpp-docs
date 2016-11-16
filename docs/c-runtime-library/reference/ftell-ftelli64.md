---
title: "ftell, _ftelli64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ftelli64"
  - "ftell"
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
  - "_ftelli64"
  - "ftell"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ftell function"
  - "ftelli64 function"
  - "_ftelli64 function"
  - "file pointers [C++], getting current position"
  - "file pointers [C++]"
ms.assetid: 40149cd8-65f2-42ff-b70c-68e3e918cdd7
caps.latest.revision: 19
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
# ftell, _ftelli64
Gets the current position of a file pointer.  
  
## Syntax  
  
```  
long ftell(   
   FILE *stream   
);  
__int64 _ftelli64(   
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Target `FILE` structure.  
  
## Return Value  
 `ftell` and `_ftelli64` return the current file position. The value returned by `ftell` and `_ftelli64` may not reflect the physical byte offset for streams opened in text mode, because text mode causes carriage return–linefeed translation. Use `ftell` with `fseek`or`_ftelli64`with`_fseeki64` to return to file locations correctly. On error, `ftell`and`_ftelli64` invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return –1L and set `errno` to one of two constants, defined in ERRNO.H. The `EBADF` constant means the `stream` argument is not a valid file pointer value or does not refer to an open file. `EINVAL` means an invalid `stream` argument was passed to the function. On devices incapable of seeking (such as terminals and printers), or when `stream` does not refer to an open file, the return value is undefined.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, return codes.  
  
## Remarks  
 The `ftell` and `_ftelli64`functions retrieve the current position of the file pointer (if any) associated with `stream`*.* The position is expressed as an offset relative to the beginning of the stream.  
  
 Note that when a file is opened for appending data, the current file position is determined by the last I/O operation, not by where the next write would occur. For example, if a file is opened for an append and the last operation was a read, the file position is the point where the next read operation would start, not where the next write would start. (When a file is opened for appending, the file position is moved to end of file before any write operation.) If no I/O operation has yet occurred on a file opened for appending, the file position is the beginning of the file.  
  
 In text mode, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading/writing, `fopen` and all related routines check for a CTRL+Z at the end of the file and remove it if possible. This is done because using the combination of `ftell` and `fseek` or `_ftelli64` and `_fseeki64`, to move within a file that ends with a CTRL+Z may cause `ftell` or `_ftelli64` to behave improperly near the end of the file.  
  
 This function locks the calling thread during execution and is therefore thread-safe. For a non-locking version, see `_ftell_nolock`.  
  
## Requirements  
  
|Function|Required header|Optional headers|  
|--------------|---------------------|----------------------|  
|`ftell`|\<stdio.h>|\<errno.h>|  
|`_ftelli64`|\<stdio.h>|\<errno.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_ftell.c  
// This program opens a file named CRT_FTELL.C  
// for reading and tries to read 100 characters. It  
// then uses ftell to determine the position of the  
// file pointer and displays this position.  
  
#include <stdio.h>  
  
FILE *stream;  
  
int main( void )  
{  
   long position;  
   char list[100];  
   if( fopen_s( &stream, "crt_ftell.c", "rb" ) == 0 )  
   {  
      // Move the pointer by reading data:   
      fread( list, sizeof( char ), 100, stream );  
      // Get position after read:   
      position = ftell( stream );  
      printf( "Position after trying to read 100 bytes: %ld\n",  
              position );  
      fclose( stream );  
   }  
}  
```  
  
```Output  
Position after trying to read 100 bytes: 100  
```  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [fgetpos](../../c-runtime-library/reference/fgetpos.md)   
 [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)   
 [_lseek, _lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)