---
title: "fseek, _lseek Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-standard-libraries"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SEEK_END"
  - "SEEK_SET"
  - "SEEK_CUR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SEEK_SET constant"
  - "SEEK_END constant"
  - "SEEK_CUR constant"
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# fseek, _lseek Constants
## Syntax  
  
```  
  
#include <stdio.h>  
  
```  
  
## Remarks  
 The *origin* argument specifies the initial position and can be one of the following manifest constants:  
  
|Constant|Meaning|  
|--------------|-------------|  
|`SEEK_END`|End of file|  
|`SEEK_CUR`|Current position of file pointer|  
|`SEEK_SET`|Beginning of file|  
  
## See Also  
 [fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)   
 [_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)   
 [Global Constants](../c-runtime-library/global-constants.md)