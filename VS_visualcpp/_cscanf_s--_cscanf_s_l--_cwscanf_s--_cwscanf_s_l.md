---
title: "_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l"
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
  - _cwscanf_s_l
  - _cwscanf_s
  - _cscanf_s
  - _cscanf_s_l
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
apitype: DLLExport
ms.assetid: 9ccab74d-916f-42a6-93d8-920525efdf4b
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
# _cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l
Reads formatted data from the console. These more secure versions of [_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](../VS_visualcpp/_cscanf--_cscanf_l--_cwscanf--_cwscanf_l.md) have security enhancements, as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _cscanf_s(   
   const char *format [,  
   argument] ...   
);  
int _cscanf_s_l(   
   const char *format,  
   locale_t locale [,  
   argument] ...   
);  
int _cwscanf_s(   
   const wchar_t *format [,  
   argument] ...   
);  
int _cwscanf_s_l(   
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
```  
  
#### Parameters  
 `format`  
 Format-control string.  
  
 `argument`  
 Optional parameters.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 The number of fields that were successfully converted and assigned. The return value does not include fields that were read but not assigned. The return value is `EOF` for an attempt to read at end of file. This can occur when keyboard input is redirected at the operating-system command-line level. A return value of 0 means that no fields were assigned.  
  
 These functions validate their parameters. If `format` is a null pointer, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, these functions return `EOF` and `errno`is set to `EINVAL`.  
  
## Remarks  
 The `_cscanf_s` function reads data directly from the console into the locations given by `argument`. The [_getche](../VS_visualcpp/_getch--_getwch.md) function is used to read characters. Each optional parameter must be a pointer to a variable with a type that corresponds to a type specifier in `format`. The format controls the interpretation of the input fields and has the same form and function as the `format` parameter for the [scanf_s](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md) function. While `_cscanf_s` normally echoes the input character, it does not do so if the last call was to `_ungetch`.  
  
 Like other secure versions of functions in the`scanf` family,`_cscanf_s` and `_cswscanf_s` require size arguments for the type field characters `c`, `C`, `s`, `S`, and `[`. For more information, see [scanf Width Specification](../VS_visualcpp/scanf-Width-Specification.md).  
  
> [!NOTE]
>  The size parameter is of type `unsigned`, not `size_t`.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcscanf_s`|`_cscanf_s`|`_cscanf_s`|`_cwscanf_s`|  
|`_tcscanf_s_l`|`_cscanf_s_l`|`_cscanf_s_l`|`_cwscanf_s_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_cscanf_s`,`_cscanf_s_l`|<conio.h>|  
|`_cwscanf_s`, `_cwscanf_s_l`|<conio.h> or <wchar.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## Example  
  
```  
// crt_cscanf_s.c  
// compile with: /c  
/* This program prompts for a string  
 * and uses _cscanf_s to read in the response.  
 * Then _cscanf_s returns the number of items  
 * matched, and the program displays that number.  
 */  
  
#include <stdio.h>  
#include <conio.h>  
  
int main( void )  
{  
   int result, n[3];  
   int i;  
  
   result = _cscanf_s( "%i %i %i", &n[0], &n[1], &n[2] );  
   _cprintf_s( "\r\nYou entered " );  
   for( i=0; i<result; i++ )  
      _cprintf_s( "%i ", n[i] );  
   _cprintf_s( "\r\n" );  
}  
```  
  
## Input  
  
```  
1 2 3  
```  
  
## Output  
  
```  
You entered 1 2 3  
```  
  
## See Also  
 [Console and Port I/O](../VS_visualcpp/Console-and-Port-I-O.md)   
 [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../VS_visualcpp/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md)   
 [fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](../VS_visualcpp/fscanf_s--_fscanf_s_l--fwscanf_s--_fwscanf_s_l.md)   
 [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../VS_visualcpp/scanf_s--_scanf_s_l--wscanf_s--_wscanf_s_l.md)   
 [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../VS_visualcpp/sscanf_s--_sscanf_s_l--swscanf_s--_swscanf_s_l.md)