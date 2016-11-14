---
title: "File Permission Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_S_IWRITE"
  - "_S_IREAD"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "S_IWRITE constant"
  - "constants [C++], file attributes"
  - "S_IREAD constant"
  - "file permissions [C++]"
  - "_S_IWRITE constant"
  - "_S_IREAD constant"
ms.assetid: 593cad33-31d1-44d2-8941-8af7d210c88c
caps.latest.revision: 6
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
# File Permission Constants
## Syntax  
  
```  
  
#include <sys/stat.h>  
  
```  
  
## Remarks  
 One of these constants is required when `_O_CREAT` (`_open`, `_sopen`) is specified.  
  
 The `pmode` argument specifies the file's permission settings as follows.  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_S_IREAD`|Reading permitted|  
|`_S_IWRITE`|Writing permitted|  
|`_S_IREAD` &#124; `_S_IWRITE`|Reading and writing permitted|  
  
 When used as the `pmode` argument for `_umask`, the manifest constant sets the permission setting, as follows.  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_S_IREAD`|Writing not permitted (file is read-only)|  
|`_S_IWRITE`|Reading not permitted (file is write-only)|  
|`_S_IREAD` &#124; `_S_IWRITE`|Neither reading nor writing permitted|  
  
## See Also  
 [_open, _wopen](../c-runtime-library/reference/open-wopen.md)   
 [_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [_umask](../c-runtime-library/reference/umask.md)   
 [Standard Types](../c-runtime-library/standard-types.md)   
 [Global Constants](../c-runtime-library/global-constants.md)