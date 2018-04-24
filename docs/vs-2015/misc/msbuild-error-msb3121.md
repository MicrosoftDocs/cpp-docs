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
  
 The [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md) must contain values for all four attributes.  
  
### To correct this error  
  
-   Set each [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md) attribute to a valid value.  
  
## See Also  
 [Publish Page, Project Designer](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)