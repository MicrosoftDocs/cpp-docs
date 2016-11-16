---
title: "wctype | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wctype"
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
apitype: "DLLExport"
f1_keywords: 
  - "wctype"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wctype function"
  - "wide characters"
ms.assetid: 14aded12-4087-4123-bc48-db4e10999223
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
# wctype
Determines a classification rule for wide-character codes.  
  
## Syntax  
  
```  
wctype_t wctype(  
   const char * property   
);  
```  
  
#### Parameters  
 `property`  
 Property string.  
  
## Return Value  
 If the `LC_CTYPE` category of the current locale does not define a classification rule whose name matches the property string `property`, the function returns zero. Otherwise, it returns a nonzero value suitable for use as the second argument to a subsequent call to [towctrans](../../c-runtime-library/reference/towctrans.md).  
  
## Remarks  
 The function determines a classification rule for wide-character codes. The following pairs of calls have the same behavior in all locales (but an implementation can define additional classification rules even in the "C" locale):  
  
|Function|Same as|  
|--------------|-------------|  
|`iswalnum(`  `c`  `)`|`iswctype(`  `c` `, wctype( "alnum" ) )`|  
|`iswalpha(`  `c`  `)`|`iswctype(`  `c` `, wctype( "alpha" ) )`|  
|`iswcntrl(`  `c`  `)`|`iswctype(`  `c` `, wctype( "cntrl" ) )`|  
|`iswdigit(`  `c`  `)`|`iswctype(`  `c` `, wctype( "digit" ) )`|  
|`iswgraph(`  `c`  `)`|`iswctype(`  `c` `, wctype( "graph" ) )`|  
|`iswlower(`  `c`  `)`|`iswctype(`  `c` `, wctype( "lower" ) )`|  
|`iswprint(`  `c`  `)`|`iswctype(`  `c` `, wctype( "print" ) )`|  
|`iswpunct(`  `c`  `)`|`iswctype(`  `c` `, wctype( "punct" ) )`|  
|`iswspace(`  `c`  `)`|`iswctype(`  `c` `, wctype( "space" ) )`|  
|`iswupper(`  `c`  `)`|`iswctype(`  `c` `, wctype( "upper" ) )`|  
|`iswxdigit(`  `c`  `)`|`iswctype(`  `c` `, wctype( "xdigit" ) )`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`wctype`|\<wctype.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)