---
title: "MSBuild Error MSB3112 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.DuplicateAssemblyIdentity"
helpviewer_keywords: 
  - "MSB3112"
ms.assetid: 90f25254-8148-49ea-9a5a-213feda16df0
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
# MSBuild Error MSB3112
**MSB3112: Two or more assemblies have the same identity '\<assembly>'.**  
  
 This warning is generated when more than one of the referenced assemblies have the same identity.  
  
### To correct this error  
  
-   Remove one of the referenced assemblies from the project.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/Library/3ea252d7-18a3-47d8-af83-47feebcfe82b)