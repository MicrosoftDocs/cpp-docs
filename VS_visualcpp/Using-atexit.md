---
title: "Using atexit"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
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
# Using atexit
With the [atexit](../VS_visualcpp/atexit.md) function, you can specify an exit-processing function that executes prior to program termination. No global static objects initialized prior to the call to `atexit` are destroyed prior to execution of the exit-processing function.  
  
## See Also  
 [Additional Termination Considerations](../VS_visualcpp/Additional-Termination-Considerations.md)