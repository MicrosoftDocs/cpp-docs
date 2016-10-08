---
title: "clearerr_s"
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
  - clearerr_s
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
  - api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
ms.assetid: b74d014d-b7a8-494a-a330-e5ffd5614772
caps.latest.revision: 17
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
# clearerr_s
Resets the error indicator for a stream. This is a version of [clearerr](../VS_visualcpp/clearerr.md) with security enhancements as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
errno_t clearerr_s(  
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to `FILE` structure  
  
## Return Value  
 Zero if successful; `EINVAL` if `stream` is NULL.  
  
## Remarks  
 The `clearerr_s` function resets the error indicator and end-of-file indicator for `stream`. Error indicators are not automatically cleared; once the error indicator for a specified stream is set, operations on that stream continue to return an error value until `clearerr_s`, `clearerr`, `fseek`, `fsetpos`, or `rewind` is called.  
  
 If `stream` is NULL, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`clearerr_s`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_clearerr_s.c  
// This program creates an error  
// on the standard input stream, then clears  
// it so that future reads won't fail.  
  
#include <stdio.h>  
  
int main( void )  
{  
   int c;  
   errno_t err;  
  
   // Create an error by writing to standard input.  
   putc( 'c', stdin );  
   if( ferror( stdin ) )  
   {  
      perror( "Write error" );  
      err = clearerr_s( stdin );  
      if (err != 0)  
      {  
         abort();  
      }  
   }  
  
   // See if read causes an error.  
   printf( "Will input cause an error? " );  
   c = getc( stdin );  
   if( ferror( stdin ) )  
   {  
      perror( "Read error" );  
      err = clearerr_s( stdin );  
      if (err != 0)  
      {  
         abort();  
      }  
   }  
}  
```  
  
  **`n` `n`Write error: Bad file descriptor**  
**Will input cause an error? n**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Error Handling](../VS_visualcpp/Error-Handling--CRT-.md)   
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [clearerr](../VS_visualcpp/clearerr.md)   
 [_eof](../VS_visualcpp/_eof.md)   
 [feof](../VS_visualcpp/feof.md)   
 [ferror](../VS_visualcpp/ferror.md)   
 [perror, _wperror](../VS_visualcpp/perror--_wperror.md)