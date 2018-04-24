---
title: "MSBuild Error MSB3120 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationExtensionTooLong"
helpviewer_keywords: 
  - "MSB3120"
ms.assetid: 20bc64f5-aadc-4eec-9915-a87a3d7f81ea
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3120
**MSB3120: File association extension '\<extension>' exceeds the maximum allowed length of \<maximumlength>.**  
  
 The number of characters in the file association extension must not exceed the indicated number.  
  
### To correct this error  
  
-   Set the [ClickOnce Deployment Manifest](http://msdn.microsoft.com/library/8457e615-e3b6-4990-8dcf-11bc590e4e9b)`extension` attribute to a value that does not contain more characters than the allowed limit for the target operating system.  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)