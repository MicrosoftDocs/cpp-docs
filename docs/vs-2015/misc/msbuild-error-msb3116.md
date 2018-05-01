---
title: "MSBuild Error MSB3116 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.HostInBrowserNotOnlineOnly"
helpviewer_keywords: 
  - "MSB3116"
ms.assetid: bf04c587-d0e2-4d68-bbff-da9a985ea70e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3116
**MSB3116: Application is marked to host in browser but is also marked for online and offline use. Please change your application to online only.**  
  
 When deploying a WPF Web Browser Application, you must set the <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A> property to `True`. When <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A> is set to `True`, you must set the <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.DeployManifest.Install%2A> property to `False` (to make the installation available online only). If the latter condition is not met, you will receive this error message.  
  
### To correct this error  
  
-   Set the <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.DeployManifest.Install%2A> property to `False`.  
  
## See Also  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.DeployManifest.Install%2A>   
 [Publish Page, Project Designer](http://msdn.microsoft.com/library/153527c6-8b95-4003-8e8e-03a489d0a629)