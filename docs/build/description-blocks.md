---
title: "Description Blocks | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["description blocks", "NMAKE program, description blocks", "blocks, description"]
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Description Blocks
A description block is a dependency line optionally followed by a commands block:  
  
```  
targets... : dependents...  
    commands...  
```  
  
 A dependency line specifies one or more targets and zero or more dependents. A target must be at the start of the line. Separate targets from dependents by a colon (:); spaces or tabs are allowed. To split the line, use a backslash (\ ) after a target or dependent. If a target does not exist, has an earlier timestamp than a dependent, or is a [pseudotarget](../build/pseudotargets.md), NMAKE executes the commands. If a dependent is a target elsewhere and does not exist or is out-of-date with respect to its own dependents, NMAKE updates the dependent before updating the current dependency.  
  
## What do you want to know more about?  
 [Targets](../build/targets.md)  
  
 [Dependents](../build/dependents.md)  
  
## See Also  
 [NMAKE Reference](../build/nmake-reference.md)