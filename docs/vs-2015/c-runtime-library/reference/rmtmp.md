---
title: "_rmtmp | Microsoft Docs"
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
  - "_rmtmp"
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
  - "rmtmp"
  - "_rmtmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "removing temporary files"
  - "_rmtmp function"
  - "files [C++], temporary"
  - "rmtmp function"
  - "files [C++], removing"
  - "temporary files [C++], removing"
ms.assetid: 7419501e-2587-4f2a-b469-0dca07f84736
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _rmtmp
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_rmtmp](https://docs.microsoft.com/cpp/c-runtime-library/reference/rmtmp).  
  
Removes temporary files.  
  
## Syntax  
  
```  
  
int _rmtmp( void );  
```  
  
## Return Value  
 `_rmtmp` returns the number of temporary files closed and deleted.  
  
## Remarks  
 The `_rmtmp` function cleans up all temporary files in the current directory. The function removes only those files created by `tmpfile`; use it only in the same directory in which the temporary files were created.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_rmtmp`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
 See the example for [tmpfile](../../c-runtime-library/reference/tmpfile.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [_flushall](../../c-runtime-library/reference/flushall.md)   
 [tmpfile](../../c-runtime-library/reference/tmpfile.md)   
 [_tempnam, _wtempnam, tmpnam, _wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)





