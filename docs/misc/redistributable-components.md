---
title: "Redistributable Components | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "redistributable components"
  - "installation [Visual Studio SDK], redistributable components"
ms.assetid: 5072281f-3cb3-4985-bd93-c7981233bf92
caps.latest.revision: 20
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
# Redistributable Components
The [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] includes code that you can distribute to users according to the terms of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK license agreement. Such redistributable components include Windows Installer packages and merge modules that become part of your product's setup process, and source code that you compile into your VSPackages.  
  
 The following table describes the redistributable components that are included in the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK. The components can be found in *Visual Studio SDK installation path*\VisualStudioIntegration\Redistributables\\.  
  
|File name|Description|  
|---------------|-----------------|  
|VSSDKTestHost.exe|You can install this executable as part of your installation.|  
  
## Installing Redistributable Packages  
 Redistributable components that install executable code are provided as Windows Installer packages (.msi files) so that Microsoft can provide updates if they are required to address security vulnerabilities or other critical bugs.  
  
 Because Windows Installer allows for only one package to install at a time, installing a redistributable package requires that you use a separate executable program that installs several packages sequentially. Such a program is often called a *chainer* or a *bootstrapper*.  
  
> [!IMPORTANT]
>  *Nested installation* (also known as *concurrent installation*) is discouraged in Windows Installer because a "nested" product cannot be patched independently. It can be patched only by the product that installed it. Because the [!INCLUDE[vssdk_current_long](../misc/includes/vssdk_current_long_md.md)] redistributable packages install files to shared directories and must support independent patching, they must not be installed by using a nested installation.  
  
## See Also  
 [Releasing a Product](../misc/releasing-a-visual-studio-integration-product.md)