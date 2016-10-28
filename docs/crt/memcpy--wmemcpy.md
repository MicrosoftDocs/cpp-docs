---
title: "memcpy, wmemcpy"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "memcpy"
  - "wmemcpy"
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
  - "wmemcpy"
  - "memcpy"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wmemcpy function"
  - "memcpy function"
ms.assetid: 34abb90b-bffb-46dc-a2f3-a5e9940839d6
caps.latest.revision: 21
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
# memcpy, wmemcpy
Copies bytes between buffers. More secure versions of these functions are available; see [memcpy_s, wmemcpy_s](../crt/memcpy_s--wmemcpy_s.md).  
  
## Syntax  
  
```  
void *memcpy(  
   void *dest,  
   const void *src,  
   size_t count   
);  
wchar_t *wmemcpy(  
   wchar_t *dest,  
   const wchar_t *src,  
   size_t count  
);  
```  
  
#### Parameters  
 `dest`  
 New buffer.  
  
 `src`  
 Buffer to copy from.  
  
 `count`  
 Number of characters to copy.  
  
## Return Value  
 The value of `dest`.  
  
## Remarks  
 `memcpy` copies `count` bytes from `src` to `dest`; `wmemcpy` copies `count` wide characters (two bytes). If the source and destination overlap, the behavior of `memcpy` is undefined. Use `memmove` to handle overlapping regions.  
  
> [!IMPORTANT]
>  Make sure that the destination buffer is the same size or larger than the source buffer. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!IMPORTANT]
>  Because so many buffer overruns, and thus potential security exploits, have been traced to improper usage of `memcpy`, this function is listed among the “banned” functions by the Security Development Lifecycle (SDL).  You may observe that some VC++ library classes continue to use `memcpy`.  Furthermore, you may observe that the VC++ compiler optimizer sometimes emits calls to `memcpy`.  The Visual C++ product is developed in accordance with the SDL process, and thus usage of this banned function has been closely evaluated.  In the case of library use of it, the calls have been carefully scrutinized to ensure that buffer overruns will not be allowed through these calls.  In the case of the compiler, sometimes certain code patterns are recognized as identical to the pattern of `memcpy`, and are thus replaced with a call to the function.  In such cases, the use of `memcpy` is no more unsafe than the original instructions would have been; they have simply been optimized to a call to the performance-tuned `memcpy` function.  Just as the use of “safe” CRT functions doesn’t guarantee safety (they just make it harder to be unsafe), the use of “banned” functions doesn’t guarantee danger (they just require greater scrutiny to ensure safety).  
>   
>  Because `memcpy` usage by the VC++ compiler and libraries has been so carefully scrutinized, these calls are permitted within code that is otherwise compliant with SDL.  `memcpy` calls introduced in application source code are only compliant with the SDL when that use has been reviewed by security experts.  
  
 The `memcpy` and `wmemcpy` functions will only be deprecated if the constant `_CRT_SECURE_DEPRECATE_MEMORY` is defined prior to the inclusion statement in order for the functions to be deprecated, such as in the example below:  
  
```  
#define _CRT_SECURE_DEPRECATE_MEMORY  
#include <memory.h>  
```  
  
 or  
  
```  
#define _CRT_SECURE_DEPRECATE_MEMORY  
#include <wchar.h>  
```  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`memcpy`|\<memory.h> or \<string.h>|  
|`wmemcpy`|\<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 See [memmove](../crt/memmove--wmemmove.md) for a sample of how to use `memcpy`.  
  
## See Also  
 [Buffer Manipulation](../crt/buffer-manipulation.md)   
 [_memccpy](../crt/_memccpy.md)   
 [memchr, wmemchr](../crt/memchr--wmemchr.md)   
 [memcmp, wmemcmp](../crt/memcmp--wmemcmp.md)   
 [memmove, wmemmove](../crt/memmove--wmemmove.md)   
 [memset, wmemset](../crt/memset--wmemset.md)   
 [strcpy_s, wcscpy_s, _mbscpy_s](../crt/strcpy_s--wcscpy_s--_mbscpy_s.md)   
 [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../crt/strncpy_s--_strncpy_s_l--wcsncpy_s--_wcsncpy_s_l--_mbsncpy_s--_mbsncpy_s_l.md)