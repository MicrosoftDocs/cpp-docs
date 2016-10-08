---
title: "ML Fatal Error A1007"
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
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
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
# ML Fatal Error A1007
**nesting level too deep**  
  
 The assembler reached its nesting limit. The limit is 20 levels except where noted otherwise.  
  
 One of the following was nested too deeply:  
  
-   A high-level directive such as [.IF](../VS_visualcpp/.IF.md), [.REPEAT](../VS_visualcpp/.REPEAT.md), or [.WHILE](../VS_visualcpp/.WHILE.md).  
  
-   A structure definition.  
  
-   A conditional-assembly directive.  
  
-   A procedure definition.  
  
-   A [PUSHCONTEXT](../VS_visualcpp/PUSHCONTEXT.md) directive (the limit is 10).  
  
-   A segment definition.  
  
-   An include file.  
  
-   A macro.  
  
## See Also  
 [ML Error Messages](../VS_visualcpp/ML-Error-Messages.md)