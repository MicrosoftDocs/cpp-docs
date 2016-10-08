---
title: "Commit-To-Disk Constants"
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
ms.assetid: 0b903b23-b4fa-431e-a937-51d95f695ecf
caps.latest.revision: 6
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
# Commit-To-Disk Constants
**Microsoft Specific**  
  
## Syntax  
  
```  
  
#include <stdio.h>  
```  
  
## Remarks  
 These Microsoft-specific constants specify whether the buffer associated with the open file is flushed to operating system buffers or to disk. The mode is included in the string specifying the type of read/write access (**"r"**, **"w"**, **"a"**, **"r+"**, **"w+"**, **"a+"**).  
  
 The commit-to-disk modes are as follows:  
  
 **c**  
 Writes the unwritten contents of the specified buffer to disk. This commit-to-disk functionality only occurs at explicit calls to either the [fflush](../VS_visualcpp/fflush.md) or the [_flushall](../VS_visualcpp/_flushall.md) function. This mode is useful when dealing with sensitive data. For example, if your program terminates after a call to `fflush` or `_flushall`, you can be sure that your data reached the operating system's buffers. However, unless a file is opened with the **c** option, the data might never make it to disk if the operating system also terminates.  
  
 **n**  
 Writes the unwritten contents of the specified buffer to the operating system's buffers. The operating system can cache data and then determine an optimal time to write to disk. Under many conditions, this behavior makes for efficient program behavior. However, if the retention of data is critical (such as bank transactions or airline ticket information) consider using the **c** option. The **n** mode is the default.  
  
> [!NOTE]
>  The **c** and **n** options are not part of the ANSI standard for `fopen`, but are Microsoft extensions and should not be used where ANSI portability is desired.  
  
## Using the Commit-to-Disk Feature with Existing Code  
 By default, calls to the [fflush](../VS_visualcpp/fflush.md) or [_flushall](../VS_visualcpp/_flushall.md) library functions write data to buffers maintained by the operating system. The operating system determines the optimal time to actually write the data to disk. The commit-to-disk feature of the run-time library lets you ensure that critical data is written directly to disk rather than to the operating system's buffers. You can give this capability to an existing program without rewriting it by linking its object files with COMMODE.OBJ.  
  
 In the resulting executable file, calls to `fflush` write the contents of the buffer directly to disk, and calls to `_flushall` write the contents of all buffers to disk. These two functions are the only ones affected by COMMODE.OBJ.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [_fdopen, _wfdopen](../VS_visualcpp/_fdopen--_wfdopen.md)   
 [fopen, _wfopen](../VS_visualcpp/fopen--_wfopen.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)