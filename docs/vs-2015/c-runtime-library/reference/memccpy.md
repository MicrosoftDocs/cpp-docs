---
title: "_memccpy | Microsoft Docs"
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
  - "_memccpy"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_memccpy"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_memccpy function"
  - "memccpy function"
ms.assetid: 9a2337df-6e85-4eba-b247-dd0532f45ddb
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _memccpy
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_memccpy](https://docs.microsoft.com/cpp/c-runtime-library/reference/memccpy).  
  
Copies characters from a buffer.  
  
## Syntax  
  
```  
  
      void *_memccpy(  
   void *dest,  
   const void *src,  
   int c,  
   size_t count   
);  
```  
  
#### Parameters  
 *dest*  
 Pointer to the destination.  
  
 *src*  
 Pointer to the source.  
  
 `c`  
 Last character to copy.  
  
 *count*  
 Number of characters.  
  
## Return Value  
 If the character `c` is copied, `_memccpy` returns a pointer to the char in *dest* that immediately follows the character. If `c` is not copied, it returns **NULL**.  
  
## Remarks  
 The `_memccpy` function copies 0 or more characters of *src* to *dest*, halting when the character `c` has been copied or when *count* characters have been copied, whichever comes first.  
  
 **Security Note** Make sure that the destination buffer is the same size or larger than the source buffer. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_memccpy`|\<memory.h> or \<string.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_memccpy.c  
  
#include <memory.h>  
#include <stdio.h>  
#include <string.h>  
  
char string1[60] = "The quick brown dog jumps over the lazy fox";  
  
int main( void )  
{  
   char buffer[61];  
   char *pdest;  
  
   printf( "Function: _memccpy 60 characters or to character 's'\n" );  
   printf( "Source: %s\n", string1 );  
   pdest = _memccpy( buffer, string1, 's', 60 );  
   *pdest = '\0';  
   printf( "Result: %s\n", buffer );  
   printf( "Length: %d characters\n", strlen( buffer ) );  
}  
```  
  
## Output  
  
```  
Function: _memccpy 60 characters or to character 's'  
Source: The quick brown dog jumps over the lazy fox  
Result: The quick brown dog jumps  
Length: 25 characters  
```  
  
## .NET Framework Equivalent  
  
-   [System::Buffer::BlockCopy](https://msdn.microsoft.com/library/system.buffer.blockcopy.aspx)  
  
-   [System::String::Copy](https://msdn.microsoft.com/library/system.string.copy.aspx)  
  
## See Also  
 [Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)   
 [memchr, wmemchr](../../c-runtime-library/reference/memchr-wmemchr.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [memcpy, wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)   
 [memset, wmemset](../../c-runtime-library/reference/memset-wmemset.md)





