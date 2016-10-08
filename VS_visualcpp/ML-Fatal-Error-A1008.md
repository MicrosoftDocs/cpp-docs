---
title: "ML Fatal Error A1008"
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
ms.topic: article
ms.assetid: fe592f9d-c37b-4cd8-a51d-e3c15ddcab83
caps.latest.revision: 6
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
# ML Fatal Error A1008
**unmatched macro nesting**  
  
 Either a macro was not terminated before the end of the file or the terminating directive [ENDM](../VS_visualcpp/ENDM.md) was found outside of a macro block.  
  
 One cause of this error is omission of the dot before [.REPEAT](../VS_visualcpp/.REPEAT.md) or [.WHILE](../VS_visualcpp/.WHILE.md).  
  
## See Also  
 [ML Error Messages](../VS_visualcpp/ML-Error-Messages.md)