---
title: "MSBuild Error MSB3110 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.IdentityFileNameMismatch"
helpviewer_keywords: 
  - "MSB3110"
ms.assetid: 58bf16bf-cf5b-4751-988d-c416952f216e
caps.latest.revision: 5
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
# MSBuild Error MSB3110
**MSB3110: Assembly '\<assembly>' has mismatched identity '\<AssemblyIdentity>', expected filename: '\<file>'.**  
  
 This error is generated when the assembly file name obtained from the assembly identity does not match the actual file name.  
  
### To correct this error  
  
-   Correct the assembly file name so that it matches the assembly identity.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/Library/3ea252d7-18a3-47d8-af83-47feebcfe82b)