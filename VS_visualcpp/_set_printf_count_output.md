---
title: "_set_printf_count_output"
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
  - _set_printf_count_output
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
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
caps.latest.revision: 8
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
# _set_printf_count_output
Enable or disable support of the `%n` format in [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)-family functions.  
  
## Syntax  
  
```  
int _set_printf_count_output(  
   int enable  
);  
```  
  
#### Parameters  
 `enable`  
 A non-zero value to enable `%n` support, 0 to disable `%n` support.  
  
## Property Value/Return Value  
 The state of `%n` support before calling this function: non-zero if `%n` support was enabled, 0 if it was disabled.  
  
## Remarks  
 Because of security reasons, support for the `%n` format specifier is disabled by default in `printf` and all its variants. If `%n` is encountered in a `printf` format specification, the default behavior is to invoke the invalid parameter handler as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). Calling `_set_printf_count_output` with a non-zero argument will cause `printf`-family functions to interpret `%n` as described in [printf Type Field Characters](../VS_visualcpp/printf-Type-Field-Characters.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_printf_count_output`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_set_printf_count_output.c  
#include <stdio.h>  
  
int main()  
{  
   int e;  
   int i;  
   e = _set_printf_count_output( 1 );  
   printf( "%%n support was %sabled.\n",  
        e ? "en" : "dis" );  
   printf( "%%n support is now %sabled.\n",  
        _get_printf_count_output() ? "en" : "dis" );  
   printf( "12345%n6789\n", &i ); // %n format should set i to 5  
   printf( "i = %d\n", i );  
}  
```  
  
## Output  
  
```  
%n support was disabled.  
%n support is now enabled.  
123456789  
i = 5  
```  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [_get_printf_count_output](../VS_visualcpp/_get_printf_count_output.md)