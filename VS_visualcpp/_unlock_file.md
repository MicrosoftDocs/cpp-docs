---
title: "_unlock_file"
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
  - _unlock_file
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
  - api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
caps.latest.revision: 10
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
# _unlock_file
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
 The `_unlock_file` function unlocks the file specified by `file`. Unlocking a file allows access to the file by other processes. This function should not be called unless `_lock_file` was previously called on the `file` pointer. Calling `_unlock_file` on a file that isn't locked may result in a deadlock. For an example, see [_lock_file](../VS_visualcpp/_lock_file.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_unlock_file`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Lock](https://msdn.microsoft.com/en-us/library/system.io.filestream.lock.aspx)  
  
## See Also  
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [_creat, _wcreat](../VS_visualcpp/_creat--_wcreat.md)   
 [_open, _wopen](../VS_visualcpp/_open--_wopen.md)   
 [_lock_file](../VS_visualcpp/_lock_file.md)