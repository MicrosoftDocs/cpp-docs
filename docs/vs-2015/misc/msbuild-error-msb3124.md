---
title: "MSBuild Error MSB3124 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationsDuplicateExtensions"
helpviewer_keywords: 
  - "MSB3124"
ms.assetid: d8365103-aa9d-400e-9c24-0a43e2bfbd14
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3124
**MSB3124: A file association has already been created for extension '\<extensionname>'.**  
  
 This error occurs when a duplicate file association extension is encountered.  
  
### To correct this error  
  
-   Remove [ClickOnce Deployment Manifest](http://msdn.microsoft.com/library/8457e615-e3b6-4990-8dcf-11bc590e4e9b)`extension` attributes that are not unique. Each listed \<fileAssociation> element's extension attributes must be unique.  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)