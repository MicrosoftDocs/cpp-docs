---
title: "_crtDbgFlag"
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
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
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
# _crtDbgFlag
The **_crtDbgFlag** flag consists of five bit fields that control how memory allocations on the debug version of the heap are tracked, verified, reported, and dumped. The bit fields of the flag are set using the [_CrtSetDbgFlag](../VS_visualcpp/_CrtSetDbgFlag.md) function. This flag and its bit fields are declared in Crtdbg.h. This flag is only available when the [_DEBUG](../VS_visualcpp/_DEBUG.md) flag has been defined in the application.  
  
 For more information about using this flag in conjunction with other debug functions, see [Heap State Reporting Functions](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions).  
  
## See Also  
 [Control Flags](../VS_visualcpp/Control-Flags.md)