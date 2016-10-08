---
title: "_fread_nolock"
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
  - _fread_nolock
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
ms.assetid: 60e4958b-1097-46f5-a77b-94af5e7dba40
caps.latest.revision: 11
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
# _fread_nolock
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
 See [fread](../VS_visualcpp/fread.md).  
  
## Remarks  
 This function is a non-locking version of `fread`. It is identical to `fread` except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fread_nolock`|<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Read](https://msdn.microsoft.com/en-us/library/system.io.filestream.read.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [fwrite](../VS_visualcpp/fwrite.md)   
 [_read](../VS_visualcpp/_read.md)