---
title: "MSBuild Error MSB3124 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.FileAssociationsDuplicateExtensions"
helpviewer_keywords: 
  - "MSB3124"
ms.assetid: d8365103-aa9d-400e-9c24-0a43e2bfbd14
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
# MSBuild Error MSB3124
**MSB3124: A file association has already been created for extension '\<extensionname>'.**  
  
 This error occurs when a duplicate file association extension is encountered.  
  
### To correct this error  
  
-   Remove [ClickOnce Deployment Manifest](/visualstudio/deployment/clickonce-deployment-manifest)`extension` attributes that are not unique. Each listed \<fileAssociation> element's extension attributes must be unique.  
  
## See Also  
 [Publish Page, Project Designer](/visualstudio/ide/reference/publish-page-project-designer)   
 [ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)