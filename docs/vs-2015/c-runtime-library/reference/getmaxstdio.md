---
title: "_getmaxstdio | Microsoft Docs"
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
  - "_getmaxstdio"
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
  - "_getmaxstdio"
  - "getmaxstdio"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "files [C++], number open"
  - "_getmaxstdio function"
  - "getmaxstdio function"
  - "open files, getting number"
ms.assetid: 700ca8ce-4a8c-4e00-9467-dfa9d6b831a0
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getmaxstdio
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_getmaxstdio](https://docs.microsoft.com/cpp/c-runtime-library/reference/getmaxstdio).  
  
Returns the number of simultaneously open files permitted at the stream I/O level.  
  
## Syntax  
  
```  
int _getmaxstdio( void );  
```  
  
## Return Value  
 Returns a number that represents the number of simultaneously open files currently permitted at the `stdio` level.  
  
## Remarks  
 Use [_setmaxstdio](../../c-runtime-library/reference/setmaxstdio.md) to configure the number of simultaneously open files permitted at the `stdio` level.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getmaxstdio`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_setmaxstdio.c  
// The program retrieves the maximum number  
// of open files and prints the results  
// to the console.  
  
#include <stdio.h>  
  
int main()  
{  
   printf( "%d\n", _getmaxstdio());  
  
   _setmaxstdio(2048);  
  
   printf( "%d\n", _getmaxstdio());  
}  
```  
  
```Output  
512  
2048  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)





