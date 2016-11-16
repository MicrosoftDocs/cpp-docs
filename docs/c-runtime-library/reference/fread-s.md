---
title: "fread_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fread_s"
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
  - "fread_s"
  - "stdio/fread_s"
dev_langs: 
  - "C++"
ms.assetid: ce735de0-f005-435d-a8f2-6f4b80ac775e
caps.latest.revision: 7
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
# fread_s
Reads data from a stream. This version of [fread](../../c-runtime-library/reference/fread.md) has security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
size_t fread_s(   
   void *buffer,  
   size_t bufferSize,  
   size_t elementSize,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parameters  
 `buffer`  
 Storage location for data.  
  
 `bufferSize`  
 Size of the destination buffer in bytes.  
  
 `elementSize`  
 Size of the item to read in bytes.  
  
 `count`  
 Maximum number of items to be read.  
  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 `fread_s` returns the number of (whole) items that were read into the buffer, which may be less than `count` if a read error or the end of the file is encountered before `count` is reached. Use the `feof` or `ferror` function to distinguish an error from an end-of-file condition. If `size` or `count` is 0, `fread_s` returns 0 and the buffer contents are unchanged. If `stream` or `buffer` is a null pointer, `fread_s` invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns 0.  
  
 For more information about error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `fread_s` function reads up to `count` items of `elementSize` bytes from the input `stream` and stores them in `buffer`.  The file pointer that is associated with `stream` (if there is one) is increased by the number of bytes actually read. If the given stream is opened in text mode, carriage return–linefeed pairs are replaced with single linefeed characters. The replacement has no effect on the file pointer or the return value. The file-pointer position is indeterminate if an error occurs. The value of a partially read item cannot be determined.  
  
 This function locks out other threads. If you require a non-locking version, use `_fread_nolock`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fread_s`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```cpp  
  
// crt_fread_s.c  
// Command line: cl /EHsc /nologo /W4 crt_fread_s.c  
//  
// This program opens a file that's named FREAD.OUT and  
// writes characters to the file. It then tries to open  
// FREAD.OUT and read in characters by using fread_s. If the attempt succeeds,  
// the program displays the number of actual items read.  
  
#include <stdio.h>  
  
#define BUFFERSIZE 30  
#define DATASIZE 22  
#define ELEMENTCOUNT 2  
#define ELEMENTSIZE (DATASIZE/ELEMENTCOUNT)  
#define FILENAME "FREAD.OUT"  
  
int main( void )  
{  
   FILE *stream;  
   char list[30];  
   int  i, numread, numwritten;  
  
   for ( i = 0; i < DATASIZE; i++ )  
      list[i] = (char)('z' - i);  
   list[DATASIZE] = '\0'; // terminal null so we can print it  
  
   // Open file in text mode:  
   if( fopen_s( &stream, FILENAME, "w+t" ) == 0 )  
   {  
      // Write DATASIZE characters to stream   
      printf( "Contents of buffer before write/read:\n\t%s\n\n", list );  
      numwritten = fwrite( list, sizeof( char ), DATASIZE, stream );  
      printf( "Wrote %d items\n\n", numwritten );  
      fclose( stream );  
   } else {  
      printf( "Problem opening the file\n" );  
      return -1;  
   }  
  
   if( fopen_s( &stream, FILENAME, "r+t" ) == 0 )   {  
      // Attempt to read in characters in 2 blocks of 11  
      numread = fread_s( list, BUFFERSIZE, ELEMENTSIZE, ELEMENTCOUNT, stream );  
      printf( "Number of %d-byte elements read = %d\n\n", ELEMENTSIZE, numread );  
      printf( "Contents of buffer after write/read:\n\t%s\n", list );  
      fclose( stream );  
   } else {  
      printf( "File could not be opened\n" );  
      return -1;  
   }  
}  
```  
  
```Output  
Contents of buffer before write/read:   
        zyxwvutsrqponmlkjihgfe  
  
Wrote 22 items  
  
Number of 11-byte elements read = 2  
  
Contents of buffer after write/read:   
        zyxwvutsrqponmlkjihgfe  
  
```  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fwrite](../../c-runtime-library/reference/fwrite.md)   
 [_read](../../c-runtime-library/reference/read.md)