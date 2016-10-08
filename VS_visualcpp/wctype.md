---
title: "wctype"
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
  - wctype
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
apitype: DLLExport
ms.assetid: 14aded12-4087-4123-bc48-db4e10999223
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
 If the `LC_CTYPE` category of the current locale does not define a classification rule whose name matches the property string `property`, the function returns zero. Otherwise, it returns a nonzero value suitable for use as the second argument to a subsequent call to [towctrans](../VS_visualcpp/towctrans.md).  
  
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
|`wctype`|<wctype.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md)