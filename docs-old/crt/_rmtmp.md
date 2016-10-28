---
title: "_rmtmp"
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
  - "_rmtmp"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
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
caps.latest.revision: 10
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
# _rmtmp
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
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../crt/crt-library-features.md).  
  
## Example  
 See the example for [tmpfile](../crt/tmpfile.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Stream I/O](../crt/stream-i-o.md)   
 [_flushall](../crt/_flushall.md)   
 [tmpfile](../crt/tmpfile.md)   
 [_tempnam, _wtempnam, tmpnam, _wtmpnam](../crt/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)