---
title: "fgetpos | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fgetpos"
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
  - "fgetpos"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fgetpos function"
  - "streams, file position indicator"
ms.assetid: bfa05c38-1135-418c-bda1-d41be51acb62
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
# fgetpos
Gets a stream's file-position indicator.  
  
## Syntax  
  
```  
int fgetpos(   
   FILE *stream,  
   fpos_t *pos   
);  
```  
  
#### Parameters  
 `stream`  
 Target stream.  
  
 `pos`  
 Position-indicator storage.  
  
## Return Value  
 If successful, `fgetpos` returns 0. On failure, it returns a nonzero value and sets `errno` to one of the following manifest constants (defined in STDIO.H): `EBADF`, which means the specified stream is not a valid file pointer or is not accessible, or `EINVAL`, which means the `stream` value or the value of `pos` is invalid, such as if either is a null pointer. If `stream` or `pos` is a `NULL` pointer, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).  
  
## Remarks  
 The `fgetpos` function gets the current value of the `stream` argument's file-position indicator and stores it in the object pointed to by `pos`. The `fsetpos` function can later use information stored in `pos` to reset the `stream` argument's pointer to its position at the time `fgetpos` was called. The `pos` value is stored in an internal format and is intended for use only by `fgetpos` and `fsetpos`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fgetpos`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fgetpos.c  
// This program uses fgetpos and fsetpos to  
// return to a location in a file.  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE   *stream;  
   fpos_t pos;  
   char   buffer[20];  
  
   if( fopen_s( &stream, "crt_fgetpos.txt", "rb" ) ) {  
      perror( "Trouble opening file" );  
      return -1;  
   }  
  
   // Read some data and then save the position.   
   fread( buffer, sizeof( char ), 8, stream );  
   if( fgetpos( stream, &pos ) != 0 ) {  
      perror( "fgetpos error" );  
      return -1;  
   }  
  
   fread( buffer, sizeof( char ), 13, stream );  
   printf( "after fgetpos: %.13s\n", buffer );  
  
   // Restore to old position and read data   
   if( fsetpos( stream, &pos ) != 0 ) {  
      perror( "fsetpos error" );  
      return -1;  
   }  
  
   fread( buffer, sizeof( char ), 13, stream );  
   printf( "after fsetpos: %.13s\n", buffer );  
   fclose( stream );  
}  
```  
  
## Input: crt_fgetpos.txt  
  
```  
fgetpos gets a stream's file-position indicator.  
```  
  
### Output crt_fgetpos.txt  
  
```  
after fgetpos: gets a stream  
after fsetpos: gets a stream  
```  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fsetpos](../../c-runtime-library/reference/fsetpos.md)