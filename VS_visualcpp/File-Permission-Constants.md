---
title: "File Permission Constants"
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
ms.assetid: 593cad33-31d1-44d2-8941-8af7d210c88c
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
 [_open, _wopen](../VS_visualcpp/_open--_wopen.md)   
 [_sopen, _wsopen](../VS_visualcpp/_sopen--_wsopen.md)   
 [_umask](../VS_visualcpp/_umask.md)   
 [Standard Types](../VS_visualcpp/Standard-Types.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)