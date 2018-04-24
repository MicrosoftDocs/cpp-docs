---
title: "_unlock_file | Microsoft Docs"
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
  - "_unlock_file"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_unlock_file"
  - "unlock_file"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "files [C++], unlocking"
  - "unlock_file function"
  - "_unlock_file function"
  - "unlocking files"
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _unlock_file
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_unlock_file](https://docs.microsoft.com/cpp/c-runtime-library/reference/unlock-file).  
  
Unlocks a file, allowing other processes to access the file.  
  
## Syntax  
  
```  
void _unlock_file(  
   FILE* file  
);  
```  
  
#### Parameters  
 `file`  
 File handle.  
  
## Remarks  
 The `_unlock_file` function unlocks the file specified by `file`. Unlocking a file allows access to the file by other processes. This function should not be called unless `_lock_file` was previously called on the `file` pointer. Calling `_unlock_file` on a file that isn't locked may result in a deadlock. For an example, see [_lock_file](../../c-runtime-library/reference/lock-file.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_unlock_file`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Lock](https://msdn.microsoft.com/library/system.io.filestream.lock.aspx)  
  
## See Also  
 [File Handling](../../c-runtime-library/file-handling.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_lock_file](../../c-runtime-library/reference/lock-file.md)





