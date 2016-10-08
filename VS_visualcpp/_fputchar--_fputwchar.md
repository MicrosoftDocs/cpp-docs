---
title: "_fputchar, _fputwchar"
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
  - _fputchar
  - _fputwchar
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
ms.assetid: b92ff600-a924-4f2b-b0e7-3097ee31bdff
caps.latest.revision: 13
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
# _fputchar, _fputwchar
Writes a character to `stdout`.  
  
## Syntax  
  
```  
int _fputchar(  
   int c   
);  
wint_t _fputwchar(  
   wchar_t c   
);  
```  
  
#### Parameters  
 `c`  
 Character to be written.  
  
## Return Value  
 Each of these functions returns the character written. For `_fputchar`, a return value of `EOF` indicates an error. For `_fputwchar`, a return value of `WEOF` indicates an error. If c is `NULL`, these functions generate an invalid parameter exception, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, they return `EOF`(or`WEOF`) and set `errno` to `EINVAL`.  
  
 For more information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 Both of these functions writes the single character `c` to `stdout` and advances the indicator as appropriate. `_fputchar` is equivalent to `fputc(``stdout )`. It is also equivalent to `putchar`, but implemented only as a function, rather than as a function and a macro. Unlike `fputc` and `putchar`, these functions are not compatible with the ANSI standard.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_fputtchar`|`_fputchar`|`_fputchar`|`_fputwchar`|  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fputchar`|<stdio.h>|  
|`_fputwchar`|<stdio.h> or <wchar.h>|  
  
 The console is not supported in Windows 8.x Store apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in Windows 8.x Store apps. For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_fputchar.c  
// This program uses _fputchar  
// to send a character array to stdout.  
  
#include <stdio.h>  
  
int main( void )  
{  
    char strptr[] = "This is a test of _fputchar!!\n";  
    char *p = NULL;  
  
    // Print line to stream using _fputchar.   
    p = strptr;  
    while( (*p != '\0') && _fputchar( *(p++) ) != EOF )  
      ;  
}  
```  
  
 **This is a test of _fputchar!!**   
## .NET Framework Equivalent  
  
-   [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [fgetc, fgetwc](../VS_visualcpp/fgetc--fgetwc.md)   
 [putc, putwc](../VS_visualcpp/putc--putwc.md)