---
title: "Inferred Dependents and Rules"
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
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
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
# Inferred Dependents and Rules
NMAKE assumes an inferred dependent for a target if an applicable inference rule exists. A rule applies if:  
  
-   *toext* matches the target's extension.  
  
-   *fromext* matches the extension of a file that has the target's base name and that exists in the current or specified directory.  
  
-   *fromext* is in [.SUFFIXES](../VS_visualcpp/Dot-Directives.md); no other *fromext* in a matching rule has a higher **.SUFFIXES** priority.  
  
-   No explicit dependent has a higher **.SUFFIXES** priority.  
  
 Inferred dependents can cause unexpected side effects. If the target's description block contains commands, NMAKE executes those commands instead of the commands in the rule.  
  
## See Also  
 [Inference Rules](../VS_visualcpp/Inference-Rules.md)