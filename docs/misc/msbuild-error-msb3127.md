---
title: "MSBuild Error MSB3127 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.FileAssociationDefaultIconNotInstalled"
helpviewer_keywords: 
  - "MSB3127"
ms.assetid: 161eea9a-332f-463e-a49e-d4030e937d52
caps.latest.revision: 8
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
# MSBuild Error MSB3127
**MSB3127: The default icon \<iconname> could not be found in the current file references or is not part of the required download group. The default icon file name is case sensitive so the file name referenced in the application manifest must exactly match the icon's file name.**  
  
 When you publish an application that is configured to use file associations, the default icon that is referenced in the manifest must be located in the current file references, or it must be part of the required download group. The default icon is the icon that appears for files that have the configured file association (the configured file name extension).  
  
### To correct this error  
  
-   Add the icon file to the current project and include it in the required download group. For more information, see [How to: Specify Which Files Are Published by ClickOnce](../Topic/How%20to:%20Specify%20Which%20Files%20Are%20Published%20by%20ClickOnce.md).  
  
## See Also  
 [Publish Page, Project Designer](/visual-studio/ide/reference/publish-page-project-designer)