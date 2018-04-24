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
  
 To deploy a [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] application using [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)], you first have to build a [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243) and a [ClickOnce Deployment Manifest](http://msdn.microsoft.com/library/8457e615-e3b6-4990-8dcf-11bc590e4e9b) using the [Mage.exe (Manifest Generation and Editing Tool)](http://msdn.microsoft.com/library/77dfe576-2962-407e-af13-82255df725a1) or its graphical user interface version (for information, see [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](http://msdn.microsoft.com/library/f9e130a6-8117-49c4-839c-c988f641dc14)).  
  
 You first use Mage.exe to build the application manifest; the resulting file will have the extension .manifest. You then use Mage.exe to build the deployment manifest; the resulting file will have the extension .application. You then sign the manifests.  
  
 The application manifest must specify the target processor (**x86**, **x64**, or **ARM**). See [Deploying Prerequisites for 64-bit Applications](http://msdn.microsoft.com/library/87399e20-5510-41e4-b5b7-4a87c5773f21) for information on these options.  
  
 Also, the name of the application and deployment manifests must be different from the name of the C++ application. This avoids conflict between the application manifest created by Mage.exe and the external manifest that is part of the C++ application.  
  
 Your deployment will need to install any [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] libraries on which your application depends. To determine the dependencies for a particular application, you can use depends.exe or the DUMPBIN utility with the /DEPENDENTS option. For more information on dependencies, see [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). You might need to run VCRedist.exe; this utility installs [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] libraries on the target computer.  
  
 You may also need to build a bootstrapper (prerequisites installer) for your application to deploy prerequisite components; for information on the bootstrapper, see [Creating Bootstrapper Packages](http://msdn.microsoft.com/library/ba1a785b-693d-446b-bcae-b88cadee73d1).  
  
 For a more detailed description of the technology, see [ClickOnce Security and Deployment](http://msdn.microsoft.com/library/abab6d34-c3c2-45c1-a8b6-43c7d3131e7a). For a detailed example of [!INCLUDE[ndptecclick](../includes/ndptecclick-md.md)] deployment, see [Walkthrough: Manually Deploying a ClickOnce Application](http://msdn.microsoft.com/library/ccee6551-a1b9-4ca2-8845-9c1cf4ac2560).  
  
## See Also  
 [Mage.exe (Manifest Generation and Editing Tool)](http://msdn.microsoft.com/library/77dfe576-2962-407e-af13-82255df725a1)   
 [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](http://msdn.microsoft.com/library/f9e130a6-8117-49c4-839c-c988f641dc14)   
 [Makecert.exe (Certificate Creation Tool)](https://msdn.microsoft.com/library/windows/desktop/aa386968)   
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Deploying Applications, Services, and Components](http://msdn.microsoft.com/library/63fcdd5b-2e54-4210-9038-65bc23167725)   
 [Windows Installer Deployment](http://msdn.microsoft.com/en-us/121be21b-b916-43e2-8f10-8b080516d2a0)   
 [ClickOnce Security and Deployment](http://msdn.microsoft.com/library/abab6d34-c3c2-45c1-a8b6-43c7d3131e7a)   
 [Creating Bootstrapper Packages](http://msdn.microsoft.com/library/ba1a785b-693d-446b-bcae-b88cadee73d1)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)

