---
title: "MSBuild Error MSB3119 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationExtensionMissingLeadDot"
helpviewer_keywords: 
  - "MSB3119"
ms.assetid: 52d68b0e-01d4-436f-a96c-733fd20a8c04
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3119
**MSB3119: File association extensions must start with a period character (.).**  
  
 This error occurs when you configure a file association and the extension does not start with a period character (.).  
  
### To correct this error  
  
-   Set the [ClickOnce Deployment Manifest](http://msdn.microsoft.com/library/8457e615-e3b6-4990-8dcf-11bc590e4e9b)`extension` attribute to a value that starts with a period character (.), for example, ".doc".  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)