---
title: "MSBuild Error MSB3119 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationExtensionMissingLeadDot"
helpviewer_keywords: 
  - "MSB3119"
ms.assetid: 52d68b0e-01d4-436f-a96c-733fd20a8c04
caps.latest.revision: 12
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
# MSBuild Error MSB3119
**MSB3119: File association extensions must start with a period character (.).**  
  
 This error occurs when you configure a file association and the extension does not start with a period character (.).  
  
### To correct this error  
  
-   Set the [ClickOnce Deployment Manifest](/visual-studio/deployment/clickonce-deployment-manifest)`extension` attribute to a value that starts with a period character (.), for example, ".doc".  
  
## See Also  
 [Publish Page, Project Designer](/visual-studio/ide/reference/publish-page-project-designer)   
 [ClickOnce Application Manifest](/visual-studio/deployment/clickonce-application-manifest)