---
title: "Path Field Limits"
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
ms.assetid: 2b5d0e43-1347-45b4-8397-24a8a45c444e
caps.latest.revision: 8
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
# Path Field Limits
## Syntax  
  
```  
#include <stdlib.h>  
```  
  
## Remarks  
 These constants define the maximum length for the path and for the individual fields within the path.  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_MAX_DIR`|Maximum length of directory component|  
|`_MAX_DRIVE`|Maximum length of drive component|  
|`_MAX_EXT`|Maximum length of extension component|  
|`_MAX_FNAME`|Maximum length of filename component|  
|`_MAX_PATH`|Maximum length of full path|  
  
> [!NOTE]
>  The C Runtime supports path lengths up to 32768 characters in length, but it is up to the operating system, specifically the file system, to support these longer paths. The sum of the fields should not exceed `_MAX_PATH` for full backwards compatibility with FAT32 file systems. Windows 2000, Windows XP Home Edition, Windows XP Professional, Windows Server 2003, Windows Server 2003, and Windows Vista NTFS file system supports paths up to 32768 characters in length, but only when using the Unicode APIs. When using long path names, prefix the path with the characters \\\\?\ and use the Unicode versions of the C Runtime functions.  
  
## See Also  
 [Global Constants](../VS_visualcpp/Global-Constants.md)