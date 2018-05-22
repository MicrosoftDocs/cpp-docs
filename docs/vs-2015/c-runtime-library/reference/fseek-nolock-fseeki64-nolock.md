---
title: "_fseek_nolock, _fseeki64_nolock | Microsoft Docs"
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
  - "_fseek_nolock"
  - "_fseeki64_nolock"
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_fseek_nolock"
  - "_fseeki64_nolock"
  - "fseek_nolock"
  - "fseeki64_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fseek_nolock function"
  - "fseeki64_nolock function"
  - "file pointers [C++], moving"
  - "fseek_nolock function"
  - "_fseeki64_nolock function"
  - "seek file pointers"
ms.assetid: 2dd4022e-b715-462b-b935-837561605a02
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fseek_nolock, _fseeki64_nolock
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_fseek_nolock, _fseeki64_nolock](https://docs.microsoft.com/cpp/c-runtime-library/reference/fseek-nolock-fseeki64-nolock).  
  
Moves the file pointer to a specified location.  
  
## Syntax  
  
```  
int _fseek_nolock(   
   FILE *stream,  
   long offset,  
   int origin   
);  
int _fseeki64_nolock(   
   FILE *stream,  
   __int64 offset,  
   int origin   
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to the `FILE` structure.  
  
 `offset`  
 Number of bytes from `origin.`  
  
 `origin`  
 Initial position.  
  
## Return Value  
 Same as [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md) respectively.  
  
## Remarks  
 These functions are the non-locking versions of `fseek` and `_fseeki64`, respectively.These are identical to `fseek` and `_fseeki64` except that they are not protected from interference by other threads. These functions might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fseek`|\<stdio.h>|  
|`_fseeki64`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
  
-   [System::IO::FileStream::Position](https://msdn.microsoft.com/library/system.io.filestream.position.aspx)  
  
-   [System::IO::FileStream::Seek](https://msdn.microsoft.com/library/system.io.filestream.seek.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [ftell, _ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)   
 [_lseek, _lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)   
 [rewind](../../c-runtime-library/reference/rewind.md)





