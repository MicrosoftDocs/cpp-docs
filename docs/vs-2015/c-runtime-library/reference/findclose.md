---
title: "_findclose | Microsoft Docs"
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
  - "_findclose"
api_location: 
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_findclose"
  - "findclose"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_findclose function"
  - "findclose function"
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _findclose
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_findclose](https://docs.microsoft.com/cpp/c-runtime-library/reference/findclose).  
  
Closes the specified search handle and releases associated resources.  
  
## Syntax  
  
```  
int _findclose(   
   intptr_t handle   
);  
```  
  
#### Parameters  
 `handle`  
 Search handle returned by a previous call to `_findfirst`.  
  
## Return Value  
 If successful, `_findclose` returns 0. Otherwise, it returns –1 and sets `errno` to `ENOENT`, indicating that no more matching files could be found.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_findclose`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.  
  
## See Also  
 [System Calls](../../c-runtime-library/system-calls.md)   
 [Filename Search Functions](../../c-runtime-library/filename-search-functions.md)





