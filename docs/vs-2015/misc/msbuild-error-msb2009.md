---
title: "MSBuild Error MSB2009 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.UnrecognizedAttribute"
helpviewer_keywords: 
  - "MSB2009"
ms.assetid: 34fd83b4-dead-49e5-b1ee-b23dc5a95244
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB2009
**Attribute '\<attribute name>' of element '\<element name>' is not valid.**  
  
 The attribute name is not spelled correctly or is not recognized by [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)].  
  
### To correct this error  
  
-   Check the spelling of the attribute name.  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Project File Schema Reference](../Topic/MSBuild%20Project%20File%20Schema%20Reference.md)