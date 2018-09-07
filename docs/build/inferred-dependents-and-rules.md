---
title: "Inferred Dependents and Rules | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["rules, inferred", "inferred dependents in NMAKE", "inferred rules in NMAKE", "dependents, inferred"]
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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