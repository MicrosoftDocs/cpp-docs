---
title: "MSBuild Error MSB2004"
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
  - "MSBuild.MultipleLanguageNodesNotAllowed"
helpviewer_keywords: 
  - "MSB2004"
ms.assetid: ae426d42-7a97-44b6-b0df-12fdef7d0ee7
caps.latest.revision: 11
ms.author: "mblome"
manager: "douge"
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
# MSBuild Error MSB2004
**Element \<{0}> cannot contain more than one language node.**  
  
 A project file can only contain one language node.  
  
### To correct this error  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Devenv Command Line Switches](../Topic/Devenv%20Command%20Line%20Switches.md)