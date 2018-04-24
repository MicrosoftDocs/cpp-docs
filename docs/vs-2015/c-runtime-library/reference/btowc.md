---
title: "btowc | Microsoft Docs"
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
  - "btowc"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "btowc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "btowc function"
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# btowc
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [btowc](https://docs.microsoft.com/cpp/c-runtime-library/reference/btowc).  
  
Determine whether an integer represents a valid single-byte character in the initial shift state.  
  
## Syntax  
  
```  
wint_t btowc(  
   int c  
);  
```  
  
#### Parameters  
 `c`  
 Integer to test.  
  
## Return Value  
 Returns the wide-character representation of the character if the integer represents a valid single-byte character in the initial shift state. Returns WEOF if the integer is EOF or is not a valid single-byte character in the initial shift state. The output of this function is affected by the current `LC_TYPE` locale.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`btowc`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)





