---
title: "ClickOnce Deployment for Visual C++ Applications"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9988c546-0936-452c-932f-9c76daa42157
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# ClickOnce Deployment for Visual C++ Applications
Visual Studio provides two different technologies for deploying Windows applications: ClickOnce deployment or [Windows Installer](http://msdn.microsoft.com/library/cc185688) deployment.  
  
## ClickOnce Deployment in C++  
 The Visual C++ development environment does not directly support deployment of Visual C++ projects with ClickOnce, but tools are available to use it.  
  
> [!NOTE]
>  Visual Studio does support ClickOnce in the Visual C# and Visual Basic development environments. If your Visual C++ project is a dependency of a Visual C# project, you can publish the application (including its dependencies) using ClickOnce deployment from the Visual C# development environment.  
  
 To deploy a Visual C++ application using ClickOnce, you first have to build a [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md) and a [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md) using the [Mage.exe (Manifest Generation and Editing Tool)](../Topic/Mage.exe%20\(Manifest%20Generation%20and%20Editing%20Tool\).md) or its graphical user interface version (for information, see [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](../Topic/MageUI.exe%20\(Manifest%20Generation%20and%20Editing%20Tool,%20Graphical%20Client\).md)).  
  
 You first use Mage.exe to build the application manifest; the resulting file will have the extension .manifest. You then use Mage.exe to build the deployment manifest; the resulting file will have the extension .application. You then sign the manifests.  
  
 The application manifest must specify the target processor (**x86**, **x64**, or **ARM**). See [Deploying Prerequisites for 64-bit Applications](../Topic/Deploying%20Prerequisites%20for%2064-bit%20Applications.md) for information on these options.  
  
 Also, the name of the application and deployment manifests must be different from the name of the C++ application. This avoids conflict between the application manifest created by Mage.exe and the external manifest that is part of the C++ application.  
  
 Your deployment will need to install any Visual C++ libraries on which your application depends. To determine the dependencies for a particular application, you can use depends.exe or the DUMPBIN utility with the /DEPENDENTS option. For more information on dependencies, see [Understanding the Dependencies of a Visual C++ Application](../VS_visualcpp/Understanding-the-Dependencies-of-a-Visual-C---Application.md). You might need to run VCRedist.exe; this utility installs Visual C++ libraries on the target computer.  
  
 You may also need to build a bootstrapper (prerequisites installer) for your application to deploy prerequisite components; for information on the bootstrapper, see [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md).  
  
 For a more detailed description of the technology, see [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md). For a detailed example of ClickOnce deployment, see [Walkthrough: Manually Deploying a ClickOnce Application](../Topic/Walkthrough:%20Manually%20Deploying%20a%20ClickOnce%20Application.md).  
  
## See Also  
 [Mage.exe (Manifest Generation and Editing Tool)](../Topic/Mage.exe%20\(Manifest%20Generation%20and%20Editing%20Tool\).md)   
 [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](../Topic/MageUI.exe%20\(Manifest%20Generation%20and%20Editing%20Tool,%20Graphical%20Client\).md)   
 [Makecert.exe (Certificate Creation Tool)](../Topic/Makecert.exe%20\(Certificate%20Creation%20Tool\).md)   
 [Deploying Desktop Applications](../VS_visualcpp/Deploying-Native-Desktop-Applications--Visual-C---.md)   
 [Deploying Applications, Services, and Components](../Topic/Deploying%20Applications,%20Services,%20and%20Components.md)   
 [Windows Installer Deployment](assetId:///121be21b-b916-43e2-8f10-8b080516d2a0)   
 [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md)   
 [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)   
 [Native and .NET Interoperability](../VS_visualcpp/Native-and-.NET-Interoperability.md)