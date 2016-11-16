---
title: "vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vsnprintf"
  - "_vsnprintf_l"
  - "_vsnwprintf"
  - "_vsnwprintf_l"
  - "_vsnprintf"
  - "_vsnprintf;"
  - "vsnprintf; _vsnprintf"
  - "_vsnwprintf;"
  - "_vsnprintf_l;"
  - "_vsnwprintf_l;"
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
apitype: "DLLExport"
f1_keywords: 
  - "_vsnprintf"
  - "_vsnwprintf"
  - "_vsntprintf"
  - "vsnprintf"
  - "stdio/vsnprintf"
  - "stdio/_vsnprintf"
  - "stdio/_vsnprintf_l"
  - "stdio/_vsnwprintf"
  - "stdio/_vsnwprintf_l"
  - "_vsnprintf_l"
  - "_vsnwprintf_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "vsntprintf function"
  - "_vsnwprintf_l function"
  - "vsnwprintf_l function"
  - "vsntprintf_l function"
  - "_vsntprintf function"
  - "_vsnprintf_l function"
  - "vsnprintf function"
  - "_vsntprintf_l function"
  - "vsnprintf_l function"
  - "_vsnwprintf function"
  - "_vsnprintf function"
  - "formatted text [C++]"
  - "vsnwprintf function"
ms.assetid: a97f92df-c2f8-4ea0-9269-76920d2d566a
caps.latest.revision: 35
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l
Write formatted output using a pointer to a list of arguments. More secure versions of these functions are available; see [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md).  
  
## Syntax  
  
```  
int vsnprintf(  
   char *buffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf(  
   char *buffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_l(  
   char *buffer,  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vsnwprintf(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vsnwprintf_l(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int vsnprintf(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnprintf(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnprintf_l(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf_l(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
); // C++ only  
```  
  
#### Parameters  
 `buffer`  
 Storage location for output.  
  
 `count`  
 Maximum number of characters to write.  
  
 `format`  
 Format specification.  
  
 `argptr`  
 Pointer to list of arguments.  
  
 `locale`  
 The locale to use.  
  
 For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Return Value  
 The `vsnprintf` function returns the number of characters written, not counting the terminating null character. If the buffer size specified by `count` is not sufficiently large to contain the output specified by `format` and `argptr`, the return value of `vsnprintf` is the number of characters that would be written, not counting the null character, if `count` were sufficiently large. If the return value is greater than `count` - 1, the output has been truncated. A return value of -1 indicates that an encoding error has occurred.  
  
 Both `_vsnprintf` and `_vsnwprintf` functions return the number of characters written if the number of characters to write is less than or equal to `count`; if the number of characters to write is greater than `count`, these functions return -1 indicating that output has been truncated.  
  
 The value returned by all these functions does not include the terminating null, whether one is written or not. When `count` is zero, the value returned is the number of characters the functions would write, not including any terminating null. You can use this result to allocate sufficient buffer space for the string and its terminating null, and then call the function again to fill the buffer.  
  
 If `format` is `NULL`, or if `buffer` is NULL and `count` is not equal to zero, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.  
  
## Remarks  
 Each of these functions takes a pointer to an argument list, then formats the data, and writes up to `count` characters  to the memory pointed to by `buffer`. The `vsnprintf` function always writes a null terminator, even if it truncates the output. When using `_vsnprintf` and `_vsnwprintf`, the buffer will be null-terminated only if there is room at the end (that is, if the number of characters to write is less than `count`).  
  
> [!IMPORTANT]
>  To prevent certain kinds of security risks, ensure that `format` is not a user-defined string. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!NOTE]
>  To ensure that there is room for the terminating null when calling `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf` and `_vsnwprintf_l`, be sure that `count` is strictly less than the buffer length and initialize the buffer to null prior to calling the function.  
>   
>  Because `vsnprintf` always writes the terminating null, the `count` parameter may be equal to the size of the buffer.  
  
 Beginning with the UCRT in Visual Studio 2015 and Windows 10,         `vsnprintf` is no longer identical to `_vsnprintf`. The `vsnprintf` function complies with the C99 standard; `_vnsprintf` is retained for backward compatibility with older Visual Studio code.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vsntprintf`|`_vsnprintf`|`_vsnprintf`|`_vsnwprintf`|  
|`_vsntprintf_l`|`_vsnprintf_l`|`_vsnprintf_l`|`_vsnwprintf_l`|  
  
## Requirements  
  
|Routine|Required header (C)|Required header (C++)|  
|-------------|---------------------------|-------------------------------|  
|`vsnprintf`, `_vsnprintf`, `_vsnprintf_l`|\<stdio.h>|\<stdio.h> or  \<cstdio>|  
|`_vsnwprintf`, `_vsnwprintf_l`|\<stdio.h> or \<wchar.h>|\<stdio.h>, \<wchar.h>, \<cstdio>, or \<cwchar>|  
  
 The `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf` and `_vsnwprintf_l` functions are Microsoft specific. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```c  
// crt_vsnwprintf.c  
// compile by using: cl /W3 crt_vsnwprintf.c  
  
// To turn off error C4996, define this symbol:  
#define _CRT_SECURE_NO_WARNINGS  
  
#include <stdio.h>  
#include <wtypes.h>  
  
#define BUFFCOUNT (10)  
  
void FormatOutput(LPCWSTR formatstring, ...)  
{  
    int nSize = 0;  
    wchar_t buff[BUFFCOUNT];  
    memset(buff, 0, sizeof(buff));  
    va_list args;  
    va_start(args, formatstring);  
    // Note: _vsnwprintf is deprecated; consider vsnwprintf_s instead  
    nSize = _vsnwprintf(buff, BUFFCOUNT - 1, formatstring, args); // C4996  
    wprintf(L"nSize: %d, buff: %ls\n", nSize, buff);  
}  
  
int main() {  
    FormatOutput(L"%ls %ls", L"Hi", L"there");  
    FormatOutput(L"%ls %ls", L"Hi", L"there!");  
    FormatOutput(L"%ls %ls", L"Hi", L"there!!");  
}  
```  
  
```Output  
nSize: 8, buff: Hi there  
nSize: 9, buff: Hi there!  
nSize: -1, buff: Hi there!  
```  
  
 The behavior changes if you use vsnprintf instead, along with narrow-string parameters. The `count` parameter can be the entire size of the buffer, and the return value is the number of characters that would have been written if `count` was large enough:  
  
## Example  
  
```c  
// crt_vsnprintf.c  
// compile by using: cl /W4 crt_vsnprintf.c  
#include <stdio.h>  
#include <stdarg.h> // for va_list, va_start  
#include <string.h> // for memset  
  
#define BUFFCOUNT (10)  
  
void FormatOutput(char* formatstring, ...)  
{  
    int nSize = 0;  
    char buff[BUFFCOUNT];  
    memset(buff, 0, sizeof(buff));  
    va_list args;  
    va_start(args, formatstring);  
    nSize = vsnprintf(buff, sizeof(buff), formatstring, args);  
    printf("nSize: %d, buff: %s\n", nSize, buff);  
}  
  
int main() {  
    FormatOutput("%s %s", "Hi", "there");   //  8 chars + null  
    FormatOutput("%s %s", "Hi", "there!");  //  9 chars + null  
    FormatOutput("%s %s", "Hi", "there!!"); // 10 chars + null  
}  
```  
  
```Output  
nSize: 8, buff: Hi there  
nSize: 9, buff: Hi there!  
nSize: 10, buff: Hi there!  
```  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [vprintf Functions](../../c-runtime-library/vprintf-functions.md)   
 [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)