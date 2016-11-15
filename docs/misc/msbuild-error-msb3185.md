---
title: "MSBuild Error MSB3185 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.NoEntryPoint"
helpviewer_keywords: 
  - "MSB3185"
ms.assetid: 032c63c5-d662-42ba-84e1-e3ccca8cee05
caps.latest.revision: 11
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
# MSBuild Error MSB3185
**MSB3185: EntryPoint not specified for manifest.**  
  
 This error is generated when a manifest does not specify an entry point. This error can apply to both the application manifest and the deployment manifest.  
  
### To correct this error  
  
-   If using the GenerateApplicationManifest task, make sure that you specify a valid entry point or set the TargetFrameworkVersion property to "v3.5" or higher. For an application manifest, a valid entry point is an .exe file.  
  
-   If using the GenerateDeploymentManifest task, make sure that you specify valid entry points in your manifests. For a deployment manifest, a valid entry point is an application manifest.  
  
## See Also  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A>   
 [Publish Page, Project Designer](/visualstudio/ide/reference/publish-page-project-designer)   
 [\<PackageFiles> Element](http://msdn.microsoft.com/Library/3ea252d7-18a3-47d8-af83-47feebcfe82b)   
 [MSBuild Error MSB3116](../misc/msbuild-error-msb3116.md)   
 [MSBuild Error MSB3117](../misc/msbuild-error-msb3117.md)   
 [MSBuild Error MSB3118](../misc/msbuild-error-msb3118.md)   
 [MSBuild Error MSB3174](../misc/msbuild-error-msb3174.md)