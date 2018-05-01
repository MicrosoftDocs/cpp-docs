---
title: "Targets | Microsoft Docs"
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
  - "targets, specifying in NMAKE"
ms.assetid: 826ee849-4278-4c6e-97c3-79a2b5fe6463
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Targets
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Targets](https://docs.microsoft.com/cpp/build/targets).  
  
  
In a dependency line, specify one or more targets, using any valid filename, directory name, or [pseudotarget](../build/pseudotargets.md). Separate multiple targets with one or more spaces or tabs. Targets are not case sensitive. Paths are permitted with filenames. A target cannot exceed 256 characters. If the target preceding the colon is a single character, use a separating space; otherwise, NMAKE interprets the letter-colon combination as a drive specifier.  
  
## What do you want to know more about?  
 [Pseudotargets](../build/pseudotargets.md)  
  
 [Multiple targets](../build/multiple-targets.md)  
  
 [Cumulative dependencies](../build/cumulative-dependencies.md)  
  
 [Targets in multiple description blocks](../build/targets-in-multiple-description-blocks.md)  
  
 [Dependency side effects](../build/dependency-side-effects.md)  
  
## See Also  
 [Description Blocks](../build/description-blocks.md)

