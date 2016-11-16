---
title: "_read | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_read"
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
  - "_read"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "data [CRT]"
  - "_read function"
  - "read function"
  - "data [C++], reading"
  - "reading data [C++]"
  - "files [C++], reading"
ms.assetid: 2ce9c433-57ad-47fe-9ac1-4a7d4c883d30
caps.latest.revision: 15
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
# _read
Reads data from a file.  
  
## Syntax  
  
```  
  
      int _read(  
   int fd,  
   void *buffer,  
   unsigned int count   
);  
```  
  
#### Parameters  
 `fd`  
 File descriptor referring to the open file.  
  
 *buffer*  
 Storage location for data.  
  
 *count*  
 Maximum number of bytes.  
  
## Return Value  
 _**read** returns the number of bytes read, which might be less than *count* if there are fewer than *count* bytes left in the file or if the file was opened in text mode, in which case each carriage return–line feed (CR-LF) pair is replaced with a single linefeed character. Only the single linefeed character is counted in the return value. The replacement does not affect the file pointer.  
  
 If the function tries to read at end of file, it returns 0. If `fd` is invalid, the file is not open for reading, or the file is locked, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns –1 and sets `errno` to `EBADF`.  
  
 If *buffer* is **NULL**, the invalid parameter handler is invoked. If execution is allowed to continue, the function returns -1 and `errno` is set to `EINVAL`.  
  
 For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_read` function reads a maximum of *count* bytes into *buffer* from the file associated with `fd`. The read operation begins at the current position of the file pointer associated with the given file. After the read operation, the file pointer points to the next unread character.  
  
 If the file was opened in text mode, the read terminates when `_read` encounters a CTRL+Z character, which is treated as an end-of-file indicator. Use [_lseek](../../c-runtime-library/reference/lseek-lseeki64.md) to clear the end-of-file indicator.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_read`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_read.c  
/* This program opens a file named crt_read.txt  
 * and tries to read 60,000 bytes from  
 * that file using _read. It then displays the  
 * actual number of bytes read.  
 */  
  
#include <fcntl.h>      /* Needed only for _O_RDWR definition */  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <share.h>  
  
char buffer[60000];  
  
int main( void )  
{  
   int fh;  
   unsigned int nbytes = 60000, bytesread;  
  
   /* Open file for input: */  
   if( _sopen_s( &fh, "crt_read.txt", _O_RDONLY, _SH_DENYNO, 0 ) )  
   {  
      perror( "open failed on input file" );  
      exit( 1 );  
   }  
  
   /* Read in input: */  
   if( ( bytesread = _read( fh, buffer, nbytes ) ) <= 0 )  
      perror( "Problem reading file" );  
   else  
      printf( "Read %u bytes from file\n", bytesread );  
  
   _close( fh );  
}  
```  
  
## Input: crt_read.txt  
  
```  
Line one.  
Line two.  
```  
  
## Output  
  
```  
Read 19 bytes from file  
```  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [fread](../../c-runtime-library/reference/fread.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_write](../../c-runtime-library/reference/write.md)