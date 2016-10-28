---
title: "MSBuild Error MSB2008"
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
  - "MSBuild.UnrecognizedChildElement"
helpviewer_keywords: 
  - "MSB2008"
ms.assetid: 3c2afda0-a116-4b2f-af0c-c0f0d1541325
caps.latest.revision: 13
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
# MSBuild Error MSB2008
**The Visual Studio project system cannot convert "{0}" projects. It can only be used to convert C# and VB client projects.**  
  
 Only valid [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] and [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] projects can be converted using [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
### To correct this error  
  
-   If the project is a [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] or [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] project, check whether the project file has been modified or corrupted. If it has been modified or corrupted, open the project in the version of [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] in which it was created, save it, and then attempt to convert it again.  
  
-   If the project is not a [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] or [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] project, use the appropriate tool to convert it.  
  
## See Also  
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)