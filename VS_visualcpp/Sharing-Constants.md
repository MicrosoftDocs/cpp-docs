---
title: "Sharing Constants"
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
ms.assetid: 95fadc3a-55dc-473d-98b5-e8211900465d
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
# Sharing Constants
Constants for file-sharing modes.  
  
## Syntax  
  
```  
  
#include <share.h>  
  
```  
  
## Remarks  
 The *shflag* argument determines the sharing mode, which consists of one or more manifest constants. These can be combined with the *oflag* arguments (see [File Constants](../VS_visualcpp/File-Constants.md)).  
  
 The following table lists the constants and their meanings:  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_SH_DENYRW`|Denies read and write access to file|  
|`_SH_DENYWR`|Denies write access to file|  
|`_SH_DENYRD`|Denies read access to file|  
|`_SH_DENYNO`|Permits read and write access|  
|`_SH_SECURE`|Sets secure mode (shared read, exclusive write access).|  
  
## See Also  
 [_sopen, _wsopen](../VS_visualcpp/_sopen--_wsopen.md)   
 [_fsopen, _wfsopen](../VS_visualcpp/_fsopen--_wfsopen.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)