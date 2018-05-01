---
title: "MSBuild Error MSB3122 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationsApplicationNotFullTrust"
helpviewer_keywords: 
  - "MSB3122"
ms.assetid: 523e4160-f165-437a-9f19-fb2ec77d46f5
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3122
**MSB3122: Use of file associations requires full trust.**  
  
 Publishing an application that configures file associations requires that the application be a full trust application.  
  
### To correct this error  
  
-   Enable ClickOnce security settings and set the application to a full trust application. For more information, see [How to: Enable ClickOnce Security Settings](http://msdn.microsoft.com/library/73cd3e9d-cd72-4ad2-8cae-94d6bb6b01e0).  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)   
 [Code Access Security for ClickOnce Applications](http://msdn.microsoft.com/library/04b104d0-0bd3-4ccb-b164-1de92d234487)