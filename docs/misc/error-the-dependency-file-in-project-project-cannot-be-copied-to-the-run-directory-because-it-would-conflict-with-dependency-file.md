---
title: "Error: the dependency &#39;file&#39; in project &#39;project&#39; cannot be copied to the run directory because it would conflict with dependency &#39;file&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.copy_version_conflict"
ms.assetid: cd7de1eb-7d58-4e2c-9811-a7201f7817be
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Error: the dependency &#39;file&#39; in project &#39;project&#39; cannot be copied to the run directory because it would conflict with dependency &#39;file&#39;
There is a conflict between references; more than one distinct dependency with the same file name being copied to the bin directory for the application to run. The run directory cannot resolve the conflict because none of the dependencies are primary references.  
  
 This error will cause the build to fail.  
  
 Double-clicking this Task List item will take you to the references node of the project in which the conflict is occurring.  
  
 **To correct this error**  
  
-   Make one of the assemblies a direct reference of your project. A possible downside to this approach is that the assembly you choose is not guaranteed to work with assemblies that require some other version of the referenced assembly.  
  
     \- or -  
  
-   Make sure that both copies of the assembly are strong-named and in the global assembly cache. This eliminates the need to copy the assemblies to the bin directory.  
  
## See Also  
 [Managing references in a project](/visual-studio/ide/managing-references-in-a-project)   
 [Global Assembly Cache](../Topic/Global%20Assembly%20Cache.md)   
 [Strong-Named Assemblies](../Topic/Strong-Named%20Assemblies.md)   
 [Assembly Versioning](../Topic/Assembly%20Versioning.md)   
 [How to: Create and Remove Project Dependencies](../Topic/How%20to:%20Create%20and%20Remove%20Project%20Dependencies.md)