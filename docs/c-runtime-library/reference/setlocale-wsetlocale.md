---
title: "setlocale, _wsetlocale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wsetlocale"
  - "setlocale"
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
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_wsetlocale"
  - "_tsetlocale"
  - "setlocale"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wsetlocale function"
  - "setlocale function"
  - "tsetlocale function"
  - "locales, defining"
  - "_tsetlocale function"
  - "defining locales"
  - "_wsetlocale function"
ms.assetid: 3ffb684e-5990-4202-9553-b5339af9520d
caps.latest.revision: 31
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
# setlocale, _wsetlocale
Sets or retrieves the run-time locale.  
  
## Syntax  
  
```  
char *setlocale(  
   int category,  
   const char *locale   
);  
wchar_t *_wsetlocale(  
   int category,  
   const wchar_t *locale   
);  
```  
  
#### Parameters  
 `category`  
 Category affected by locale.  
  
 `locale`  
 Locale specifier.  
  
## Return Value  
 If a valid `locale` and `category` are given, returns a pointer to the string associated with the specified `locale` and `category`. If the `locale` or `category` is not valid, returns a null pointer and the current locale settings of the program are not changed.  
  
 For example, the call  
  
 `setlocale( LC_ALL, "en-US" );`  
  
 sets all categories, returning only the string  
  
 `en-US`  
  
 You can copy the string returned by `setlocale` to restore that part of the program's locale information. Global or thread local storage is used for the string returned by `setlocale`. Later calls to `setlocale` overwrite the string, which invalidates string pointers returned by earlier calls.  
  
## Remarks  
 Use the `setlocale` function to set, change, or query some or all of the current program locale information specified by `locale` and `category`. `locale` refers to the locality (country/region and language) for which you can customize certain aspects of your program. Some locale-dependent categories include the formatting of dates and the display format for monetary values. If you set `locale` to the default string for a language that has multiple forms supported on your computer, you should check the `setlocale` return value to see which language is in effect. For example, if you set `locale` to "chinese" the return value could be either "chinese-simplified" or "chinese-traditional".  
  
 `_wsetlocale` is a wide-character version of `setlocale`; the `locale` argument and return value of `_wsetlocale` are wide-character strings. `_wsetlocale` and `setlocale` behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tsetlocale`|`setlocale`|`setlocale`|`_wsetlocale`|  
  
 The `category` argument specifies the parts of a program's locale information that are affected. The macros used for `category` and the parts of the program they affect are as follows:  
  
 `LC_ALL`  
 All categories in the following list.  
  
 `LC_COLLATE`  
 The `strcoll`, `_stricoll`, `wcscoll`, `_wcsicoll`, `strxfrm`, `_strncoll`, `_strnicoll`, `_wcsncoll`, `_wcsnicoll`, and `wcsxfrm` functions.  
  
 `LC_CTYPE`  
 The character-handling functions (except `isdigit`, `isxdigit`, `mbstowcs`, and `mbtowc`, which are unaffected).  
  
 `LC_MONETARY`  
 Monetary-formatting information returned by the `localeconv` function.  
  
 `LC_NUMERIC`  
 Decimal-point character for the formatted output routines (such as `printf`), for the data-conversion routines, and for the non-monetary formatting information returned by `localeconv`. In addition to the decimal-point character, `LC_NUMERIC` also sets the thousands separator and the grouping control string returned by [localeconv](../../c-runtime-library/reference/localeconv.md).  
  
 `LC_TIME`  
 The `strftime` and `wcsftime` functions.  
  
 This function validates the category parameter. If the category parameter is not one of the values given in the previous table, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function sets `errno` to `EINVAL` and returns `NULL`.  
  
 The `locale` argument is a pointer to a string that specifies the locale. For information about the format of the `locale` argument, see [Locale Names, Languages, and Country/Region Strings](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). If `locale` points to an empty string, the locale is the implementation-defined native environment. A value of `C` specifies the minimal ANSI conforming environment for C translation. The `C` locale assumes that all `char` data types are 1 byte and that their value is always less than 256.  
  
 At program startup, the equivalent of the following statement is executed:  
  
 `setlocale( LC_ALL, "C" );`  
  
 The `locale` argument can take a locale name, a language string, a language string and country/region code, a code page, or a language string, country/region code, and code page. The set of available locale names, languages, country/region codes, and code pages includes all those supported by the Windows NLS API except code pages that require more than two bytes per character, such as UTF-7 and UTF-8. If you provide a code page value of UTF-7 or UTF-8, `setlocale` will fail, returning NULL. The set of locale names supported by `setlocale` are described in [Locale Names, Languages, and Country/Region Strings](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). The set of language and country/region strings supported by `setlocale` are listed in [Language Strings](../../c-runtime-library/language-strings.md) and [Country/Region Strings](../../c-runtime-library/country-region-strings.md). We recommend the locale name form for performance and for maintainability of locale strings embedded in code or serialized to storage. The locale name strings are less likely to be changed by an operating system update than the language and country/region name form.  
  
 A null pointer that's passed as the `locale` argument tells `setlocale` to query instead of to set the international environment. If the `locale` argument is a null pointer, the program's current locale setting is not changed. Instead, `setlocale` returns a pointer to the string that's associated with the `category` of the thread's current locale. If the `category` argument is `LC_ALL`, the function returns a string that indicates the current setting of each category, separated by semicolons. For example, the sequence of calls  
  
 `// Set all categories and return "en-US"`  
  
 `setlocale(LC_ALL, "en-US");`  
  
 `// Set only the LC_MONETARY category and return "fr-FR"`  
  
 `setlocale(LC_MONETARY, "fr-FR");`  
  
 `printf("%s\n", setlocale(LC_ALL, NULL));`  
  
 returns  
  
 `LC_COLLATE=en-US;LC_CTYPE=en-US;LC_MONETARY=fr-FR;LC_NUMERIC=en-US;LC_TIME=en-US`  
  
 which is the string that's associated with the `LC_ALL` category.  
  
 The following examples pertain to the `LC_ALL` category. Either of the strings ".OCP" and ".ACP" can be used instead of a code page number to specify use of the user-default OEM code page and user-default ANSI code page, respectively.  
  
 `setlocale( LC_ALL, "" );`  
 Sets the locale to the default, which is the user-default ANSI code page obtained from the operating system.  
  
 `setlocale( LC_ALL, ".OCP" );`  
 Explicitly sets the locale to the current OEM code page obtained from the operating system.  
  
 `setlocale( LC_ALL, ".ACP" );`  
 Sets the locale to the ANSI code page obtained from the operating system.  
  
 `setlocale( LC_ALL, "<localename>" );`  
 Sets the locale to the locale name that's indicated by *\<localename>*.  
  
 `setlocale( LC_ALL, "<language>_<country>" );`  
 Sets the locale to the language and country/region indicated by *\<language>* and *\<country>*, together with the default code page obtained from the host operating system.  
  
 `setlocale( LC_ALL, "<language>_<country>.<code_page>" );`  
 Sets the locale to the language, country/region, and code page indicated by the *\<language>*, *\<country>*, and *<code_page>* strings. You can use various combinations of language, country/region, and code page. For example, this call sets the locale to French Canada with code page 1252:  
  
 `setlocale( LC_ALL, "French_Canada.1252" );`  
  
 This call sets the locale to French Canada with the default ANSI code page:  
  
 `setlocale( LC_ALL, "French_Canada.ACP" );`  
  
 This call sets the locale to French Canada with the default OEM code page:  
  
 `setlocale( LC_ALL, "French_Canada.OCP" );`  
  
 `setlocale( LC_ALL, "<language>" );`  
 Sets the locale to the language that's indicated by *\<language>*, and uses the default country/region for the specified language and the user-default ANSI code page for that country/region as obtained from the host operating system. For example, the following calls to `setlocale` are functionally equivalent:  
  
 `setlocale( LC_ALL, "en-US" );`  
  
 `setlocale( LC_ALL, "English" );`  
  
 `setlocale( LC_ALL, "English_United States.1252" );`  
  
 We recommend the first form for performance and maintainability.  
  
 `setlocale( LC_ALL, ".<code_page>" );`  
 Sets the code page to the value indicated by *<code_page>*, together with the default country/region and language (as defined by the host operating system) for the specified code page.  
  
 The category must be either `LC_ALL` or `LC_CTYPE` to effect a change of code page. For example, if the default country/region and language of the host operating system are "United States" and "English," the following two calls to `setlocale` are functionally equivalent:  
  
 `setlocale( LC_ALL, ".1252" );`  
  
 `setlocale( LC_ALL, "English_United States.1252");`  
  
 For more information, see the [setlocale](../../preprocessor/setlocale.md) pragma directive in the [C/C++ Preprocessor Reference](../../preprocessor/c-cpp-preprocessor-reference.md).  
  
 The function [_configthreadlocale](../../c-runtime-library/reference/configthreadlocale.md) is used to control whether `setlocale` affects the locale of all threads in a program or only the locale of the calling thread.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`setlocale`|\<locale.h>|  
|`_wsetlocale`|\<locale.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```css  
// crt_setlocale.c  
//   
// This program demonstrates the use of setlocale when  
// using two independent threads.  
//  
  
#include <locale.h>  
#include <process.h>  
#include <windows.h>  
#include <stdio.h>  
#include <time.h>  
  
#define BUFF_SIZE 100  
  
// Retrieve the date in the current  
// locale's format.  
int get_date(unsigned char* str)  
{  
    __time64_t ltime;  
    struct tm  thetime;  
  
    // Retrieve the current time  
    _time64(&ltime);  
    _gmtime64_s(&thetime, &ltime);  
  
    // Format the current time structure into a string  
    // "%#x" is the long date representation in the  
    // current locale  
    if (!strftime((char *)str, BUFF_SIZE, "%#x",   
                  (const struct tm *)&thetime))  
    {  
        printf("strftime failed!\n");  
        return -1;  
    }  
    return 0;  
}  
  
// This thread sets its locale to the argument  
// and prints the date.  
uintptr_t __stdcall SecondThreadFunc( void* pArguments )  
{  
    unsigned char str[BUFF_SIZE];  
    char * locale = (char *)pArguments;  
  
    // Set the thread locale  
    printf("The thread locale is now set to %s.\n",  
           setlocale(LC_ALL, locale));  
  
    // Retrieve the date string from the helper function  
    if (get_date(str) == 0)  
    {  
        printf("The date in %s locale is: '%s'\n", locale, str);  
    }  
  
    _endthreadex( 0 );  
    return 0;  
}   
  
// The main thread sets the locale to English   
// and then spawns a second thread (above) and prints the date.  
int main()  
{   
    HANDLE          hThread;  
    unsigned        threadID;  
    unsigned char   str[BUFF_SIZE];  
  
    // Configure per-thread locale to cause all subsequently created   
    // threads to have their own locale.  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  
  
    // Set the locale of the main thread to US English.  
    printf("The thread locale is now set to %s.\n",  
           setlocale(LC_ALL, "en-US"));  
  
    // Create the second thread with a German locale.  
    // Our thread function takes an argument of the locale to use.  
    hThread = (HANDLE)_beginthreadex( NULL, 0, &SecondThreadFunc,  
                                      "de-DE", 0, &threadID );  
  
    if (get_date(str) == 0)  
    {  
        // Retrieve the date string from the helper function  
        printf("The date in en-US locale is: '%s'\n\n", str);  
    }  
  
    // Wait for the created thread to finish.  
    WaitForSingleObject( hThread, INFINITE );  
  
    // Destroy the thread object.  
    CloseHandle( hThread );  
}  
```  
  
```Output  
The thread locale is now set to en-US.  
The time in en-US locale is: 'Wednesday, May 12, 2004'  
  
The thread locale is now set to de-DE.  
The time in de-DE locale is: 'Mittwoch, 12. Mai 2004'  
```  
  
## .NET Framework Equivalent  
 [System::Globalization::CultureInfo Class](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx)  
  
## See Also  
 [Locale Names, Languages, and Country/Region Strings](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [_configthreadlocale](../../c-runtime-library/reference/configthreadlocale.md)   
 [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [strcoll Functions](../../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)