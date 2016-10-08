---
title: "_isatty"
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
  - _isatty
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
ms.assetid: 9f1b2e87-0cd7-4079-b187-f2b7ca15fcbe
caps.latest.revision: 18
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
# _isatty
Determines whether a file descriptor is associated with a character device.  
  
## Syntax  
  
```  
  
      int _isatty(  
int fd   
);  
```  
  
#### Parameters  
 `fd`  
 File descriptor that refers to the device to be tested.  
  
## Return Value  
 `_isatty` returns a nonzero value if the descriptor is associated with a character device. Otherwise, `_isatty` returns 0.  
  
## Remarks  
 The `_isatty` function determines whether `fd` is associated with a character device (a terminal, console, printer, or serial port).  
  
 This function validates the `fd` parameter. If `fd` is a bad file pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the function returns 0 and sets `errno` to `EBADF`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_isatty`|<io.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## Example  
  
```  
// crt_isatty.c  
/* This program checks to see whether  
 * stdout has been redirected to a file.  
 */  
  
#include <stdio.h>  
#include <io.h>  
  
int main( void )  
{  
   if( _isatty( _fileno( stdout ) ) )  
      printf( "stdout has not been redirected to a file\n" );  
   else  
      printf( "stdout has been redirected to a file\n");  
}  
```  
  
## Sample Output  
  
```  
stdout has not been redirected to a file  
```  
  
## See Also  
 [File Handling](../VS_visualcpp/File-Handling.md)