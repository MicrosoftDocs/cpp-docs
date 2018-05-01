---
title: "MSBuild Error MSB2004 | Microsoft Docs"
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
  - "MSBuild.MultipleLanguageNodesNotAllowed"
helpviewer_keywords: 
  - "MSB2004"
ms.assetid: ae426d42-7a97-44b6-b0df-12fdef7d0ee7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB2004
**Element \<{0}> cannot contain more than one language node.**  
  
 A project file can only contain one language node.  
  
### To correct this error  
  
-   Check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in which it was created, save it, and then attempt to convert it again.  
  
## See Also  
 [Devenv Command Line Switches](http://msdn.microsoft.com/library/e12bc6ed-74fd-4bea-8d7c-89b99c20bad8)