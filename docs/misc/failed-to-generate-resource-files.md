---
title: "Failed to generate resource files"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.resource_prep_failed"
ms.assetid: 81ffe283-0782-4559-8dcd-edfec7d6fc8b
caps.latest.revision: 6
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
# Failed to generate resource files
There was a general failure of the project system to read a .resx file as part of the process of creating binary .resources files that the .NET Resource Manager can understand.  
  
 This error is usually caused by a bad .resx file.  
  
 This warning will not cause the build to fail. However, the .resx file for which this error is displayed will not be included as an assembly manifest resource in the project.  
  
## See Also  
 [File Types and File Extensions in Visual Basic and Visual C#](http://msdn.microsoft.com/en-us/f793852c-da06-4d52-a826-65f635844772)