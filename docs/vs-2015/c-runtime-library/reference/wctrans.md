---
title: "wctrans | Microsoft Docs"
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
  - "wctrans"
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
  - "wctrans"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "character codes, wctrans"
  - "characters, codes"
  - "characters, converting"
  - "wctrans function"
ms.assetid: 215404bf-6d60-489c-9ae9-880e6b586162
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wctrans
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [wctrans](https://docs.microsoft.com/cpp/c-runtime-library/reference/wctrans).  
  
Determines a mapping from one set of character codes to another.  
  
## Syntax  
  
```  
wctrans_t wctrans(  
   const char *property   
);  
```  
  
#### Parameters  
 `property`  
 A string that specifies one of the valid transformations.  
  
## Return Value  
 If the `LC_CTYPE` category of the current locale does not define a mapping whose name matches the property string `property`, the function returns zero. Otherwise, it returns a nonzero value suitable for use as the second argument to a subsequent call to [towctrans](../../c-runtime-library/reference/towctrans.md).  
  
## Remarks  
 This function determines a mapping from one set of character codes to another.  
  
 The following pairs of calls have the same behavior in all locales, but it is possible to define additional mappings even in the "C" locale:  
  
|Function|Same As|  
|--------------|-------------|  
|`tolower(`  `c`  `)`|`towctrans(`  `c` `, wctrans("towlower" ) )`|  
|`towupper(`  `c`  `)`|`towctrans(`  `c` `, wctrans( "toupper" ) )`|  
  
## Requirements  
  
|Routine|Required Header|  
|-------------|---------------------|  
|`wctrans`|\<wctype.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_wctrans.cpp  
// compile with: /EHsc  
// This example determines a mapping from one set of character  
// codes to another.   
  
#include <wchar.h>  
#include <wctype.h>  
#include <stdio.h>  
#include <iostream>  
  
int main()   
{  
    wint_t c = 'a';  
    printf_s("%d\n",c);  
  
    wctrans_t i = wctrans("toupper");  
    printf_s("%d\n",i);  
  
    wctrans_t ii = wctrans("towlower");  
    printf_s("%d\n",ii);  
  
    wchar_t wc = towctrans(c, i);  
    printf_s("%d\n",wc);  
}  
```  
  
```Output  
97  
1  
0  
65  
```  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)





