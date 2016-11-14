---
title: "_lseek, _lseeki64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_lseeki64"
  - "_lseek"
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
  - "_lseeki64"
  - "_lseek"
  - "lseeki64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "lseek function"
  - "_lseek function"
  - "_lseeki64 function"
  - "lseeki64 function"
  - "file pointers [C++], moving"
  - "seek file pointers"
ms.assetid: aba8a768-d40e-48c3-b38e-473dbd782f93
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
# _lseek, _lseeki64
Moves a file pointer to the specified location.  
  
## Syntax  
  
```  
  
      long _lseek(  
   int fd,  
   long offset,  
   int origin   
);  
__int64 _lseeki64(  
   int fd,  
   __int64 offset,  
   int origin   
);  
```  
  
#### Parameters  
 `fd`  
 File descriptor referring to an open file.  
  
 *offset*  
 Number of bytes from *origin*.  
  
 *origin*  
 Initial position.  
  
## Return Value  
 `_lseek` returns the offset, in bytes, of the new position from the beginning of the file. `_lseeki64` returns the offset in a 64-bit integer. The function returns –1L to indicate an error. If passed an invalid parameter, such as a bad file descriptor, or the value for *origin* is invalid or the position specified by *offset* is before the beginning of the file, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EBADF` and return -1L. On devices incapable of seeking (such as terminals and printers), the return value is undefined.  
  
 For more information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_lseek` function moves the file pointer associated with `fd` to a new location that is *offset* bytes from *origin*. The next operation on the file occurs at the new location. The *origin* argument must be one of the following constants, which are defined in Stdio.h.  
  
 `SEEK_SET`  
 Beginning of the file.  
  
 `SEEK_CUR`  
 Current position of the file pointer.  
  
 `SEEK_END`  
 End of file.  
  
 You can use `_lseek` to reposition the pointer anywhere in a file or beyond the end of the file.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_lseek`|\<io.h>|  
|`_lseeki64`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_lseek.c  
/* This program first opens a file named lseek.txt.  
 * It then uses _lseek to find the beginning of the file,  
 * to find the current position in the file, and to find  
 * the end of the file.  
 */  
  
#include <io.h>  
#include <fcntl.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <share.h>  
  
int main( void )  
{  
   int fh;  
   long pos;               /* Position of file pointer */  
   char buffer[10];  
  
   _sopen_s( &fh, "crt_lseek.c_input", _O_RDONLY, _SH_DENYNO, 0 );  
  
   /* Seek the beginning of the file: */  
   pos = _lseek( fh, 0L, SEEK_SET );  
   if( pos == -1L )  
      perror( "_lseek to beginning failed" );  
   else  
      printf( "Position for beginning of file seek = %ld\n", pos );  
  
   /* Move file pointer a little */  
    _read( fh, buffer, 10 );  
  
   /* Find current position: */  
   pos = _lseek( fh, 0L, SEEK_CUR );  
   if( pos == -1L )  
      perror( "_lseek to current position failed" );  
   else  
      printf( "Position for current position seek = %ld\n", pos );  
  
   /* Set the end of the file: */  
   pos = _lseek( fh, 0L, SEEK_END );  
   if( pos == -1L )  
      perror( "_lseek to end failed" );  
   else  
      printf( "Position for end of file seek = %ld\n", pos );  
  
   _close( fh );  
}  
```  
  
## Input: crt_lseek.c_input  
  
```  
Line one.  
Line two.  
Line three.  
Line four.  
Line five.  
```  
  
## Output  
  
```  
Position for beginning of file seek = 0  
Position for current position seek = 10  
Position for end of file seek = 57  
```  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)   
 [_tell, _telli64](../../c-runtime-library/reference/tell-telli64.md)