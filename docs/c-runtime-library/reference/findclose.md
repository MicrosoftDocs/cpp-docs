---
title: "_findclose | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_findclose"
apilocation: 
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
apitype: "DLLExport"
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
caps.latest.revision: 11
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
# _findclose
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
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [System Calls](../../c-runtime-library/system-calls.md)   
 [Filename Search Functions](../../c-runtime-library/filename-search-functions.md)