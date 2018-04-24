---
title: "ClickOnce Deployment for Visual C++ Applications | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ClickOnce Deployment for Visual C++ Applications
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ClickOnce Deployment for Visual C++ Applications](https://docs.microsoft.com/cpp/ide/clickonce-deployment-for-visual-cpp-applications).  
  
  
INCLUDE[vsprvs](../includes/vsprvs-md.md)] provides two different technologies for deploying Windows applications: ClickOnce deployment or [Windows Installer](http://msdn.microsoft.com/library/cc185688) deployment.  
  
## ClickOnce Deployment in C++  
 The [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] development environment does not directly support deployment of [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] projects with [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)], but tools are available to use it.  
  
> [!NOTE]
>  [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] does support [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)] in the [!INCLUDE[csprcs](../includes/csprcs-md.md)] and [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] development environments. If your [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] project is a dependency of a [!INCLUDE[csprcs](../includes/csprcs-md.md)] project, you can publish the application (including its dependencies) using [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)] deployment from the [!INCLUDE[csprcs](../includes/csprcs-md.md)] development environment.  
  
 To deploy a [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] application using [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)], you first have to build a [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md) and a [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md) using the [Mage.exe (Manifest Generation and Editing Tool)](../Topic/Mage.exe%20\(Manifest%20Generation%20and%20Editing%20Tool\).md) or its graphical user interface version (for information, see [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](../Topic/MageUI.exe%20\(Manifest%20Generation%20and%20Editing%20Tool,%20Graphical%20Client\).md)).  
  
 You first use Mage.exe to build the application manifest; the resulting file will have the extension .manifest. You then use Mage.exe to build the deployment manifest; the resulting file will have the extension .application. You then sign the manifests.  
  
 The application manifest must specify the target processor (**x86**, **x64**, or **ARM**). See [Deploying Prerequisites for 64-bit Applications](../Topic/Deploying%20Prerequisites%20for%2064-bit%20Applications.md) for information on these options.  
  
 Also, the name of the application and deployment manifests must be different from the name of the C++ application. This avoids conflict between the application manifest created by Mage.exe and the external manifest that is part of the C++ application.  
  
 Your deployment will need to install any [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] libraries on which your application depends. To determine the dependencies for a particular application, you can use depends.exe or the DUMPBIN utility with the /DEPENDENTS option. For more information on dependencies, see [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). You might need to run VCRedist.exe; this utility installs [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] libraries on the target computer.  
  
 You may also need to build a bootstrapper (prerequisites installer) for your application to deploy prerequisite components; for information on the bootstrapper, see [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md).  
  
 For a more detailed description of the technology, see [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md). For a detailed example of [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)] deployment, see [Walkthrough: Manually Deploying a ClickOnce Application](../Topic/Walkthrough:%20Manually%20Deploying%20a%20ClickOnce%20Application.md).  
  
## See Also  
 [Mage.exe (Manifest Generation and Editing Tool)](../Topic/Mage.exe%20\(Manifest%20Generation%20and%20Editing%20Tool\).md)   
 [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](../Topic/MageUI.exe%20\(Manifest%20Generation%20and%20Editing%20Tool,%20Graphical%20Client\).md)   
 [Makecert.exe (Certificate Creation Tool)](https://msdn.microsoft.com/library/windows/desktop/aa386968)   
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Deploying Applications, Services, and Components](../Topic/Deploying%20Applications,%20Services,%20and%20Components.md)   
 [Windows Installer Deployment](http://msdn.microsoft.com/en-us/121be21b-b916-43e2-8f10-8b080516d2a0)   
 [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md)   
 [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)

