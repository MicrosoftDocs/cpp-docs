---
title: "_findclose | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_findclose"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_findclose", "findclose"]
dev_langs: ["C++"]
helpviewer_keywords: ["_findclose function", "findclose function"]
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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
 If successful, `_findclose` returns 0. Otherwise, it returns -1 and sets `errno` to `ENOENT`, indicating that no more matching files could be found.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_findclose`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [System Calls](../../c-runtime-library/system-calls.md)   
 [Filename Search Functions](../../c-runtime-library/filename-search-functions.md)