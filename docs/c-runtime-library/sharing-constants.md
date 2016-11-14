---
title: "Sharing Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_SH_DENYNO"
  - "_SH_DENYRD"
  - "_SH_DENYRW"
  - "_SH_DENYWR"
  - "_SH_COMPAT"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_SH_DENYRW constant"
  - "SH_DENYRD constant"
  - "_SH_COMPAT constant"
  - "_SH_DENYRD constant"
  - "SH_DENYRW constant"
  - "sharing constants"
  - "SH_DENYNO constant"
  - "_SH_DENYWR constant"
  - "SH_DENYWR constant"
  - "_SH_DENYNO constant"
  - "SH_COMPAT constant"
ms.assetid: 95fadc3a-55dc-473d-98b5-e8211900465d
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
# Sharing Constants
Constants for file-sharing modes.  
  
## Syntax  
  
```  
  
#include <share.h>  
  
```  
  
## Remarks  
 The *shflag* argument determines the sharing mode, which consists of one or more manifest constants. These can be combined with the *oflag* arguments (see [File Constants](../c-runtime-library/file-constants.md)).  
  
 The following table lists the constants and their meanings:  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_SH_DENYRW`|Denies read and write access to file|  
|`_SH_DENYWR`|Denies write access to file|  
|`_SH_DENYRD`|Denies read access to file|  
|`_SH_DENYNO`|Permits read and write access|  
|`_SH_SECURE`|Sets secure mode (shared read, exclusive write access).|  
  
## See Also  
 [_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [Global Constants](../c-runtime-library/global-constants.md)