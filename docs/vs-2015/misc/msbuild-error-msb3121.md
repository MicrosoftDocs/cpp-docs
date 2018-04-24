---
title: "MSBuild Error MSB3121 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationMissingAttribute"
helpviewer_keywords: 
  - "MSB3121"
ms.assetid: c1e83a2a-515f-412d-b8b7-4821e510a923
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3121
**MSB3121: The file association element in the application manifest is missing one or more of the following required attributes: extension, description, progid, or default icon.**  
  
 The [ClickOnce Deployment Manifest](http://msdn.microsoft.com/library/8457e615-e3b6-4990-8dcf-11bc590e4e9b) must contain values for all four attributes.  
  
### To correct this error  
  
-   Set each [ClickOnce Deployment Manifest](http://msdn.microsoft.com/library/8457e615-e3b6-4990-8dcf-11bc590e4e9b) attribute to a valid value.  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)