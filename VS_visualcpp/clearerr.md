---
title: "clearerr"
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
  - clearerr
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
ms.assetid: a9711cd4-3335-43d4-a018-87bbac5b3bac
caps.latest.revision: 19
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
# clearerr
Resets the error indicator for a stream. A more secure version of this function is available; see [clearerr_s](../VS_visualcpp/clearerr_s.md).  
  
## Syntax  
  
```  
void clearerr(  
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to `FILE` structure.  
  
## Remarks  
 The `clearerr` function resets the error indicator and end-of-file indicator for `stream`. Error indicators are not automatically cleared; once the error indicator for a specified stream is set, operations on that stream continue to return an error value until `clearerr`, `fseek`, `fsetpos`, or `rewind` is called.  
  
 If `stream` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns. For more information on `errno` and error codes, see [errno Constants](../VS_visualcpp/errno-Constants.md).  
  
 A more secure version of this function is available; see [clearerr_s](../VS_visualcpp/clearerr_s.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`clearerr`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_clearerr.c  
// This program creates an error  
// on the standard input stream, then clears  
// it so that future reads won't fail.  
  
#include <stdio.h>  
  
int main( void )  
{  
   int c;  
   // Create an error by writing to standard input.  
   putc( 'c', stdin );  
   if( ferror( stdin ) )  
   {  
      perror( "Write error" );  
      clearerr( stdin );  
   }  
  
   // See if read causes an error.  
   printf( "Will input cause an error? " );  
   c = getc( stdin );  
   if( ferror( stdin ) )  
   {  
      perror( "Read error" );  
      clearerr( stdin );  
   }  
   else  
      printf( "No read error\n" );  
}  
```  
  
  **`n` `n`Write error: No error**  
**Will input cause an error? n**  
**No read error**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Error Handling](../VS_visualcpp/Error-Handling--CRT-.md)   
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [_eof](../VS_visualcpp/_eof.md)   
 [feof](../VS_visualcpp/feof.md)   
 [ferror](../VS_visualcpp/ferror.md)   
 [perror, _wperror](../VS_visualcpp/perror--_wperror.md)