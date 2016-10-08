---
title: "strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l"
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
  - _wcsncat_s_l
  - wcsncat_s
  - _mbsncat_s_l
  - _mbsncat_s
  - strncat_s
  - _strncat_s_l
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
  - api-ms-win-crt-multibyte-l1-1-0.dll
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: de77eca2-4d9c-4e66-abf2-a95fefc21e5a
caps.latest.revision: 40
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
# strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l
Appends characters to a string. These versions of [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../VS_visualcpp/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md) have security enhancements, as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
> [!IMPORTANT]
>  `_mbsncat_s` and `_mbsncat_s_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t strncat_s(  
   char *strDest,  
   size_t numberOfElements,  
   const char *strSource,  
   size_t count  
);  
errno_t _strncat_s_l(  
   char *strDest,  
   size_t numberOfElements,  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
);  
errno_t wcsncat_s(  
   wchar_t *strDest,  
   size_t numberOfElements,  
   const wchar_t *strSource,  
   size_t count   
);  
errno_t _wcsncat_s_l(  
   wchar_t *strDest,  
   size_t numberOfElements,  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
);  
errno_t _mbsncat_s(  
   unsigned char *strDest,  
   size_t numberOfElements,  
   const unsigned char *strSource,  
   size_t count  
);  
errno_t _mbsncat_s_l(  
   unsigned char *strDest,  
   size_t numberOfElements,  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t strncat_s(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count  
); // C++ only  
template <size_t size>  
errno_t _strncat_s_l(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t wcsncat_s(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _wcsncat_s_l(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t _mbsncat_s(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count  
); // C++ only  
template <size_t size>  
errno_t _mbsncat_s_l(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 [out] `strDest`  
 Null-terminated destination string.  
  
 [in]`numberOfElements`  
 Size of the destination buffer.  
  
 [in]`strSource`  
 Null-terminated source string.  
  
 [in]`count`  
 Number of characters to append, or [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md).  
  
 [in] `locale`  
 Locale to use.  
  
## Return Value  
 Returns 0 if successful, an error code on failure.  
  
### Error Conditions  
  
|`strDestination`|`numberOfElements`|`strSource`|Return value|Contents of `strDestination`|  
|----------------------|------------------------|-----------------|------------------|----------------------------------|  
|`NULL` or unterminated|any|any|`EINVAL`|not modified|  
|any|any|`NULL`|`EINVAL`|not modified|  
|any|0, or too small|any|`ERANGE`|not modified|  
  
## Remarks  
 These functions try to append the first `D` characters of `strSource` to the end of `strDest`, where `D` is the lesser of `count` and the length of `strSource`. If appending those `D` characters will fit within `strDest` (whose size is given as `numberOfElements`) and still leave room for a null terminator, then those characters are appended, starting at the original terminating null of `strDest`, and a new terminating null is appended; otherwise, `strDest`[0] is set to the null character and the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md).  
  
 There is an exception to the above paragraph. If `count` is [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md) then as much of `strSource` as will fit is appended to `strDest` while still leaving room to append a terminating null.  
  
 For example,  
  
 `char dst[5];`  
  
 `strncpy_s(dst, _countof(dst), "12", 2);`  
  
 `strncat_s(dst, _countof(dst), "34567", 3);`  
  
 means that we are asking `strncat_s` to append three characters to two characters in a buffer five characters long; this would leave no space for the null terminator, hence `strncat_s` zeroes out the string and calls the invalid parameter handler.  
  
 If truncation behavior is needed, use `_TRUNCATE` or adjust the `size` parameter accordingly:  
  
 `strncat_s(dst, _countof(dst), "34567", _TRUNCATE);`  
  
 or  
  
 `strncat_s(dst, _countof(dst), "34567", _countof(dst)-strlen(dst)-1);`  
  
 In all cases, the resulting string is terminated with a null character. If copying takes place between strings that overlap, the behavior is undefined.  
  
 If `strSource` or `strDest` is `NULL`, or is `numberOfElements` is zero, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md) . If execution is allowed to continue, the function returns `EINVAL` without modifying its parameters.  
  
 `wcsncat_s` and `_mbsncat_s` are wide-character and multibyte-character versions of `strncat_s`. The string arguments and return value of `wcsncat_s` are wide-character strings; those of `_mbsncat_s` are multibyte-character strings. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
 The debug versions of these functions first fill the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../VS_visualcpp/_CrtSetDebugFillThreshold.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsncat_s`|`strncat_s`|`_mbsnbcat_s`|`wcsncat_s`|  
|`_tcsncat_s_l`|`_strncat_s_l`|`_mbsnbcat_s_l`|`_wcsncat_s_l`|  
  
 `_strncat_s_l` and `_wcsncat_s_l` have no locale dependence; they are only provided for `_tcsncat_s_l`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strncat_s`|<string.h>|  
|`wcsncat_s`|<string.h> or <wchar.h>|  
|`_mbsncat_s`, `_mbsncat_s_l`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_strncat_s.cpp  
// compile with: /MTd  
  
// These #defines enable secure template overloads  
// (see last part of Examples() below)  
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1   
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <crtdbg.h>  // For _CrtSetReportMode  
#include <errno.h>  
  
// This example uses a 10-byte destination buffer.  
  
errno_t strncat_s_tester( const char * initialDest,  
                          const char * src,  
                          int count )  
{  
   char dest[10];  
   strcpy_s( dest, _countof(dest), initialDest );  
  
   printf_s( "\n" );  
  
   if ( count == _TRUNCATE )  
      printf_s( "Appending '%s' to %d-byte buffer dest with truncation semantics\n",  
               src, _countof(dest) );  
   else  
      printf_s( "Appending %d chars of '%s' to %d-byte buffer dest\n",  
              count, src, _countof(dest) );  
  
   printf_s( "    old contents of dest: '%s'\n", dest );  
  
   errno_t err = strncat_s( dest, _countof(dest), src, count );  
  
   printf_s( "    new contents of dest: '%s'\n", dest );  
  
   return err;  
}  
  
void Examples()  
{  
   strncat_s_tester( "hi ", "there", 4 );  
   strncat_s_tester( "hi ", "there", 5 );  
   strncat_s_tester( "hi ", "there", 6 );  
  
   printf_s( "\nDestination buffer too small:\n" );  
   strncat_s_tester( "hello ", "there", 4 );  
  
   printf_s( "\nTruncation examples:\n" );  
  
   errno_t err = strncat_s_tester( "hello ", "there", _TRUNCATE );  
   printf_s( "    truncation %s occur\n", err == STRUNCATE ? "did"  
                                                       : "did not" );  
  
   err = strncat_s_tester( "hello ", "!", _TRUNCATE );  
   printf_s( "    truncation %s occur\n", err == STRUNCATE ? "did"  
                                                       : "did not" );  
  
   printf_s( "\nSecure template overload example:\n" );  
  
   char dest[10] = "cats and ";  
   strncat( dest, "dachshunds", 15 );  
   // With secure template overloads enabled (see #define  
   // at top of file), the preceding line is replaced by  
   //    strncat_s( dest, _countof(dest), "dachshunds", 15 );  
   // Instead of causing a buffer overrun, strncat_s invokes  
   // the invalid parameter handler.  
   // If secure template overloads were disabled, strncat would  
   // append "dachshunds" and overrun the dest buffer.  
   printf_s( "    new contents of dest: '%s'\n", dest );  
}  
  
void myInvalidParameterHandler(  
   const wchar_t* expression,  
   const wchar_t* function,   
   const wchar_t* file,   
   unsigned int line,   
   uintptr_t pReserved)  
{  
   wprintf_s(L"Invalid parameter handler invoked: %s\n", expression);  
}  
  
int main( void )  
{  
   _invalid_parameter_handler oldHandler, newHandler;  
  
   newHandler = myInvalidParameterHandler;  
   oldHandler = _set_invalid_parameter_handler(newHandler);  
   // Disable the message box for assertions.  
   _CrtSetReportMode(_CRT_ASSERT, 0);  
  
   Examples();  
}  
```  
  
 **Appending 4 chars of 'there' to 10-byte buffer dest**  
 **old contents of dest: 'hi '**  
 **new contents of dest: 'hi ther'**  
**Appending 5 chars of 'there' to 10-byte buffer dest**  
 **old contents of dest: 'hi '**  
 **new contents of dest: 'hi there'**  
**Appending 6 chars of 'there' to 10-byte buffer dest**  
 **old contents of dest: 'hi '**  
 **new contents of dest: 'hi there'**  
**Destination buffer too small:**  
**Appending 4 chars of 'there' to 10-byte buffer dest**  
 **old contents of dest: 'hello '**  
**Invalid parameter handler invoked: (L"Buffer is too small" && 0)**  
 **new contents of dest: ''**  
**Truncation examples:**  
**Appending 'there' to 10-byte buffer dest with truncation semantics**  
 **old contents of dest: 'hello '**  
 **new contents of dest: 'hello the'**  
 **truncation did occur**  
**Appending '!' to 10-byte buffer dest with truncation semantics**  
 **old contents of dest: 'hello '**  
 **new contents of dest: 'hello !'**  
 **truncation did not occur**  
**Secure template overload example:**  
**Invalid parameter handler invoked: (L"Buffer is too small" && 0)**  
 **new contents of dest: ''**   
## .NET Framework Equivalent  
 [System::String::Concat](https://msdn.microsoft.com/en-us/library/system.string.concat.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [_mbsnbcat, _mbsnbcat_l](../VS_visualcpp/_mbsnbcat--_mbsnbcat_l.md)   
 [strcat, wcscat, _mbscat](../VS_visualcpp/strcat--wcscat--_mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../VS_visualcpp/strcmp--wcscmp--_mbscmp.md)   
 [strcpy, wcscpy, _mbscpy](../VS_visualcpp/strcpy--wcscpy--_mbscpy.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../VS_visualcpp/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../VS_visualcpp/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../VS_visualcpp/_strset--_strset_l--_wcsset--_wcsset_l--_mbsset--_mbsset_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../VS_visualcpp/strspn--wcsspn--_mbsspn--_mbsspn_l.md)