---
title: "MSBuild Error MSB3128 | Microsoft Docs"
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
  - "GenerateManifest.ManifestsSignedHashExcluded"
helpviewer_keywords: 
  - "MSB3128"
ms.assetid: e8612a4b-4016-48d2-b5f0-a1091bfe8cb1
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3128
**MSB3128: The ClickOnce manifests cannot be signed because they contain one or more references that are not hashed.**  
  
 When you publish an application that has a signed manifest, all files must be included in the hash.  
  
### To correct this error  
  
1.  Go to the **Publish** page of the **Project Designer**.  
  
2.  Click **Application Files**.  
  
3.  Set the **Hash** value to **Include** for all files that are to be published.  
  
## See Also  
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)