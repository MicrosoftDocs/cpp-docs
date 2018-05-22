---
title: "_WAIT_CHILD, _WAIT_GRANDCHILD | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _WAIT_CHILD, _WAIT_GRANDCHILD
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_WAIT_CHILD, _WAIT_GRANDCHILD](https://docs.microsoft.com/cpp/c-runtime-library/wait-child-wait-grandchild).  
  
Syntax  
  
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
 [_cwait](../c-runtime-library/reference/cwait.md)   
 [Global Constants](../c-runtime-library/global-constants.md)





