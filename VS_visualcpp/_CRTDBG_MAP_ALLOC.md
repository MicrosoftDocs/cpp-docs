---
title: "_CRTDBG_MAP_ALLOC"
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
ms.assetid: 435242b8-caea-4063-b765-4a608200312b
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _CRTDBG_MAP_ALLOC
When the **_CRTDBG_MAP_ALLOC** flag is defined in the debug version of an application, the base version of the heap functions are directly mapped to their debug versions. The flag is used in Crtdbg.h to do the mapping. This flag is only available when the [_DEBUG](../VS_visualcpp/_DEBUG.md) flag has been defined in the application.  
  
 For more information about using the debug version versus the base version of a heap function, see [Using the Debug Version Versus the Base Version](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## See Also  
 [Control Flags](../VS_visualcpp/Control-Flags.md)