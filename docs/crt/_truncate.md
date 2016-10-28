---
title: "_TRUNCATE"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "_TRUNCATE"
  - "TRUNCATE"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "TRUNCATE constant"
  - "_TRUNCATE constant"
ms.assetid: ad093dbf-1aa5-4bd2-9268-efc68afd8434
caps.latest.revision: 6
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
# _TRUNCATE
Specifies string truncation behavior.  
  
## Syntax  
  
```  
#include <stdlib.h>  
```  
  
## Remarks  
 `_TRUNCATE` enables truncation behavior when passed as the `count` parameter to these functions:  
  
 [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../crt/strncpy_s--_strncpy_s_l--wcsncpy_s--_wcsncpy_s_l--_mbsncpy_s--_mbsncpy_s_l.md)  
  
 [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../crt/strncat_s--_strncat_s_l--wcsncat_s--_wcsncat_s_l--_mbsncat_s--_mbsncat_s_l.md)  
  
 [mbstowcs_s, _mbstowcs_s_l](../crt/mbstowcs_s--_mbstowcs_s_l.md)  
  
 [mbsrtowcs_s](../crt/mbsrtowcs_s.md)  
  
 [wcstombs_s, _wcstombs_s_l](../crt/wcstombs_s--_wcstombs_s_l.md)  
  
 [wcsrtombs_s](../crt/wcsrtombs_s.md)  
  
 [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](../crt/_snprintf_s--_snprintf_s_l--_snwprintf_s--_snwprintf_s_l.md)  
  
 [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../crt/vsnprintf_s--_vsnprintf_s--_vsnprintf_s_l--_vsnwprintf_s--_vsnwprintf_s_l.md)  
  
 If the destination buffer is too small to hold the entire string, the normal behavior of these functions is to treat it as an error situation (see [Parameter Validation](../crt/parameter-validation.md)). However, if string truncation is enabled by passing `_TRUNCATE`, these functions will copy only as much of the string as will fit, leaving the destination buffer null-terminated, and return successfully.  
  
 String truncation changes the return values of the affected functions. The following functions return 0 if no truncation occurs, or `STRUNCATE` if truncation does occur:  
  
 [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../crt/strncpy_s--_strncpy_s_l--wcsncpy_s--_wcsncpy_s_l--_mbsncpy_s--_mbsncpy_s_l.md)  
  
 [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../crt/strncat_s--_strncat_s_l--wcsncat_s--_wcsncat_s_l--_mbsncat_s--_mbsncat_s_l.md)  
  
 [wcstombs_s, _wcstombs_s_l](../crt/wcstombs_s--_wcstombs_s_l.md)  
  
 [mbstowcs_s, _mbstowcs_s_l](../crt/mbstowcs_s--_mbstowcs_s_l.md)  
  
 The following functions return the number of characters copied if no truncation occurs, or -1 if truncation does occur (matching the behavior of the original snprintf functions):  
  
 [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](../crt/_snprintf_s--_snprintf_s_l--_snwprintf_s--_snwprintf_s_l.md)  
  
 [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../crt/vsnprintf_s--_vsnprintf_s--_vsnprintf_s_l--_vsnwprintf_s--_vsnwprintf_s_l.md)  
  
## Example  
  
```  
// crt_truncate.c  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
   char src[] = "1234567890";  
   char dst[5];  
   errno_t err = strncpy_s(dst, _countof(dst), src, _TRUNCATE);  
   if ( err == STRUNCATE )  
      printf( "truncation occurred!\n" );  
   printf( "'%s'\n", dst );  
}  
```  
  
 **truncation occurred!**  
**'1234'**   
## See Also  
 [Global Constants](../crt/global-constants.md)