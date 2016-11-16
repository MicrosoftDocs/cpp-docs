---
title: "getc, getwc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "getwc"
  - "getc"
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
  - "_gettc"
  - "getwc"
  - "_gettchar"
  - "getc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "characters, reading"
  - "_gettc function"
  - "getwchar function"
  - "streams, reading characters from"
  - "reading characters from streams"
  - "getc function"
  - "getwc function"
  - "gettc function"
ms.assetid: 354ef514-d0c7-404b-92f5-995f6a834bb3
caps.latest.revision: 18
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
# getc, getwc
Read a character from a stream.  
  
## Syntax  
  
```  
int getc(   
   FILE *stream   
);  
wint_t getwc(   
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Input stream.  
  
## Return Value  
 Returns the character read. To indicate a read error or end-of-file condition, `getc` returns `EOF`, and `getwc` returns `WEOF`. For `getc`, use `ferror` or `feof` to check for an error or for end of file. If `stream` is `NULL`, `getc` and `getwc` invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `EOF` (or `WEOF` for`getwc`) and set `errno` to `EINVAL`.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.  
  
## Remarks  
 Each routine reads a single character from a file at the current position and increments the associated file pointer (if defined) to point to the next character. The file is associated with `stream`.  
  
 These functions lock the calling thread and are therefore thread-safe. For a non-locking version, see [_getc_nolock, _getwc_nolock](../../c-runtime-library/reference/getc-nolock-getwc-nolock.md).  
  
 Routine-specific remarks follow.  
  
|Routine|Remarks|  
|-------------|-------------|  
|`getc`|Same as `fgetc`, but implemented as a function and as a macro.|  
|`getwc`|Wide-character version of `getc`. Reads a multibyte character or a wide character according to whether `stream` is opened in text mode or binary mode.|  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_gettc`|`getc`|`getc`|`getwc`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`getc`|\<stdio.h>|  
|`getwc`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_getc.c  
// Use getc to read a line from a file.  
  
#include <stdio.h>  
  
int main()  
{  
    char buffer[81];  
    int i, ch;  
    FILE* fp;  
  
    // Read a single line from the file "crt_getc.txt".   
  
    fopen_s(&fp, "crt_getc.txt", "r");  
    if (!fp)  
    {  
       printf("Failed to open file crt_getc.txt.\n");  
       exit(1);  
    }  
  
    for (i = 0; (i < 80) && ((ch = getc(fp)) != EOF)  
                         && (ch != '\n'); i++)  
    {  
        buffer[i] = (char) ch;  
    }  
  
    // Terminate string with a null character   
    buffer[i] = '\0';  
    printf( "Input was: %s\n", buffer);  
  
    fclose(fp);  
}  
```  
  
## Input: crt_getc.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Input was: Line one.  
```  
  
## .NET Framework Equivalent  
  
-   [System::IO::StreamReader::Read](https://msdn.microsoft.com/en-us/library/system.io.streamreader.read.aspx)  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fgetc, fgetwc](../../c-runtime-library/reference/fgetc-fgetwc.md)   
 [_getch, _getwch](../../c-runtime-library/reference/getch-getwch.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)   
 [ungetc, ungetwc](../../c-runtime-library/reference/ungetc-ungetwc.md)