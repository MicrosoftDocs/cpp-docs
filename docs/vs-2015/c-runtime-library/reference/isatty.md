---
title: "_isatty | Microsoft Docs"
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
  - "_isatty"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_isatty"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "isatty function"
  - "character device checking"
  - "_isatty function"
  - "checking character devices"
ms.assetid: 9f1b2e87-0cd7-4079-b187-f2b7ca15fcbe
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _isatty
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_isatty](https://docs.microsoft.com/cpp/c-runtime-library/reference/isatty).  
  
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
  
 This function validates the `fd` parameter. If `fd` is a bad file pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns 0 and sets `errno` to `EBADF`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_isatty`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
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
 [File Handling](../../c-runtime-library/file-handling.md)





