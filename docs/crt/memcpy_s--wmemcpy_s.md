---
title: "memcpy_s, wmemcpy_s"
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
  - "memcpy_s"
  - "wmemcpy_s"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wmemcpy_s"
  - "memcpy_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "memcpy_s function"
  - "wmemcpy_s function"
ms.assetid: 5504e20a-83d9-4063-91fc-3f55f7dabe99
caps.latest.revision: 25
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# memcpy_s, wmemcpy_s
Copies bytes between buffers. These are versions of [memcpy, wmemcpy](../crt/memcpy--wmemcpy.md) with security enhancements as described in [Security Features in the CRT](../crt/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t memcpy_s(  
   void *dest,  
   size_t destSize,  
   const void *src,  
   size_t count   
);  
errno_t wmemcpy_s(  
   wchar_t *dest,  
   size_t destSize,  
   const wchar_t *src,  
   size_t count  
);  
```  
  
#### Parameters  
 `dest`  
 New buffer.  
  
 `destSize`  
 Size of the destination buffer, in bytes for memcpy_s and wide characters (wchar_t) for wmemcpy_s.  
  
 `src`  
 Buffer to copy from.  
  
 `count`  
 Number of characters to copy.  
  
## Return Value  
 Zero if successful; an error code on failure.  
  
### Error Conditions  
  
|`dest`|`destSize`|`src`|Return value|Contents of `dest`|  
|------------|----------------|-----------|------------------|------------------------|  
|`NULL`|any|any|`EINVAL`|not modified|  
|any|any|`NULL`|`EINVAL`|`dest` is zeroed out|  
|any|< `count`|any|`ERANGE`|`dest` is zeroed out|  
  
## Remarks  
 `memcpy_s` copies `count` bytes from `src` to `dest`; `wmemcpy_s` copies `count` wide characters (two bytes). If the source and destination overlap, the behavior of `memcpy_s` is undefined. Use `memmove_s` to handle overlapping regions.  
  
 These functions validate their parameters. If `dest` or `src` is a null pointer, or `destSize` is smaller than `count`, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, these functions return `EINVAL` and set `errno` to `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`memcpy_s`|\<memory.h> or \<string.h>|  
|`wmemcpy_s`|\<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_memcpy_s.c  
// Copy memory in a more secure way.  
  
#include <memory.h>  
#include <stdio.h>  
  
int main()  
{  
   int a1[10], a2[100], i;  
   errno_t err;  
  
   // Populate a2 with squares of integers  
   for (i = 0; i < 100; i++)  
   {  
      a2[i] = i*i;  
   }  
  
   // Tell memcpy_s to copy 10 ints (40 bytes), giving  
   // the size of the a1 array (also 40 bytes).  
   err = memcpy_s(a1, sizeof(a1), a2, 10 * sizeof (int) );      
   if (err)  
   {  
      printf("Error executing memcpy_s.\n");  
   }  
   else  
   {  
     for (i = 0; i < 10; i++)  
       printf("%d ", a1[i]);  
   }  
   printf("\n");  
}  
```  
  
 **0 1 4 9 16 25 36 49 64 81**    
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Buffer Manipulation](../crt/buffer-manipulation.md)   
 [_memccpy](../crt/_memccpy.md)   
 [memchr, wmemchr](../crt/memchr--wmemchr.md)   
 [memcmp, wmemcmp](../crt/memcmp--wmemcmp.md)   
 [memmove, wmemmove](../crt/memmove--wmemmove.md)   
 [memset, wmemset](../crt/memset--wmemset.md)   
 [strcpy, wcscpy, _mbscpy](../crt/strcpy--wcscpy--_mbscpy.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../crt/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)   
 [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../crt/strncpy_s--_strncpy_s_l--wcsncpy_s--_wcsncpy_s_l--_mbsncpy_s--_mbsncpy_s_l.md)