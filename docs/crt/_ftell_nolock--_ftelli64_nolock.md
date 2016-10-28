---
title: "_ftell_nolock, _ftelli64_nolock"
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
  - "_ftelli64_nolock"
  - "_ftell_nolock"
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
  - "_ftelli64_nolock"
  - "ftelli64_nolock"
  - "ftell_nolock"
  - "_ftell_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ftelli64_nolock function"
  - "_ftelli64_nolock function"
  - "_ftell_nolock function"
  - "ftell_nolock function"
  - "file pointers [C++], getting current position"
ms.assetid: 84e68b0a-32f8-4c4a-90ad-3f2387685ede
caps.latest.revision: 13
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
# _ftell_nolock, _ftelli64_nolock
Gets the current position of a file pointer, without locking the thread.  
  
## Syntax  
  
```  
long _ftell_nolock(   
   FILE *stream   
);  
__int64 _ftelli64_nolock(   
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Target the `FILE` structure.  
  
## Return Value  
 Same as `ftell` and `_ftelli64`. For more information, see [ftell, _ftelli64](../crt/ftell--_ftelli64.md)**.**  
  
## Remarks  
 These functions are non-locking versions of `ftell` and `_ftelli64`, respectively. They are identical to `ftell` and `_ftelli64`except that they are not protected from interference by other threads. These functions might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
## Requirements  
  
|Function|Required header|Optional header|  
|--------------|---------------------|---------------------|  
|`ftell_nolock`|\<stdio.h>|\<errno.h>|  
|`_ftelli64_nolock`|\<stdio.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
## See Also  
 [Stream I/O](../crt/stream-i-o.md)   
 [fgetpos](../crt/fgetpos.md)   
 [fseek, _fseeki64](../crt/fseek--_fseeki64.md)   
 [_lseek, _lseeki64](../crt/_lseek--_lseeki64.md)   
 [ftell, _ftelli64](../crt/ftell--_ftelli64.md)