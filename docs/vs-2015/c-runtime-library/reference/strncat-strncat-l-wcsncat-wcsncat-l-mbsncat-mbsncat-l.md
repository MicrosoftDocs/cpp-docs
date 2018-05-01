---
title: "strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "strncat"
  - "_strncat_l"
  - "_mbsncat"
  - "_mbsncat_l"
  - "wcsncat"
  - "wcsncat_l"
api_location: 
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_tcsncat_l"
  - "_wcsncat_l"
  - "_tcsnccat_l"
  - "_mbsncat"
  - "_strncat_l"
  - "strncat"
  - "_tcsnccat"
  - "_mbsncat_l"
  - "_ftcsncat"
  - "wcsncat"
  - "_tcsncat"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "concatenating strings"
  - "ftcsncat function"
  - "tcsncat_l function"
  - "_tcsnccat_l function"
  - "_tcsncat function"
  - "strncat function"
  - "_ftcsncat function"
  - "mbsncat function"
  - "mbsncat_l function"
  - "strings [C++], appending"
  - "wcsncat function"
  - "tcsnccat function"
  - "tcsnccat_l function"
  - "_tcsnccat function"
  - "string concatenation [C++]"
  - "appending strings"
  - "characters [C++], appending to strings"
  - "_mbsncat function"
  - "_tcsncat_l function"
  - "_mbsncat_l function"
  - "tcsncat function"
ms.assetid: de67363b-68c6-4ca5-91e3-478610ad8159
caps.latest.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l).  
  
  
Appends up to the specified number of characters of a source string to a destination string. More secure versions of these functions are available. For information, see [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) .  
  
> [!IMPORTANT]
>  `_mbsncat` and `_mbsncat_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *strncat(  
   char *strDest,  
   const char *strSource,  
   size_t count);  
     
wchar_t *wcsncat(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count);
  
unsigned char *_mbsncat(  
   unsigned char *strDest,  
   const unsigned char *strSource,  
   size_t count);  
   
unsigned char *_mbsncat_l(  
   unsigned char *strDest,  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale);  

template <size_t size>  
char *strncat(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count); // C++ only    

template <size_t size>  
wchar_t *wcsncat(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count); // C++ only  

template <size_t size>  
unsigned char *_mbsncat(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count); // C++ only  

template <size_t size>  
unsigned char *_mbsncat_l(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale); // C++ only  
```  
  
#### Parameters  
 `strDest`  
 Null-terminated destination string.  
  
 `strSource`  
 Null-terminated source string.  
  
 `count`  
 Maximum number of characters to append.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Returns a pointer to the destination string. No return value is reserved to indicate an error.  
  
## Remarks  
 The `strncat` function appends, at most, the first `count` characters of `strSource` to `strDest`. The initial character of `strSource` overwrites the terminating null character of `strDest`. If a null character appears in `strSource` before `count` characters are appended, `strncat` appends all characters from `strSource`, up to the null character. If `count` is greater than the length of `strSource`, the length of `strSource` is used in place of `count`. In all cases, the resulting string is terminated with a null character. If copying takes place between strings that overlap, the behavior is undefined.  
  
> [!IMPORTANT]
>  `strncat` does not check for sufficient space in `strDest`; it is therefore a potential cause of buffer overruns. Keep in mind that `count` limits the number of characters appended; it is not a limit on the size of `strDest`. For details, see the examples below. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 `wcsncat` and `_mbsncat` are wide-character and multibyte-character versions of `strncat`. The string arguments and return value of `wcsncat` are wide-character strings; those of `_mbsncat` are multibyte-character strings. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 In C++, these functions have template overloads. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsncat`|`strncat`|`_mbsnbcat`|`wcsncat`|  
|`_tcsncat_l`|`_strncat_l`|`_mbsnbcat_l`|`_wcsncat_l`|  
  
> [!NOTE]
>  `_strncat_l` and `_wcsncat_l` have no locale dependence and are not meant to be called directly. They are provided for internal use by `_tcsncat_l`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strncat`|\<string.h>|  
|`wcsncat`|\<string.h> or \<wchar.h>|  
|`_mbsncat`|\<mbstring.h>|  
|`_mbsncat_l`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```cpp  
// crt_strncat.c  
// Use strcat and strncat to append to a string.  
// Compile by using: cl /W4 crt_strncat.c

// To disable security deprecation warnings for strncat and strcpy, 
// define this symbol before you include any standard headers:
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>  
#include <string.h>
  
#define MAXSTRINGLEN 39  
  
// struct to show what happens if a buffer overrun occurs.
struct {
char dest[MAXSTRINGLEN+1]; // The target of our writes
char safe[MAXSTRINGLEN+1]; // The next part of memory
} strings;  
  
void BadAppend(char suffix[], int n)  
{  
    strncat(strings.dest, suffix, n);
    // Bad: There is no check to see if up to n characters of
    // suffix can fit into the destination along with a terminating null.  
}  

void BadAppend2(char suffix[])
{
    strncat(strings.dest, suffix, _countof(strings.dest));
    // Bad: attempts to write the total number of characters
    // allocated for the destination, starting after the characters
    // already in the destination.
}

void BadAppend3(char suffix[])
{
    strncat(strings.dest, suffix, 
        _countof(strings.dest) - strlen(strings.dest));
    // Bad: does not account for the terminating null.
}
  
void GoodAppend(char suffix[], size_t n)  
{  
    strncat(strings.dest, suffix, 
        __min(n, _countof(strings.dest) - strlen(strings.dest) - 1));  
    // Good: does not append more than the number of characters 
    // available in the destination and leaves room for the null.
}  

void init_strings()
{
    strcpy(strings.dest, "This is a 25-char string!");  
    strcpy(strings.safe, "This wasn't overwritten by strncat.");  
}

void report_results(char function_name[])
{
    printf("After %s :  %s (%d chars)\n", 
        function_name, strings.dest, strlen(strings.dest));  
    printf("buffer overrun check :  %s\n", strings.safe);  
}
  
int main(void)  
{  
    // Initialize the destination string with 25 characters and
    // the overrun check buffer with a test string.
    init_strings();
    printf("strings.dest can hold up to %d characters plus a null.\n", 
        MAXSTRINGLEN);
    printf("If the check buffer isn't overrun, it contains:\n%s\n\n",
        strings.safe);

    // Append 20 characters to the string.
    BadAppend("Extra text to add to the string...", 20);
    report_results("BadAppend");  
  
    init_strings();
    // Append up to the length of the destination string.
    BadAppend2("Extra text to add to the string...");  
    report_results("BadAppend2");  
  
    init_strings();
    // Append up to the length of the destination string minus
    // the number of characters already in the string.
    BadAppend3("Extra text to add to the string...");  
    report_results("BadAppend3");  
  
    init_strings();
    // Append up to the length of the destination string minus
    // the number of characters already in the string and one for
    // the terminating null, or 20, whichever is smaller.
    GoodAppend("Extra text to add to the string...", 20);  
    report_results("GoodAppend");  
}  
```  

```Output    
strings.dest can hold up to 39 characters plus a null.
If the check buffer isn't overrun, it contains:
This wasn't overwritten by strncat.

After BadAppend :  This is a 25-char string!Extra text to add to (45 chars)
buffer overrun check :  dd to
After BadAppend2 :  This is a 25-char string!Extra text to add to the string... (59 chars)
buffer overrun check :  dd to the string...
After BadAppend3 :  This is a 25-char string!Extra text to a (40 chars)
buffer overrun check :
After GoodAppend :  This is a 25-char string!Extra text to  (39 chars)
buffer overrun check :  This wasn't overwritten by strncat.
```  
   
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [_mbsnbcat, _mbsnbcat_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy, wcscpy, _mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)



