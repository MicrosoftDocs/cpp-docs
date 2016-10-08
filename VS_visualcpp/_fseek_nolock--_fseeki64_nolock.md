---
title: "_fseek_nolock, _fseeki64_nolock"
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
  - _fseek_nolock
  - _fseeki64_nolock
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
apitype: DLLExport
ms.assetid: 2dd4022e-b715-462b-b935-837561605a02
caps.latest.revision: 13
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
# _fseek_nolock, _fseeki64_nolock
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
 Same as [fseek, _fseeki64](../VS_visualcpp/fseek--_fseeki64.md) respectively.  
  
## Remarks  
 These functions are the non-locking versions of `fseek` and `_fseeki64`, respectively.These are identical to `fseek` and `_fseeki64` except that they are not protected from interference by other threads. These functions might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fseek`|<stdio.h>|  
|`_fseeki64`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
  
-   [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
-   [System::IO::FileStream::Seek](https://msdn.microsoft.com/en-us/library/system.io.filestream.seek.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [ftell, _ftelli64](../VS_visualcpp/ftell--_ftelli64.md)   
 [_lseek, _lseeki64](../VS_visualcpp/_lseek--_lseeki64.md)   
 [rewind](../VS_visualcpp/rewind.md)