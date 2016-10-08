---
title: "Deploying Native Desktop Applications (Visual C++)"
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
ms.assetid: 37f1691e-d67c-41e4-926e-528a237a9bac
caps.latest.revision: 28
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
# Deploying Native Desktop Applications (Visual C++)
Deployment is the process by which you distribute a finished application or component to be installed on other computers. Deployment planning starts when an application is created on a developer's computer. Deployment ends when the application is installed and ready to run on a user's computer.  
  
 Visual Studio provides different technologies for deploying Windows applications. These include ClickOnce deployment and Windows Installer deployment.  
  
-   ClickOnce can be used to deploy C++ applications that target the common language runtime (CLR)—mixed, pure, and verifiable assemblies. Although you can use Windows Installer to deploy a managed application, we recommend that you use ClickOnce because it takes advantage of .NET Framework security features such as manifest signing. ClickOnce does not support deployment of native C++ applications. For more information, see [ClickOnce Deployment for Visual C++ Applications](../VS_visualcpp/ClickOnce-Deployment-for-Visual-C---Applications.md).  
  
-   Windows Installer technology can be used to deploy either native C++ applications or C++ applications that target the CLR.  
  
 The articles in this section of the documentation discuss how to ensure that a native Visual C++ application runs on any computer that provides a supported target platform, which files you must include in an installation package, and the recommended ways to redistribute the components that your application depends on.  
  
## In This Section  
 [Deployment in Visual C++](../VS_visualcpp/Deployment-in-Visual-C--.md)  
  
 [Deployment Concepts](../VS_visualcpp/Deployment-Concepts.md)  
  
 [Understanding the Dependencies of a Visual C++ Application](../VS_visualcpp/Understanding-the-Dependencies-of-a-Visual-C---Application.md)  
  
 [Determining Which DLLs to Redistribute](../VS_visualcpp/Determining-Which-DLLs-to-Redistribute.md)  
  
 [Choosing a Deployment Method](../VS_visualcpp/Choosing-a-Deployment-Method.md)  
  
 [Redistributing Visual C++ Files](../VS_visualcpp/Redistributing-Visual-C---Files.md)  
  
 [Deployment Examples](../VS_visualcpp/Deployment-Examples.md)  
  
 [Redistributing Web Client Applications](../VS_visualcpp/Redistributing-Web-Client-Applications.md)  
  
 [ClickOnce Deployment for Visual C++ Applications](../VS_visualcpp/ClickOnce-Deployment-for-Visual-C---Applications.md)  
  
 [Running a C++ /clr Application on a Previous Runtime Version](../VS_visualcpp/Running-a-C----clr-Application-on-a-Previous-Runtime-Version.md)  
  
## Related Sections  
 [Building C/C++ Isolated Applications and Side-by-side Assemblies](../VS_visualcpp/Building-C-C---Isolated-Applications-and-Side-by-side-Assemblies.md)  
  
 [Deployment](../Topic/Deploying%20the%20.NET%20Framework%20and%20Applications.md)  
  
 [Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies](../VS_visualcpp/Troubleshooting-C-C---Isolated-Applications-and-Side-by-side-Assemblies.md)