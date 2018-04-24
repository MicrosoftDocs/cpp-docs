---
title: "setvbuf Constants | Microsoft Docs"
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
  - "_IOFBF"
  - "_IONBF"
  - "_IOLBF"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_IOFBF constant"
  - "IOFBF constant"
  - "IONBF constant"
  - "_IOLBF constant"
  - "IOLBF constant"
  - "_IONBF constant"
ms.assetid: a6ec4dd5-1f24-498c-871a-e874cd28d33c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# setvbuf Constants
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [setvbuf Constants](https://docs.microsoft.com/cpp/c-runtime-library/setvbuf-constants).  
  
Syntax  
  
```  
  
#include <stdio.h>  
  
```  
  
## Remarks  
 These constants represent the type of buffer for `setvbuf`.  
  
 The possible values are given by the following manifest constants:  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_IOFBF`|Full buffering: Buffer specified in call to `setvbuf` is used and its size is as specified in `setvbuf` call. If buffer pointer is **NULL**, automatically allocated buffer of specified size is used.|  
|`_IOLBF`|Same as `_IOFBF`.|  
|`_IONBF`|No buffer is used, regardless of arguments in call to `setvbuf`.|  
  
## See Also  
 [setbuf](../c-runtime-library/reference/setbuf.md)   
 [Global Constants](../c-runtime-library/global-constants.md)





