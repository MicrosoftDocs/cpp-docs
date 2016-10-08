---
title: "System Calls"
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
ms.assetid: 0255f2ec-a5a0-487e-8b09-9dad001d81ed
caps.latest.revision: 9
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
# System Calls
The following functions are Windows operating system calls.  
  
### System Call Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_findclose](../VS_visualcpp/_findclose.md)|Release resources from previous find operations|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_findfirst, _findfirst32, _findfirst64, _findfirsti64, _findfirst32i64, _findfirst64i32, _wfindfirst, _wfindfirst32, _wfindfirst64, _wfindfirsti64, _wfindfirst32i64, _wfindfirst64i32](../VS_visualcpp/_findfirst--_findfirst32--_findfirst32i64--_findfirst64--_findfirst64i32--_findfirsti64--_wfindfirst--_wfindfirst32--_wfindfirst32i64--_wfindfirst64--_wfindfirst64i32--_wfindfirsti64.md)|Find file with specified attributes|[System::IO::DirectoryInfo::GetFiles](https://msdn.microsoft.com/en-us/library/system.io.directoryinfo.getfiles.aspx)|  
|[_findnext, _findnext32, _findnext64, _findnexti64, _findnext32i64, _findnext64i32, _wfindnext, _wfindnext32, _wfindnexti64, _wfindnext64, _wfindnexti64](../VS_visualcpp/_findnext--_findnext32--_findnext32i64--_findnext64--_findnext64i32--_findnexti64--_wfindnext--_wfindnext32--_wfindnext32i64--_wfindnext64--_wfindnext64i32--_wfindnexti64.md)|Find next file with specified attributes|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)   
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [Directory Control](../VS_visualcpp/Directory-Control.md)   
 [Low-Level I/O](../VS_visualcpp/Low-Level-I-O.md)