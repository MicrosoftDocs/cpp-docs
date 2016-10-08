---
title: "strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l"
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
  - strncat
  - _strncat_l
  - _mbsncat
  - _mbsncat_l
  - wcsncat
  - wcsncat_l
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
ms.assetid: de67363b-68c6-4ca5-91e3-478610ad8159
caps.latest.revision: 27
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
# strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l
Appends characters of a string. More secure versions of these functions are available, see [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../VS_visualcpp/strncat_s--_strncat_s_l--wcsncat_s--_wcsncat_s_l--_mbsncat_s--_mbsncat_s_l.md) .  
  
> [!IMPORTANT]
>  `_mbsncat` and `_mbsncat_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *strncat(  
   char *strDest,  
   const char *strSource,  
   size_t count   
);  
wchar_t *wcsncat(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count   
);  
unsigned char *_mbsncat(  
   unsigned char *strDest,  
   const unsigned char *strSource,  
   size_t count  
);  
unsigned char *_mbsncat_l(  
   unsigned char *strDest,  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
char *strncat(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
wchar_t *wcsncat(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
unsigned char *_mbsncat(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count  
); // C++ only  
template <size_t size>  
unsigned char *_mbsncat_l(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `strDest`  
 Null-terminated destination string.  
  
 `strSource`  
 Null-terminated source string.  
  
 `count`  
 Number of characters to append.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Returns a pointer to the destination string. No return value is reserved to indicate an error.  
  
## Remarks  
 The `strncat` function appends, at most, the first `count` characters of `strSource` to `strDest`. The initial character of `strSource` overwrites the terminating null character of `strDest`. If a null character appears in `strSource` before `count` characters are appended, `strncat` appends all characters from `strSource`, up to the null character. If `count` is greater than the length of `strSource`, the length of `strSource` is used in place of `count`. The all cases, the resulting string is terminated with a null character. If copying takes place between strings that overlap, the behavior is undefined.  
  
> [!IMPORTANT]
>  `strncat` does not check for sufficient space in `strDest`; it is therefore a potential cause of buffer overruns. Keep in mind that `count` limits the number of characters appended; it is not a limit on the size of `strDest`. See the example below. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 `wcsncat` and `_mbsncat` are wide-character and multibyte-character versions of `strncat`. The string arguments and return value of `wcsncat` are wide-character strings; those of `_mbsncat` are multibyte-character strings. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 In C++, these functions have template overloads. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
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
|`strncat`|<string.h>|  
|`wcsncat`|<string.h> or <wchar.h>|  
|`_mbsncat`|<mbstring.h>|  
|`_mbsncat_l`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_strncat.c  
// Use strcat and strncat to append to a string.  
#include <stdlib.h>  
  
#define MAXSTRINGLEN 39  
  
char string[MAXSTRINGLEN+1];  
// or char *string = malloc(MAXSTRINGLEN+1);  
  
void BadAppend( char suffix[], int n )  
{  
   strncat( string, suffix, n );  
}  
  
void GoodAppend( char suffix[], size_t n )  
{  
   strncat( string, suffix, __min( n, MAXSTRINGLEN-strlen(string)) );  
}  
  
int main( void )  
{  
   string[0] = '\0';  
   printf( "string can hold up to %d characters\n", MAXSTRINGLEN );  
  
   strcpy( string, "This is the initial string!" );  
   // concatenate up to 20 characters...  
   BadAppend( "Extra text to add to the string...", 20 );  
   printf( "After BadAppend :  %s (%d chars)\n", string, strlen(string) );  
  
   strcpy( string, "This is the initial string!" );  
   // concatenate up to 20 characters...  
   GoodAppend( "Extra text to add to the string...", 20 );  
   printf( "After GoodAppend:  %s (%d chars)\n", string, strlen(string) );  
}  
```  
  
## Output  
  
```  
string can hold up to 39 characters  
After BadAppend :  This is the initial string!Extra text to add to (47 chars)  
After GoodAppend:  This is the initial string!Extra text t (39 chars)  
```  
  
 Note that `BadAppend` caused a buffer overrun.  
  
## .NET Framework Equivalent  
 [System::String::Concat](https://msdn.microsoft.com/en-us/library/system.string.concat.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
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
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)