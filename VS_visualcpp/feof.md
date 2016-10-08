---
title: "feof"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - feof
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
ms.assetid: 09081eee-7c4b-4189-861f-2fad95d3ec6d
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# feof
Tests for end-of-file on a stream.  
  
## Syntax  
  
```  
int feof(   
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 The `feof` function returns a nonzero value if a read operation has attempted to read past the end of the file; it returns 0 otherwise. If the stream pointer is `NULL`, the function invokes the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the `feof` returns 0.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) for more information on these, and other, error codes.  
  
## Remarks  
 The `feof` routine (implemented both as a function and as a macro) determines whether the end of `stream` has been passed. When the end of file is passed, read operations return an end-of-file indicator until the stream is closed or until `rewind`, `fsetpos`, `fseek`, or `clearerr` is called against it.  
  
 For example, if a file contains 10 bytes and you read 10 bytes from the file, `feof` will return 0 because, even though the file pointer is at the end of the file, you have not attempted to read beyond the end. Only after you try to read an 11th byte will `feof` return a nonzero value.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`feof`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_feof.c  
// This program uses feof to indicate when  
// it reaches the end of the file CRT_FEOF.TXT. It also  
// checks for errors with ferror.  
//  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   int  count, total = 0;  
   char buffer[100];  
   FILE *stream;  
  
   fopen_s( &stream, "crt_feof.txt", "r" );  
   if( stream == NULL )  
      exit( 1 );  
  
   // Cycle until end of file reached:  
   while( !feof( stream ) )  
   {  
      // Attempt to read in 100 bytes:  
      count = fread( buffer, sizeof( char ), 100, stream );  
      if( ferror( stream ) )      {  
         perror( "Read error" );  
         break;  
      }  
  
      // Total up actual bytes read  
      total += count;  
   }  
   printf( "Number of bytes read = %d\n", total );  
   fclose( stream );  
}  
```  
  
## Input: crt_feof.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Number of bytes read = 19  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Error Handling](../VS_visualcpp/Error-Handling--CRT-.md)   
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [clearerr](../VS_visualcpp/clearerr.md)   
 [_eof](../VS_visualcpp/_eof.md)   
 [ferror](../VS_visualcpp/ferror.md)   
 [perror, _wperror](../VS_visualcpp/perror--_wperror.md)