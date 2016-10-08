---
title: "_findclose"
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
  - _findclose
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
  - api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
caps.latest.revision: 11
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
|`_findclose`|<io.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [System Calls](../VS_visualcpp/System-Calls.md)   
 [Filename Search Functions](../VS_visualcpp/Filename-Search-Functions.md)