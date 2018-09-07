---
title: "Pseudotargets | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["makefiles, pseudotargets", "pseudotargets and NMAKE", "NMAKE program, pseudotargets", "timestamps, makefile pseudotargets", "NMAKE program, targets"]
ms.assetid: c8c479dc-0129-4186-8366-bc6251f2b494
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Pseudotargets
A pseudotarget is a label used in place of a filename in a dependency line. It is interpreted as a file that does not exist, and so is out-of-date. NMAKE assumes a pseudotarget's timestamp is the most recent of all its dependents. If it has no dependents, the current time is assumed. If a pseudotarget is used as a target, its commands are always executed. A pseudotarget used as a dependent must also appear as a target in another dependency. However, that dependency does not need to have a commands block.  
  
 Pseudotarget names follow the filename syntax rules for targets. However, if the name does not have an extension (that is, does not contain a period), it can exceed the 8-character limit for filenames and can be up to 256 characters long.  
  
## See Also  
 [Targets](../build/targets.md)