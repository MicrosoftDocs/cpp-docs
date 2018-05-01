---
title: "The user options settings file for this project is missing the &#39;section&#39; section | Microsoft Docs"
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
  - "vs.tasklisterror.peruserfile_sectionerr"
ms.assetid: 576070f5-76b6-46e4-8aba-83442521027f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The user options settings file for this project is missing the &#39;section&#39; section
The Build node is missing from the.vbproj.user or .csproj.user file.  
  
 The Build section encompasses debugging settings. If this section is missing, your debugging settings will not be loaded and will take on default values.  
  
 The situation is most likely caused by editing the project file by hand.  
  
 The project system will automatically rewrite the per-user project file when the project is closed.  
  
 This is an informational warning.  
  
## See Also  
 [Project Files](../ide/project-files.md)   
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)