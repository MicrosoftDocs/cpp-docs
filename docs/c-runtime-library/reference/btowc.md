---
title: "btowc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "btowc"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "btowc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "btowc function"
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
caps.latest.revision: 10
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
# btowc
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
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)