---
title: "___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "___mb_cur_max_l_func"
  - "__p___mb_cur_max"
  - "___mb_cur_max_func"
  - "__mb_cur_max"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "___mb_cur_max_func"
  - "___mb_cur_max_l_func"
  - "__p___mb_cur_max"
  - "__mb_cur_max"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__mb_cur_max"
  - "___mb_cur_max_func"
  - "___mb_cur_max_l_func"
  - "__p___mb_cur_max"
ms.assetid: 60d36108-1ca7-45a6-8ce7-68a91f13e3a1
caps.latest.revision: 7
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
# ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max
Internal CRT function. Retrieves the maximum number of bytes in a multibyte character for the current or specified locale.  
  
## Syntax  
  
```cpp  
int ___mb_cur_max_func(void);  
int ___mb_cur_max_l_func(_locale_t locale);  
int * __p___mb_cur_max(void);  
#define __mb_cur_max (___mb_cur_max_func())  
```  
  
#### Parameters  
 locale  
 The locale structure to retrieve the result from. If this value is null, the current thread locale is used.  
  
## Return Value  
 The maximum number of bytes in a multibyte character for the current thread locale or the specified locale.  
  
## Remarks  
 This is an internal function that the CRT uses to retrieve the current value of the [MB_CUR_MAX](../c-runtime-library/mb-cur-max.md) macro from thread local storage. We recommend that you use the `MB_CUR_MAX` macro in your code for portability.  
  
 The `__mb_cur_max` macro is a convenient way to call the `___mb_cur_max_func()` function. The `__p___mb_cur_max` function is defined for compatibility with Visual C++ 5.0 and earlier versions.  
  
 Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`___mb_cur_max_func`, `___mb_cur_max_l_func`, `__p___mb_cur_max`|\<ctype.h>, \<stdlib.h>|  
  
## See Also  
 [MB_CUR_MAX](../c-runtime-library/mb-cur-max.md)