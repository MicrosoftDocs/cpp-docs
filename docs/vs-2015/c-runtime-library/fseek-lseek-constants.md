---
title: "fseek, _lseek Constants | Microsoft Docs"
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
  - "SEEK_END"
  - "SEEK_SET"
  - "SEEK_CUR"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "SEEK_SET constant"
  - "SEEK_END constant"
  - "SEEK_CUR constant"
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fseek, _lseek Constants
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [fseek, _lseek Constants](https://docs.microsoft.com/cpp/c-runtime-library/fseek-lseek-constants).  
  
Syntax  
  
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





