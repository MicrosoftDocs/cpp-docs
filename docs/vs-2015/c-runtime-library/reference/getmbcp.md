---
title: "_getmbcp | Microsoft Docs"
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
  - "_getmbcp"
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
  - "api-ms-win-crt-locale-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_getmbcp"
  - "getmbcp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "code pages, determining current"
  - "_getmbcp function"
  - "getmbcp function"
ms.assetid: 2db202d4-5c3d-4871-a0b8-ceb0b79ee7bb
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getmbcp
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_getmbcp](https://docs.microsoft.com/cpp/c-runtime-library/reference/getmbcp).  
  
Retrieves the current code page.  
  
## Syntax  
  
```  
int _getmbcp( void );  
```  
  
## Return Value  
 Returns the current multibyte code page. A return value of 0 indicates that a single byte code page is in use.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getmbcp`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)





