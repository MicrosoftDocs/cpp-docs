---
title: "_tell, _telli64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_telli64"
  - "_tell"
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
  - "tell"
  - "telli64"
  - "_telli64"
  - "_tell"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tell function"
  - "file pointers [C++], getting"
  - "_tell function"
  - "file pointers [C++]"
  - "telli64 function"
  - "_telli64 function"
ms.assetid: 1500e8f9-8fec-4253-9eec-ec66125dfc9b
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
# _tell, _telli64
Get the position of the file pointer.  
  
## Syntax  
  
```  
long _tell(  
   int handle  
);  
__int64 _telli64(  
   int handle   
);  
```  
  
#### Parameters  
 `handle`  
 File descriptor referring to open file.  
  
## Return Value  
 The current position of the file pointer. On devices incapable of seeking, the return value is undefined.  
  
 A return value of –1L indicates an error. If `handle` is an invalid file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EBADF` and return -1L.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on this, and other, return codes.  
  
## Remarks  
 The `_tell` function gets the current position of the file pointer (if any) associated with the `handle` argument. The position is expressed as the number of bytes from the beginning of the file. For the `_telli64` function, this value is expressed as a 64-bit integer.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_tell`, `_telli64`|\<io.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_tell.c  
// This program uses _tell to tell the  
// file pointer position after a file read.  
//  
  
#include <io.h>  
#include <stdio.h>  
#include <fcntl.h>  
#include <share.h>  
#include <string.h>  
  
int main( void )  
{  
   int  fh;  
   char buffer[500];  
  
   if ( _sopen_s( &fh, "crt_tell.txt", _O_RDONLY, _SH_DENYNO, 0) )  
   {  
      char buff[50];  
      _strerror_s( buff, sizeof(buff), NULL );  
      printf( buff );  
      exit( -1 );  
   }  
  
   if( _read( fh, buffer, 500 ) > 0 )  
      printf( "Current file position is: %d\n", _tell( fh ) );  
   _close( fh );  
}  
```  
  
## Input: crt_tell.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Current file position is: 20  
```  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [ftell, _ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)   
 [_lseek, _lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)