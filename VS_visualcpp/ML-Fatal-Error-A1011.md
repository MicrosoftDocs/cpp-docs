---
title: "ML Fatal Error A1011"
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
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
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
# ML Fatal Error A1011
**directive must be in control block**  
  
 The assembler found a high-level directive where one was not expected. One of the following directives was found:  
  
-   [.ELSE](../VS_visualcpp/.ELSE.md) without [.IF](../VS_visualcpp/.IF.md)  
  
-   [.ENDIF](../VS_visualcpp/.ENDIF.md) without [.IF](../VS_visualcpp/.IF.md)  
  
-   [.ENDW](../VS_visualcpp/.ENDW.md) without [.WHILE](../VS_visualcpp/.WHILE.md)  
  
-   [.UNTILCXZ](../VS_visualcpp/.UNTILCXZ.md) without [.REPEAT](../VS_visualcpp/.REPEAT.md)  
  
-   [.CONTINUE](../VS_visualcpp/.CONTINUE.md) without [.WHILE](../VS_visualcpp/.WHILE.md) or [.REPEAT](../VS_visualcpp/.REPEAT.md)  
  
-   [.BREAK](../VS_visualcpp/.BREAK.md) without [.WHILE](../VS_visualcpp/.WHILE.md) or [.REPEAT](../VS_visualcpp/.REPEAT.md)  
  
-   [.ELSE](../VS_visualcpp/.ELSE.md) following `.ELSE`  
  
## See Also  
 [ML Error Messages](../VS_visualcpp/ML-Error-Messages.md)