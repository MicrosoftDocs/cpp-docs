---
title: "Directory Control"
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
ms.assetid: a72dcf6f-f366-4d20-8850-0e19cc53ca18
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
# Directory Control
These routines access, modify, and obtain information about the directory structure.  
  
### Directory-Control Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[_chdir, _wchdir](../VS_visualcpp/_chdir--_wchdir.md)|Change current working directory|[System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)|  
|[_chdrive](../VS_visualcpp/_chdrive.md)|Change current drive|[System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)|  
|[_getcwd, _wgetcwd](../VS_visualcpp/_getcwd--_wgetcwd.md)|Get current working directory for default drive|[System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)|  
|[_getdcwd, _wgetdcwd](../VS_visualcpp/_getdcwd--_wgetdcwd.md)|Get current working directory for specified drive|[System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)|  
|[_getdiskfree](../VS_visualcpp/_getdiskfree.md)|Populates a `_diskfree_t` structure with information about a disk drive.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_getdrive](../VS_visualcpp/_getdrive.md)|Get current (default) drive|[System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)|  
|[_getdrives](../VS_visualcpp/_getdrives.md)|Returns a bitmask representing the currently available disk drives.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_mkdir, _wmkdir](../VS_visualcpp/_mkdir--_wmkdir.md)|Make new directory|[System::IO::Directory::CreateDirectory](https://msdn.microsoft.com/en-us/library/system.io.directory.createdirectory.aspx), [System::IO::DirectoryInfo::CreateSubdirectory](https://msdn.microsoft.com/en-us/library/system.io.directoryinfo.createsubdirectory.aspx)|  
|[_rmdir, _wrmdir](../VS_visualcpp/_rmdir--_wrmdir.md)|Remove directory|[System::IO::Directory::Delete](https://msdn.microsoft.com/en-us/library/system.io.directory.delete.aspx)|  
|[_searchenv, _wsearchenv](../VS_visualcpp/_searchenv--_wsearchenv.md), [_searchenv_s, _wsearchenv_s](../VS_visualcpp/_searchenv_s--_wsearchenv_s.md)|Search for given file on specified paths|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)   
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [System Calls](../VS_visualcpp/System-Calls.md)