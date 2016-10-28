---
title: "MSBuild Error MSB2006"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "MSBuild.UnrecognizedElement"
helpviewer_keywords: 
  - "MSB2006"
ms.assetid: 89dc1b89-1621-46bc-9fe6-6d98cbcbebc8
caps.latest.revision: 11
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
# MSBuild Error MSB2006
**The project file does not contain the root element \<{0}>.**  
  
 The root element name is not spelled correctly or is not recognized by [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
### To correct this error  
  
-   Check the spelling of the element name.  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Project File Schema Reference](../Topic/MSBuild%20Project%20File%20Schema%20Reference.md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)