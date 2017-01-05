---
title: "ClickOnce Deployment for Visual C++ Applications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "deploying applications [C++], ClickOnce"
  - "application deployment [C++], ClickOnce"
  - "ClickOnce deployment [C++], C++ applications"
ms.assetid: 9988c546-0936-452c-932f-9c76daa42157
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# ClickOnce Deployment for Visual C++ Applications
[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] provides two different technologies for deploying Windows applications: ClickOnce deployment or [Windows Installer](http://msdn.microsoft.com/library/cc185688) deployment.  
  
## ClickOnce Deployment in C++  
 The [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] development environment does not directly support deployment of [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] projects with [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)], but tools are available to use it.  
  
> [!NOTE]
>  [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] does support [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] in the [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] and [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] development environments. If your [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] project is a dependency of a [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] project, you can publish the application (including its dependencies) using [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] deployment from the [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] development environment.  
  
 To deploy a [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] application using [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)], you first have to build a [ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest) and a [ClickOnce Deployment Manifest](/visualstudio/deployment/clickonce-deployment-manifest) using the [Mage.exe (Manifest Generation and Editing Tool)](http://msdn.microsoft.com/Library/77dfe576-2962-407e-af13-82255df725a1) or its graphical user interface version (for information, see [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](http://msdn.microsoft.com/Library/f9e130a6-8117-49c4-839c-c988f641dc14)).  
  
 You first use Mage.exe to build the application manifest; the resulting file will have the extension .manifest. You then use Mage.exe to build the deployment manifest; the resulting file will have the extension .application. You then sign the manifests.  
  
 The application manifest must specify the target processor (**x86**, **x64**, or **ARM**). See [Deploying Prerequisites for 64-bit Applications](/visualstudio/deployment/deploying-prerequisites-for-64-bit-applications) for information on these options.  
  
 Also, the name of the application and deployment manifests must be different from the name of the C++ application. This avoids conflict between the application manifest created by Mage.exe and the external manifest that is part of the C++ application.  
  
 Your deployment will need to install any [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries on which your application depends. To determine the dependencies for a particular application, you can use depends.exe or the DUMPBIN utility with the /DEPENDENTS option. For more information on dependencies, see [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). You might need to run VCRedist.exe; this utility installs [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries on the target computer.  
  
 You may also need to build a bootstrapper (prerequisites installer) for your application to deploy prerequisite components; for information on the bootstrapper, see [Creating Bootstrapper Packages](/visualstudio/deployment/creating-bootstrapper-packages).  
  
 For a more detailed description of the technology, see [ClickOnce Security and Deployment](/visualstudio/deployment/clickonce-security-and-deployment). For a detailed example of [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] deployment, see [Walkthrough: Manually Deploying a ClickOnce Application](http://msdn.microsoft.com/Library/ccee6551-a1b9-4ca2-8845-9c1cf4ac2560).  
  
## See Also  
 [Mage.exe (Manifest Generation and Editing Tool)](http://msdn.microsoft.com/Library/77dfe576-2962-407e-af13-82255df725a1)   
 [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](http://msdn.microsoft.com/Library/f9e130a6-8117-49c4-839c-c988f641dc14)   
 [Makecert.exe (Certificate Creation Tool)](https://msdn.microsoft.com/library/windows/desktop/aa386968)   
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Deploying Applications, Services, and Components](/visualstudio/deployment/deploying-applications-services-and-components)   
 [Windows Installer Deployment](http://msdn.microsoft.com/en-us/121be21b-b916-43e2-8f10-8b080516d2a0)   
 [ClickOnce Security and Deployment](/visualstudio/deployment/clickonce-security-and-deployment)   
 [Creating Bootstrapper Packages](/visualstudio/deployment/creating-bootstrapper-packages)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)