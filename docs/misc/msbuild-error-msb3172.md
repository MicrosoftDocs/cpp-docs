---
title: "MSBuild Error MSB3172 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.ReadInputManifestFailed"
helpviewer_keywords: 
  - "MSB3172"
ms.assetid: aa7291db-1f36-41e7-a510-90cd4daaa89d
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
# MSBuild Error MSB3172
**MSB3172: Unable to read manifest '\<file>'. '\<error>'**  
  
 This error is generated when the build process encounters a general problem reading a manifest file. The error message contains the file name followed by more detailed information about what went wrong.  
  
 You might have added an assembly or a manifest file as a content file. You should use the **Add Reference** command instead of **Add File** so that the dependent assembly is properly referenced by the project system. More sophisticated projects commonly mark the .exe.manifest in the bin folder as a project file, but you should avoid doing so. The hidden app.manifest file becomes the .exe.manifest file and can be edited manually for advanced scenarios.  
  
## See Also  
 [\<PackageFiles> Element](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)