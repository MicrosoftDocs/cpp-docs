---
title: "Multiple Targets"
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
ms.assetid: b609a179-0b9f-4b08-9930-998047588ae0
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
# Multiple Targets
NMAKE evaluates multiple targets in a single dependency as if each were specified in a separate description block.  
  
 For example, this...  
  
 **bounce.exe leap.exe : jump.obj**  
 **echo Building...** ...is evaluated as this:  
  
 **bounce.exe : jump.obj**  
 **echo Building...**  
**leap.exe : jump.obj**  
 **echo Building...**   
## See Also  
 [Targets](../VS_visualcpp/Targets.md)