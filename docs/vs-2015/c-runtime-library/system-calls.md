---
title: "System Calls | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.system"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "Windows [C++], system calls"
  - "system calls"
ms.assetid: 0255f2ec-a5a0-487e-8b09-9dad001d81ed
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# System Calls
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [System Calls](https://docs.microsoft.com/cpp/c-runtime-library/system-calls).  
  
The following functions are Windows operating system calls.  
  
### System Call Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_findclose](../c-runtime-library/reference/findclose.md)|Release resources from previous find operations|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_findfirst, _findfirst32, _findfirst64, _findfirsti64, _findfirst32i64, _findfirst64i32, _wfindfirst, _wfindfirst32, _wfindfirst64, _wfindfirsti64, _wfindfirst32i64, _wfindfirst64i32](../c-runtime-library/reference/findfirst-functions.md)|Find file with specified attributes|[System::IO::DirectoryInfo::GetFiles](https://msdn.microsoft.com/library/system.io.directoryinfo.getfiles.aspx)|  
|[_findnext, _findnext32, _findnext64, _findnexti64, _findnext32i64, _findnext64i32, _wfindnext, _wfindnext32, _wfindnexti64, _wfindnext64, _wfindnexti64](../c-runtime-library/reference/findnext-functions.md)|Find next file with specified attributes|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)   
 [File Handling](../c-runtime-library/file-handling.md)   
 [Directory Control](../c-runtime-library/directory-control.md)   
 [Low-Level I/O](../c-runtime-library/low-level-i-o.md)





