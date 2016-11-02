---
title: "MSBuild Error MSB3174 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.InvalidValue"
helpviewer_keywords: 
  - "MSB3174"
ms.assetid: 6f9a040c-7f21-40fd-bf74-03f99f265e79
caps.latest.revision: 12
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
# MSBuild Error MSB3174
**MSB3174: Invalid value for '\<file>'.**  
  
 This error is generated when the build process encounters a general problem while checking the format of a manifest file. The error message refers to the manifest file name.  
  
 Setting any one of the following parameters incorrectly will generate this error message. Each parameter listed is a <xref:Microsoft.Build.Tasks.GenerateApplicationManifest> or a <xref:Microsoft.Build.Tasks.GenerateDeploymentManifest> property such as <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion*> or <xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.MinimumRequiredVersion*>.  
  
 When the task is <xref:Microsoft.Build.Tasks.GenerateApplicationManifest>, the following requirements apply:  
  
|Parameter|Requirements|  
|---------------|------------------|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyName*>|Must be a valid file name.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyVersion*>|Has the same requirements as <xref:System.Version.#ctor*>. All octets must be greater than 0. Must specify all four octets. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.ClrVersion*>|Has the same requirements as <xref:System.Version.#ctor*>. All octets must be greater than 0. Must specify all four octets. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.OSVersion*>|Has the same requirements as <xref:System.Version.#ctor*>. All octets must be greater than 0. Must specify all four octets. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.Platform*>|Must be **AnyCPU**, **x86**, **x64**, or **Itanium**. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.ManifestType*>|Must be **Native** or **ClickOnce**.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.TargetCulture*>|Can be an empty string. Can also be a neutral culture (specified by the two-digit lowercase language code only, for example, "jp" for Japanese). Otherwise, this value has the same requirements as <xref:System.Globalization.CultureInfo.#ctor*>.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion*>|Must have the format v*#*.*#*. Must be later than v2.0. An empty string is acceptable.|  
  
 When the task is <xref:Microsoft.Build.Tasks.GenerateDeploymentManifest>, the following requirements apply:  
  
|Parameter|Requirements|  
|---------------|------------------|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyName*>|Must be a valid file name.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyVersion*>|Has the same requirements as <xref:System.Version.#ctor*>. All octets must be greater than 0. Must specify all four octets. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.MinimumRequiredVersion*>|Has the same requirements as <xref:System.Version.#ctor*>. All octets must be greater than 0. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.Platform*>|Must be **AnyCPU**, **x86**, **x64**, or **Itanium**. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.TargetCulture*>|Can be an empty string. Can also be a neutral culture (specified by the two-digit lowercase language code only, for example, "jp" for Japanese). Otherwise, this value has the same requirements as <xref:System.Globalization.CultureInfo.#ctor*>.|  
|<xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.UpdateMode*>|Must be **Foreground** or **Background**. An empty string is acceptable.|  
|<xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.UpdateUnit*>|Must be **Hours**, **Days**, or **Weeks**. An empty string is acceptable.|  
  
## See Also  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser*>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion*>   
 [Product and Package Schema Reference](/visual-studio/deployment/product-and-package-schema-reference)   
 [Publish Page, Project Designer](/visual-studio/ide/reference/publish-page-project-designer)   
 [MSBuild Error MSB3116](../misc/msbuild-error-msb3116.md)   
 [MSBuild Error MSB3117](../misc/msbuild-error-msb3117.md)   
 [MSBuild Error MSB3118](../misc/msbuild-error-msb3118.md)   
 [MSBuild Error MSB3185](../misc/msbuild-error-msb3185.md)