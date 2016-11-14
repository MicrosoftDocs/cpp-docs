---
title: "gets, _getws | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_getws"
  - "gets"
apilocation: 
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_getts"
  - "gets"
  - "_getws"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "getws function"
  - "getts function"
  - "_getws function"
  - "lines, getting"
  - "streams, getting lines"
  - "_getts function"
  - "gets function"
  - "standard input, reading from"
ms.assetid: 1ec2dd4b-f801-48ea-97c2-892590f16024
caps.latest.revision: 32
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
# gets, _getws
Gets a line from the `stdin` stream. More secure versions of these functions are available; see [gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md).  
  
> [!IMPORTANT]
>  These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT. The secure versions of these functions,  gets_s and _getws_s, are still available. For information on these alternative functions, see [gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *gets(   
   char *buffer   
);  
wchar_t *_getws(   
   wchar_t *buffer   
);  
template <size_t size>  
char *gets(   
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_getws(   
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### Parameters  
 `buffer`  
 Storage location for input string.  
  
## Return Value  
 Returns its argument if successful. A `NULL` pointer indicates an error or end-of-file condition. Use [ferror](../c-runtime-library/reference/ferror.md) or [feof](../c-runtime-library/reference/feof.md) to determine which one has occurred. If `buffer` is `NULL`, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `NULL` and set errno to `EINVAL`.  
  
## Remarks  
 The `gets` function reads a line from the standard input stream `stdin` and stores it in `buffer`. The line consists of all characters up to and including the first newline character ('\n'). `gets` then replaces the newline character with a null character ('\0') before returning the line. In contrast, the `fgets` function retains the newline character. `_getws` is a wide-character version of `gets`; its argument and return value are wide-character strings.  
  
> [!IMPORTANT]
>  Because there is no way to limit the number of characters read by gets, untrusted input can easily cause buffer overruns. Use `fgets` instead.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_getts`|`gets`|`gets`|`_getws`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`gets`|\<stdio.h>|  
|`_getws`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_gets.c  
// compile with: /WX /W3  
  
#include <stdio.h>  
  
int main( void )  
{  
   char line[21]; // room for 20 chars + '\0'  
   gets( line );  // C4996  
   // Danger: No way to limit input to 20 chars.  
   // Consider using gets_s instead.  
   printf( "The line entered was: %s\n", line );  
}  
```  
  
 Note that input longer than 20 characters will overrun the line buffer and almost certainly cause the program to crash.  
  
```Output  
  
Hello there!The line entered was: Hello there!  
```  
  
## .NET Framework Equivalent  
 [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## See Also  
 [Stream I/O](../c-runtime-library/stream-i-o.md)   
 [fgets, fgetws](../c-runtime-library/reference/fgets-fgetws.md)   
 [fputs, fputws](../c-runtime-library/reference/fputs-fputws.md)   
 [puts, _putws](../c-runtime-library/reference/puts-putws.md)