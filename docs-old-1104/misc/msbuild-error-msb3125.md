---
title: "MSBuild Error MSB3125 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationsNoEntryPoint"
helpviewer_keywords: 
  - "MSB3125"
ms.assetid: f8a08b05-1946-4788-8577-ceefde785e95
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
# MSBuild Error MSB3125
**MSB3125: The application is using file associations but has no EntryPoint build parameter.**  
  
 This error occurs when no entryPoint build parameter is present. When you configure an application to use file associations, there must be an entryPoint build parameter in the application manifest. The \<entryPoint> element identifies the assembly that should be executed when the application is run.  
  
### To correct this error  
  
-   Set the [\<entryPoint> Element](../Topic/%3CentryPoint%3E%20Element%20\(ClickOnce%20Application\).md) to a valid value. For more information, see [ClickOnce Application Manifest](/visual-studio/deployment/clickonce-application-manifest).  
  
## See Also  
 [Publish Page, Project Designer](/visual-studio/ide/reference/publish-page-project-designer)   
 [ClickOnce Application Manifest](/visual-studio/deployment/clickonce-application-manifest)