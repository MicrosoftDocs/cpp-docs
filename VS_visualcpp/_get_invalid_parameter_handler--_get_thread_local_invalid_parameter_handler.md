---
title: "_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _get_invalid_parameter_handler
  - _get_thread_local_invalid_parameter_handler
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
  - api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
ms.assetid: a176da0e-38ca-4d99-92bb-b0e2b8072f53
caps.latest.revision: 3
manager: ghogen
translation.priority.mt: 
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
# _get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler
Gets the function that is called when the CRT detects an invalid argument.  
  
## Syntax  
  
```  
_invalid_parameter_handler _get_invalid_parameter_handler(void);  
_invalid_parameter_handler _get_thread_local_invalid_parameter_handler(void);  
```  
  
## Return Value  
 A pointer to the currently set invalid parameter handler function, or a null pointer if none has been set.  
  
## Remarks  
 The `_get_invalid_parameter_handler` function gets the currently set global invalid parameter handler. It returns a null pointer if no global invalid parameter handler was set. Similarly, the `_get_thread_local_invalid_parameter_handler` gets the current thread-local invalid parameter handler of the thread it is called on, or a null pointer if no handler was set. For information about how to set global and thread-local invalid parameter handlers, see [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../VS_visualcpp/_set_invalid_parameter_handler--_set_thread_local_invalid_parameter_handler.md).  
  
 The returned invalid parameter handler function pointer has the following type:  
  
```c  
typedef void (__cdecl* _invalid_parameter_handler)(  
    wchar_t const*,  
    wchar_t const*,  
    wchar_t const*,   
    unsigned int,  
    uintptr_t  
    );  
```  
  
 For details on the invalid parameter handler, see the prototype in [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../VS_visualcpp/_set_invalid_parameter_handler--_set_thread_local_invalid_parameter_handler.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_invalid_parameter_handler`, `_get_thread_local_invalid_parameter_handler`|C: <stdlib.h><br /><br /> C++: <cstdlib\> or <stdlib.h>|  
  
 The `_get_invalid_parameter_handler` and `_get_thread_local_invalid_parameter_handler` functions are Microsoft specific. For compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../VS_visualcpp/_set_invalid_parameter_handler--_set_thread_local_invalid_parameter_handler.md)   
 [Security-Enhanced Versions of CRT Functions](../VS_visualcpp/Security-Enhanced-Versions-of-CRT-Functions.md)