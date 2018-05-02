---
title: "___lc_locale_name_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["___lc_locale_name_func"]
apilocation: ["msvcrt.dll", "msvcr110.dll", "msvcr100.dll", "msvcr90.dll", "msvcr120.dll", "msvcr80.dll", "msvcr110_clr0400.dll"]
apitype: "DLLExport"
f1_keywords: ["___lc_locale_name_func"]
dev_langs: ["C++"]
helpviewer_keywords: ["___lc_locale_name_func"]
ms.assetid: ef858308-872e-43de-95e0-9b1b4084343e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ___lc_locale_name_func
Internal CRT function. Retrieves the current locale name of the thread.  
  
## Syntax  
  
```cpp  
wchar_t** ___lc_locale_name_func(void);  
```  
  
## Return Value  
 A pointer to a string that contains the current locale name of the thread.  
  
## Remarks  
 `___lc_locale_name_func` is an internal CRT function that is used by other CRT functions to get the current locale name from the thread local storage for CRT data. This information is also available by using the [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) function or the [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) functions.  
  
 Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`___lc_locale_name_func`|crt\src\setlocal.h|  
  
## See Also  
 [_get_current_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [_free_locale](../c-runtime-library/reference/free-locale.md)