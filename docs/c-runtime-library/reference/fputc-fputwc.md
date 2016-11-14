---
title: "fputc, fputwc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fputc"
  - "fputwc"
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
  - "fputc"
  - "fputwc"
  - "_fputtc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "streams, writing characters to"
  - "fputtc function"
  - "_fputtc function"
  - "fputwc function"
  - "fputc function"
ms.assetid: 5a0a593d-43f4-4fa2-a401-ec4e23de4d2f
caps.latest.revision: 20
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
# fputc, fputwc
Writes a character to a stream.  
  
## Syntax  
  
```  
int fputc(  
   int c,  
   FILE *stream   
);  
wint_t fputwc(  
   wchar_t c,  
   FILE *stream   
);  
```  
  
#### Parameters  
 `c`  
 Character to be written.  
  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 Each of these functions returns the character written. For `fputc`, a return value of `EOF` indicates an error. For `fputwc`, a return value of `WEOF` indicates an error. If `stream` is `NULL`, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, they return `EOF` and set `errno` to `EINVAL`.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.  
  
## Remarks  
 Each of these functions writes the single character `c` to a file at the position indicated by the associated file position indicator (if defined) and advances the indicator as appropriate. In the case of `fputc` and `fputwc`, the file is associated with `stream`*.* If the file cannot support positioning requests or was opened in append mode, the character is appended to the end of the stream.  
  
 The two functions behave identically if the stream is opened in ANSI mode. `fputc` does not currently support output into a UNICODE stream.  
  
 The versions with the `_nolock` suffix are identical except that they are not protected from interference by other threads. For more information, see[_fputc_nolock, _fputwc_nolock](../../c-runtime-library/reference/fputc-nolock-fputwc-nolock.md).  
  
 Routine-specific remarks follow.  
  
|Routine|Remarks|  
|-------------|-------------|  
|`fputc`|Equivalent to `putc`, but implemented only as a function, rather than as a function and a macro.|  
|`fputwc`|Wide-character version of `fputc`. Writes `c` as a multibyte character or a wide character according to whether `stream` is opened in text mode or binary mode.|  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_fputtc`|`fputc`|`fputc`|`fputwc`|  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fputc`|\<stdio.h>|  
|`fputwc`|\<stdio.h> or \<wchar.h>|  
  
 The console is not supported in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_fputc.c  
// This program uses fputc  
// to send a character array to stdout.  
  
#include <stdio.h>  
  
int main( void )  
{  
   char strptr1[] = "This is a test of fputc!!\n";  
   char *p;  
  
   // Print line to stream using fputc.   
   p = strptr1;  
   while( (*p != '\0') && fputc( *(p++), stdout ) != EOF ) ;  
  
}  
```  
  
```Output  
This is a test of fputc!!  
```  
  
## .NET Framework Equivalent  
  
-   [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fgetc, fgetwc](../../c-runtime-library/reference/fgetc-fgetwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)