---
title: "_locking Constants"
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
ms.assetid: c3dc92c8-60e3-4d29-9f50-5d217627c8ad
caps.latest.revision: 7
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
# _locking Constants
## Syntax  
  
```  
  
#include <sys/locking.h>  
  
```  
  
## Remarks  
 The *mode* argument in the call to the `_locking` function specifies the locking action to be performed.  
  
 The *mode* argument must be one of the following manifest constants.  
  
 `_LK_LOCK`  
 Locks the specified bytes. If the bytes cannot be locked, the function tries again after 1 second. If, after 10 attempts, the bytes cannot be locked, the function returns an error.  
  
 `_LK_RLCK`  
 Same as `_LK_LOCK`.  
  
 `_LK_NBLCK`  
 Locks the specified bytes. If bytes cannot be locked, the function returns an error.  
  
 `_LK_NBRLCK`  
 Same as `_LK_NBLCK`.  
  
 `_LK_UNLCK`  
 Unlocks the specified bytes. (The bytes must have been previously locked.)  
  
## See Also  
 [_locking](../VS_visualcpp/_locking.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)