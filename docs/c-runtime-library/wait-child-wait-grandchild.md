---
title: "_WAIT_CHILD, _WAIT_GRANDCHILD | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["_WAIT_GRANDCHILD", "WAIT_CHILD", "WAIT_GRANDCHILD", "_WAIT_CHILD"]
dev_langs: ["C++"]
helpviewer_keywords: ["WAIT_CHILD constant", "WAIT_GRANDCHILD constant", "_WAIT_CHILD constant", "_WAIT_GRANDCHILD constant"]
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
 [_cwait](../c-runtime-library/reference/cwait.md)   
 [Global Constants](../c-runtime-library/global-constants.md)