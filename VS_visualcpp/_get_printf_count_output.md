---
title: "_get_printf_count_output"
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
  - _get_printf_count_output
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
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
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
# _get_printf_count_output
Indicates whether [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)-family functions support the `%n` format.  
  
## Syntax  
  
```  
int _get_printf_count_output();  
```  
  
## Return Value  
 Non-zero if `%n` is supported, 0 if `%n` is not supported.  
  
## Remarks  
 If `%n` is not supported (the default), encountering `%n` in the format string of any of the `printf` functions will invoke the invalid parameter handler as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If `%n` support is enabled (see [_set_printf_count_output](../VS_visualcpp/_set_printf_count_output.md)) then `%n` will behave as described in [printf Type Field Characters](../VS_visualcpp/printf-Type-Field-Characters.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_printf_count_output`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_set_printf_count_output](../VS_visualcpp/_set_printf_count_output.md).  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).