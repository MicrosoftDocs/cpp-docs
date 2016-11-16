---
title: "Deploying Native Desktop Applications (Visual C++) | Microsoft Docs"
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
  - "deploying applications [C++]"
  - "application deployment [C++]"
  - "Visual C++, application deployment"
  - "application deployment [C++], about application deployment"
  - "deploying applications [C++], about deploying applications"
  - "distributing applications [C++]"
ms.assetid: 37f1691e-d67c-41e4-926e-528a237a9bac
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
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
# Deploying Native Desktop Applications (Visual C++)
Deployment is the process by which you distribute a finished application or component to be installed on other computers. Deployment planning starts when an application is created on a developer's computer. Deployment ends when the application is installed and ready to run on a user's computer.  
  
 Visual Studio provides different technologies for deploying Windows applications. These include [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] deployment and Windows Installer deployment.  
  
-   [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] can be used to deploy C++ applications that target the common language runtime (CLR)—mixed, pure, and verifiable assemblies. Although you can use Windows Installer to deploy a managed application, we recommend that you use [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] because it takes advantage of .NET Framework security features such as manifest signing. [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] does not support deployment of native C++ applications. For more information, see [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md).  
  
-   Windows Installer technology can be used to deploy either native C++ applications or C++ applications that target the CLR.  
  
 The articles in this section of the documentation discuss how to ensure that a native Visual C++ application runs on any computer that provides a supported target platform, which files you must include in an installation package, and the recommended ways to redistribute the components that your application depends on.  
  
## In This Section  
 [Deployment in Visual C++](../ide/deployment-in-visual-cpp.md)  
  
 [Deployment Concepts](../ide/deployment-concepts.md)  
  
 [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md)  
  
 [Determining Which DLLs to Redistribute](../ide/determining-which-dlls-to-redistribute.md)  
  
 [Choosing a Deployment Method](../ide/choosing-a-deployment-method.md)  
  
 [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md)  
  
 [Deployment Examples](../ide/deployment-examples.md)  
  
 [Redistributing Web Client Applications](../ide/redistributing-web-client-applications.md)  
  
 [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md)  
  
 [Running a C++ /clr Application on a Previous Runtime Version](../ide/running-a-cpp-clr-application-on-a-previous-runtime-version.md)  
  
## Related Sections  
 [Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)  
  
 [Deployment](http://msdn.microsoft.com/Library/238d8284-6042-4a38-a7f6-1ee8efd719da)  
  
 [Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)