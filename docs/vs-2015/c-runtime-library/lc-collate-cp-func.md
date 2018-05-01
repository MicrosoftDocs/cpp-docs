---
title: "___lc_collate_cp_func | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "___lc_collate_cp_func"
api_location: 
  - "msvcr120.dll"
  - "msvcrt.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "___lc_collate_cp_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___lc_collate_cp_func"
ms.assetid: 46ccc084-7ac9-4e5d-9138-e12cb5845615
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ___lc_collate_cp_func
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [___lc_collate_cp_func](https://docs.microsoft.com/cpp/c-runtime-library/lc-collate-cp-func).  
  
Internal CRT function. Retrieves the current collation code page of the thread.  
  
## Syntax  
  
```cpp  
UINT ___lc_codepage_func(void);  
```  
  
## Return Value  
 The current collation code page of the thread.  
  
## Remarks  
 `___lc_collate_cp_func` is an internal CRT function that is used by other CRT functions to get the current collation code page from the thread local storage for CRT data. This information is also available by using the [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) function.  
  
 Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`___lc_collate_cp_func`|crt\src\setlocal.h|  
  
## See Also  
 [_get_current_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [_free_locale](../c-runtime-library/reference/free-locale.md)





