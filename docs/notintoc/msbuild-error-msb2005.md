---
title: "MSBuild Error MSB2005"
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
  - "MSBuild.NoRootProjectElement"
helpviewer_keywords: 
  - "MSB2005"
ms.assetid: 62db2963-3811-4a92-8f4d-ff9145cb53ef
caps.latest.revision: 10
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
# MSBuild Error MSB2005
**Element \<{0}> cannot contain attributes.**  
  
 The element specified in the message cannot contain attributes.  
  
### To correct this error  
  
-   Delete the attributes from the specified element.  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)