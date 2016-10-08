---
title: "ML Fatal Error A1010"
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
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
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
# ML Fatal Error A1010
**unmatched block nesting :**  
  
 A block beginning did not have a matching end, or a block end did not have a matching beginning. One of the following may be involved:  
  
-   A high-level directive such as [.IF](../VS_visualcpp/.IF.md), [.REPEAT](../VS_visualcpp/.REPEAT.md), or [.WHILE](../VS_visualcpp/.WHILE.md).  
  
-   A conditional-assembly directive such as [IF](../VS_visualcpp/IF--MASM-.md), [REPEAT](../VS_visualcpp/REPEAT.md), or **WHILE**.  
  
-   A structure or union definition.  
  
-   A procedure definition.  
  
-   A segment definition.  
  
-   A [POPCONTEXT](../VS_visualcpp/POPCONTEXT.md) directive.  
  
-   A conditional-assembly directive, such as an [ELSE](../VS_visualcpp/ELSE--MASM-.md), [ELSEIF](../VS_visualcpp/ELSEIF--MASM-.md), or **ENDIF** without a matching [IF](../VS_visualcpp/IF--MASM-.md).  
  
## See Also  
 [ML Error Messages](../VS_visualcpp/ML-Error-Messages.md)