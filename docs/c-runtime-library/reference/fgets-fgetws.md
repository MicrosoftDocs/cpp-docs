---
title: "fgets, fgetws | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fgets"
  - "fgetws"
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
  - "_fgetts"
  - "fgetws"
  - "fgets"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fgetts function"
  - "streams, getting strings from"
  - "streams, reading from"
  - "fgets function"
  - "fgetws function"
  - "fgetts function"
ms.assetid: ad549bb5-df98-4ccd-a53f-95114e60c4fc
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
# fgets, fgetws
Get a string from a stream.  
  
## Syntax  
  
```  
char *fgets(   
   char *str,  
   int n,  
   FILE *stream   
);  
wchar_t *fgetws(   
   wchar_t *str,  
   int n,  
   FILE *stream   
);  
```  
  
#### Parameters  
 `str`  
 Storage location for data.  
  
 `n`  
 Maximum number of characters to read.  
  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 Each of these functions returns `str`. `NULL` is returned to indicate an error or an end-of-file condition. Use `feof` or `ferror` to determine whether an error occurred. If `str` or `stream` is a null pointer, or `n` is less than or equal to zero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `NULL`.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.  
  
## Remarks  
 The `fgets` function reads a string from the input `stream` argument and stores it in `str`. `fgets` reads characters from the current stream position to and including the first newline character, to the end of the stream, or until the number of characters read is equal to `n` – 1, whichever comes first. The result stored in `str` is appended with a null character. The newline character, if read, is included in the string.  
  
 `fgetws` is a wide-character version of `fgets`.  
  
 `fgetws` reads the wide-character argument `str` as a multibyte-character string or a wide-character string according to whether `stream` is opened in text mode or binary mode, respectively. For more information about using text and binary modes in Unicode and multibyte stream-I/O, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) and [Unicode Stream I/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_fgetts`|`fgets`|`fgets`|`fgetws`|  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fgets`|\<stdio.h>|  
|`fgetws`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fgets.c  
// This program uses fgets to display  
// a line from a file on the screen.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char line[100];  
  
   if( fopen_s( &stream, "crt_fgets.txt", "r" ) == 0 )  
   {  
      if( fgets( line, 100, stream ) == NULL)  
         printf( "fgets error\n" );  
      else  
         printf( "%s", line);  
      fclose( stream );  
   }  
}  
```  
  
## Input: crt_fgets.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Line one.  
```  
  
## .NET Framework Equivalent  
  
-   [System::IO::StreamReader::ReadLine](https://msdn.microsoft.com/en-us/library/system.io.streamreader.readline.aspx)  
  
-   [System::IO::TextReader::ReadBlock](https://msdn.microsoft.com/en-us/library/system.io.textreader.readblock.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fputs, fputws](../../c-runtime-library/reference/fputs-fputws.md)   
 [gets, _getws](../../c-runtime-library/gets-getws.md)   
 [puts, _putws](../../c-runtime-library/reference/puts-putws.md)