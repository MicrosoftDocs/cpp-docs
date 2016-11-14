---
title: "printf_p Positional Parameters | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_printf_p function, positional parameters"
  - "printf_p function, positional parameters"
ms.assetid: beb4fd85-a7aa-4665-9085-2c907a5b9ab0
caps.latest.revision: 17
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
# printf_p Positional Parameters
Positional parameters provide the ability to specify by number which of the arguments is to be substituted into a field in a format string. The following positional parameter `printf` functions are available:  
  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)  
 [_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)  
  
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)  
 [_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)  
  
 [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)  
 [_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)  
  
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)  
 [_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)  
  
 [vprintf, _vprintf_l, vwprintf, _vwprintf_l](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)  
 [_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l](../c-runtime-library/reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)  
  
 [vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)  
 [_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)  
  
 [vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, \__vswprintf_l](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)  
 [_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)  
  
## Specifying Positional Parameters  
  
##### Parameter Indexing  
 By default the positional functions behave identically to the non position ones, if no positional formatting is present. Positional parameters are specified using the format "`%m$x`", where `m` denotes a numeric ordinal number indicating the position of the parameter in the list of parameters, preceding the format string and `x` denotes the type field character type specified in the `printf` function. The parameters in the list are indexed starting at the value 1 for the first element in the list and so forth. For additional information concerning type field characters, see [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md).  
  
 For an example of this behavior:  
  
```  
_printf_p("%1$s %2$s", "November", "10");  
```  
  
 will print  
  
```  
November 10  
```  
  
 The order of the numbers used need not match the order of the arguments given. Thus the following is valid:  
  
```  
_printf_p("%2$s %1$s", "November", "10");  
```  
  
 will print  
  
```  
10 November  
```  
  
 Parameter may be used more than once while formatting, unlike in traditional format strings, so that  
  
```  
_printf_p("%1$d times %1$d is %2$d", 10, 100);  
```  
  
 will print  
  
```  
10 times 10 is 100  
```  
  
 However, all arguments must be used at least once somewhere in the format string.  
  
 The maximum number of positional parameters allowed in a format string is given by `_ARGMAX`.  
  
##### Width and Precision  
 When the * symbol is used to specify that the width or precision is to be determined from an argument, then the position of the width or precision value must appear immediately following the \* symbol. For example,  
  
```  
_printf_p("%1$*2$s","Hello", 10);  
```  
  
 or  
  
```  
_printf_p("%2$*1$s",10, "Hello");  
```  
  
##### Mixing positional and non positional arguments  
 Positional parameters may not be mixed with non-positional parameters in the same format string.  However, `printf_p` and related functions still support non-positional parameters in format strings containing no positional parameters.  
  
## Example  
  
```  
// positional_args.c  
// Positional arguments allow the specification of the order  
// in which arguments are consumed in a formatting string.  
  
#include <stdio.h>  
  
int main(int argc, char *argv[])  
{  
    int     i = 1,  
            j = 2,  
            k = 3;  
    double  x = 0.1,  
            y = 0.2,  
            z = 0.3;  
    char    *s1 = "abc",  
            *s2 = "def",  
            *s3 = "ghi";  
  
    // If positional arguments are unspecified,  
    // normal input order is used.  
    _printf_p("%d %d %d\n", i, j, k);  
  
    // Positional args are numbers indicating the  
    // argument enclosed in curly braces.  
    _printf_p("%3$d %1$d %2$d\n", i, j, k);  
  
    // The same positional argument may be reused.  
    _printf_p("%1$d %2$d %1$d\n", i, j);  
  
    _printf_p("%1$s %2$s %3$s\n", s1, s2, s3);  
  
    _printf_p("%3$s %1$s %2$s\n", s1, s2, s3);  
}  
```  
  
```Output  
1 2 3  
3 1 2  
1 2 1  
abc def ghi  
ghi abc def  
```  
  
## See Also  
 [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md)   
 [printf Width Specification](../c-runtime-library/printf-width-specification.md)   
 [Precision Specification](../c-runtime-library/precision-specification.md)