---
title: "MSBuild Error MSB3187 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.PlatformMismatch"
helpviewer_keywords: 
  - "MSB3187"
ms.assetid: c5e93c14-b099-4176-bf1b-dbecc47fb3fd
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
# MSBuild Error MSB3187
**MSB3187: Referenced assembly '\<assembly>' targets a different processor than the application.**  
  
 This warning is generated when the application's target platform (processor architecture) is set to neutral (MSIL) and the referenced assembly is not neutral, or if the application's architecture is not neutral and the dependency is neutral. Also, if both are not platform-neutral, then their architecture must match. In addition, application architecture and entry point assembly architecture must always match.  
  
### To correct this error  
  
-   Make sure that the application's target platform (processor architecture) matches all referenced assemblies and the entry point assembly architecture.  
  
## See Also  
 [Advanced Compiler Settings Dialog Box (Visual Basic)](/visual-studio/ide/reference/advanced-compiler-settings-dialog-box-visual-basic)   
 [Build Page, Project Designer (C#)](/visual-studio/ide/reference/build-page-project-designer-csharp)