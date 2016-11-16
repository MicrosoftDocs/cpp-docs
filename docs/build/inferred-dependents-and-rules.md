---
title: "Inferred Dependents and Rules | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rules, inferred"
  - "inferred dependents in NMAKE"
  - "inferred rules in NMAKE"
  - "dependents, inferred"
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Inferred Dependents and Rules
NMAKE assumes an inferred dependent for a target if an applicable inference rule exists. A rule applies if:  
  
-   *toext* matches the target's extension.  
  
-   *fromext* matches the extension of a file that has the target's base name and that exists in the current or specified directory.  
  
-   *fromext* is in [.SUFFIXES](../build/dot-directives.md); no other *fromext* in a matching rule has a higher **.SUFFIXES** priority.  
  
-   No explicit dependent has a higher **.SUFFIXES** priority.  
  
 Inferred dependents can cause unexpected side effects. If the target's description block contains commands, NMAKE executes those commands instead of the commands in the rule.  
  
## See Also  
 [Inference Rules](../build/inference-rules.md)