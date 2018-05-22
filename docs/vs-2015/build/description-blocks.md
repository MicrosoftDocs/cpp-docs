---
title: "Description Blocks | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "description blocks"
  - "NMAKE program, description blocks"
  - "blocks, description"
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Description Blocks
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Description Blocks](https://docs.microsoft.com/cpp/build/description-blocks).  
  
  
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

