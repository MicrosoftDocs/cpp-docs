---
title: "_fread_nolock | Microsoft Docs"
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
  - "_fread_nolock"
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
  - "_fread_nolock"
  - "fread_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "reading data [C++], from input streams"
  - "data [C++], reading from input stream"
  - "fread_nolock function"
  - "_fread_nolock function"
  - "streams [C++], reading data from"
ms.assetid: 60e4958b-1097-46f5-a77b-94af5e7dba40
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fread_nolock
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_fread_nolock](https://docs.microsoft.com/cpp/c-runtime-library/reference/fread-nolock).  
  
Reads data from a stream, without locking other threads.  
  
## Syntax  
  
```  
size_t _fread_nolock(   
   void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parameters  
 `buffer`  
 Storage location for data.  
  
 `size`  
 Item size in bytes.  
  
 `count`  
 Maximum number of items to be read.  
  
 `stream`  
 Pointer to the `FILE` structure.  
  
## Return Value  
 See [fread](../../c-runtime-library/reference/fread.md).  
  
## Remarks  
 This function is a non-locking version of `fread`. It is identical to `fread` except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fread_nolock`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Read](https://msdn.microsoft.com/library/system.io.filestream.read.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fwrite](../../c-runtime-library/reference/fwrite.md)   
 [_read](../../c-runtime-library/reference/read.md)





