---
title: "Path Field Limits | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_MAX_EXT"
  - "_MAX_DIR"
  - "_MAX_PATH"
  - "_MAX_FNAME"
  - "_MAX_DRIVE"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "path field constants"
  - "MAX_FNAME constant"
  - "_MAX_DIR constant"
  - "_MAX_DRIVE constant"
  - "paths, maximum limit"
  - "_MAX_PATH constant"
  - "MAX_DRIVE constant"
  - "_MAX_FNAME constant"
  - "_MAX_EXT constant"
  - "MAX_DIR constant"
  - "MAX_EXT constant"
ms.assetid: 2b5d0e43-1347-45b4-8397-24a8a45c444e
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
>  The C Runtime supports path lengths up to 32768 characters in length, but it is up to the operating system, specifically the file system, to support these longer paths. The sum of the fields should not exceed `_MAX_PATH` for full backwards compatibility with FAT32 file systems. [!INCLUDE[win2kfamily](../c-runtime-library/includes/win2kfamily_md.md)], [!INCLUDE[WinXpFamily](../atl/reference/includes/winxpfamily_md.md)], [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], and Windows Vista NTFS file system supports paths up to 32768 characters in length, but only when using the Unicode APIs. When using long path names, prefix the path with the characters \\\\?\ and use the Unicode versions of the C Runtime functions.  
  
## See Also  
 [Global Constants](../c-runtime-library/global-constants.md)