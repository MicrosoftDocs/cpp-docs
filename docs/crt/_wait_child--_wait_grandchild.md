---
title: "_WAIT_CHILD, _WAIT_GRANDCHILD"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "_WAIT_GRANDCHILD"
  - "WAIT_CHILD"
  - "WAIT_GRANDCHILD"
  - "_WAIT_CHILD"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "WAIT_CHILD constant"
  - "WAIT_GRANDCHILD constant"
  - "_WAIT_CHILD constant"
  - "_WAIT_GRANDCHILD constant"
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
caps.latest.revision: 6
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
# _WAIT_CHILD, _WAIT_GRANDCHILD
## Syntax  
  
```  
  
#include <process.h>  
  
```  
  
## Remarks  
 The `_cwait` function can be used by any process to wait for any other process (if the process ID is known). The action argument can be one of the following values:  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_WAIT_CHILD`|Calling process waits until specified new process terminates.|  
|`_WAIT_GRANDCHILD`|Calling process waits until specified new process, and all processes created by that new process, terminate.|  
  
## See Also  
 [_cwait](../crt/_cwait.md)   
 [Global Constants](../crt/global-constants.md)