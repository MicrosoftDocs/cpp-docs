---
title: "Backward Compatibility"
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
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
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
# Backward Compatibility
For compatibility between product versions, the library OLDNAMES.LIB maps old names to new names. For instance, `open` maps to `_open`. You must explicitly link with OLDNAMES.LIB only when you compile with the following combinations of command-line options:  
  
-   `/Zl` (omit default library name from object file) and `/Ze` (the default — use Microsoft extensions)  
  
-   `/link` (linker-control), `/NOD` (no default-library search), and `/Ze`  
  
 For more information about compiler command-line options, see [Compiler Reference](../VS_visualcpp/Compiler-Options.md).  
  
## See Also  
 [Compatibility](../VS_visualcpp/Compatibility.md)