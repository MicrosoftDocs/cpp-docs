---
title: "MSBuild Error MSB3121 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.FileAssociationMissingAttribute"
helpviewer_keywords: 
  - "MSB3121"
ms.assetid: c1e83a2a-515f-412d-b8b7-4821e510a923
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
# MSBuild Error MSB3121
**MSB3121: The file association element in the application manifest is missing one or more of the following required attributes: extension, description, progid, or default icon.**  
  
 The [ClickOnce Deployment Manifest](/visual-studio/deployment/clickonce-deployment-manifest) must contain values for all four attributes.  
  
### To correct this error  
  
-   Set each [ClickOnce Deployment Manifest](/visual-studio/deployment/clickonce-deployment-manifest) attribute to a valid value.  
  
## See Also  
 [Publish Page, Project Designer](/visual-studio/ide/reference/publish-page-project-designer)   
 [ClickOnce Application Manifest](/visual-studio/deployment/clickonce-application-manifest)