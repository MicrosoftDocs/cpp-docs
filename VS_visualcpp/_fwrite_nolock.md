---
title: "_fwrite_nolock"
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
  - _fwrite_nolock
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
ms.assetid: 2b4ec6ce-742e-4615-8407-44a0a18ec1d7
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
# _fwrite_nolock
Writes data to a stream, without locking the thread.  
  
## Syntax  
  
```  
size_t _fwrite_nolock(  
   const void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parameters  
 `buffer`  
 Pointer to the data to be written.  
  
 `size`  
 Item size in bytes.  
  
 `count`  
 Maximum number of items to be written.  
  
 `stream`  
 Pointer to the `FILE` structure.  
  
## Return Value  
 Same as [fwrite](../VS_visualcpp/fwrite.md).  
  
## Remarks  
 This function is a non-locking version of `fwrite`. It is identical to `fwrite` except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fwrite_nolock`|<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example for [fread](../VS_visualcpp/fread.md).  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Write](https://msdn.microsoft.com/en-us/library/system.io.filestream.write.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [fread](../VS_visualcpp/fread.md)   
 [_write](../VS_visualcpp/_write.md)