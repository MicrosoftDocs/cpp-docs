---
title: "_filelength, _filelengthi64"
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
  - _filelengthi64
  - _filelength
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
ms.assetid: 3ab83d5a-543c-4079-b9d9-0abfc7da0275
caps.latest.revision: 14
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
# _filelength, _filelengthi64
Gets the length of a file.  
  
## Syntax  
  
```  
long _filelength(   
   int fd   
);  
__int64 _filelengthi64(   
   int fd   
);  
```  
  
#### Parameters  
 `fd`  
 Target the file descriptor.  
  
## Return Value  
 Both `_filelength` and `_filelengthi64` return the file length, in bytes, of the target file associated with `fd`. If `fd` is an invalid file descriptor, this function invokes the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, both functions return –1L to indicate an error and set `errno` to `EBADF`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_filelength`|<io.h>|  
|`_filelengthi64`|<io.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_chsize](../VS_visualcpp/_chsize.md).  
  
## .NET Framework Equivalent  
  
-   [System::IO::Stream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.stream.setlength.aspx)  
  
-   [System::IO::FileStream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.filestream.setlength.aspx)  
  
## See Also  
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [_chsize](../VS_visualcpp/_chsize.md)   
 [_fileno](../VS_visualcpp/_fileno.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../VS_visualcpp/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../VS_visualcpp/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md)   
 [_stat, _wstat Functions](../VS_visualcpp/_stat--_stat32--_stat64--_stati64--_stat32i64--_stat64i32--_wstat--_wstat32--_wstat64--_wstati64--_wstat32i64--_wstat64i32.md)   
 [_stat, _wstat Functions](../VS_visualcpp/_stat--_stat32--_stat64--_stati64--_stat32i64--_stat64i32--_wstat--_wstat32--_wstat64--_wstati64--_wstat32i64--_wstat64i32.md)