---
title: "_strdec, _wcsdec, _mbsdec, _mbsdec_l"
ms.custom: na
ms.date: 10/04/2016
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
  - _wcsdec
  - _strdec
  - _mbsdec
  - _mbsdec_l
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
apitype: DLLExport
ms.assetid: ae37c223-800f-48a9-ae8e-38c8d20af2dd
caps.latest.revision: 24
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
# _strdec, _wcsdec, _mbsdec, _mbsdec_l
Moves a string pointer back one character.  
  
> [!IMPORTANT]
>  `mbsdec` and `mbsdec_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
unsigned char *_strdec(  
   const unsigned char *start,  
   const unsigned char *current   
);  
unsigned wchar_t *_wcsdec(  
   const unsigned wchar_t *start,  
   const unsigned wchar_t *current   
);  
unsigned char *_mbsdec(  
   const unsigned char *start,  
   const unsigned char *current   
);  
unsigned char *_mbsdec_l(  
   const unsigned char *start,  
   const unsigned char *current,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `start`  
 Pointer to any character (or for `_mbsdec` and _`mbsdec_l`, the first byte of any multibyte character) in the source string; `start` must precede `current` in the source string.  
  
 `current`  
 Pointer to any character (or for `_mbsdec` and _`mbsdec_l`, the first byte of any multibyte character) in the source string; `current` must follow `start` in the source string.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 `_mbsdec`, _`mbsdec_l`, `_strdec`, and `_wcsdec` each return a pointer to the character that immediately precedes `current`; `_mbsdec` returns `NULL` if the value of `start` is greater than or equal to that of `current`. `_tcsdec` maps to one of these functions and its return value depends on the mapping.  
  
## Remarks  
 The `_mbsdec` and `_mbsdec_l` functions return a pointer to the first byte of the multibyte character that immediately precedes `current` in the string that contains `start`.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information.  `_mbsdec` recognizes multibyte-character sequences according to the locale that's currently in use, while `_mbsdec_l` is identical except that it instead uses the locale parameter that's passed in. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 If `start` or `current` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function returns `EINVAL` and sets `errno` to `EINVAL`.  
  
> [!IMPORTANT]
>  These functions might be vulnerable to buffer overrun threats. Buffer overruns can be used for system attacks because they can cause an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsdec`|`_strdec`|`_mbsdec`|`_wcsdec`|  
  
 `_strdec` and `_wcsdec` are single-byte-character and wide-character versions of `_mbsdec` and `_mbsdec_l`. `_strdec` and `_wcsdec` are provided only for this mapping and should not be used otherwise.  
  
 For more information, see [Using Generic-Text Mappings](../VS_visualcpp/Using-Generic-Text-Mappings.md) and [Generic-Text Mappings](../VS_visualcpp/Generic-Text-Mappings.md).  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_mbsdec`|<mbstring.h>|<mbctype.h>|  
|`_mbsdec_l`|<mbstring.h>|<mbctype.h>|  
|`_strdec`|<tchar.h>||  
|`_wcsdec`|<tchar.h>||  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
 The following example shows a use of `_tcsdec`.  
  
```  
  
      #include <iostream>  
#include <tchar.h>  
using namespace std;  
  
int main()  
{  
   const TCHAR *str = _T("12345");  
   cout << "str: " << str << endl;  
  
   const TCHAR *str2;  
   str2 = str + 2;  
   cout << "str2: " << str2 << endl;  
  
   TCHAR *answer;  
   answer = _tcsdec( str, str2 );  
   cout << "answer: " << answer << endl;  
  
   return (0);   
}  
  
```  
  
 The following example shows a use of `_mbsdec`.  
  
```  
#include <iostream>  
#include <mbstring.h>  
using namespace std;  
  
int main()   
{   
   char *str = "12345";  
   cout << "str: " << str << endl;  
  
   char *str2;  
   str2 = str + 2;   
   cout << "str2: " << str2 << endl;  
  
   unsigned char *answer;  
   answer = _mbsdec( reinterpret_cast<unsigned char *>( str ), reinterpret_cast<unsigned char *>( str2 ));  
  
   cout << "answer: " << answer << endl;  
  
   return (0);   
}  
  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [_strinc, _wcsinc, _mbsinc, _mbsinc_l](../VS_visualcpp/_strinc--_wcsinc--_mbsinc--_mbsinc_l.md)   
 [_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](../VS_visualcpp/_strnextc--_wcsnextc--_mbsnextc--_mbsnextc_l.md)   
 [_strninc, _wcsninc, _mbsninc, _mbsninc_l](../VS_visualcpp/_strninc--_wcsninc--_mbsninc--_mbsninc_l.md)