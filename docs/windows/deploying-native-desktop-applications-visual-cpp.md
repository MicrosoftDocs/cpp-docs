---
description: "Learn more about: Deploying Native Desktop Applications (Visual C++)"
title: "Deploying Native Desktop Applications (Visual C++)"
ms.date: "05/11/2018"
helpviewer_keywords: ["deploying applications [C++]", "application deployment [C++]", "Visual C++, application deployment", "application deployment [C++], about application deployment", "deploying applications [C++], about deploying applications", "distributing applications [C++]"]
ms.assetid: 37f1691e-d67c-41e4-926e-528a237a9bac
ms.topic: "overview"
---
# Deploying Native Desktop Applications (Visual C++)

Deployment is the process by which you distribute a finished application or component to be installed on other computers. Deployment planning starts when an application is created on a developer's computer. Deployment ends when the application is installed and ready to run on a user's computer.

Visual Studio provides different technologies for deploying Windows applications. These include ClickOnce deployment and Windows Installer deployment.

- ClickOnce can be used to deploy C++ applications that target the common language runtime (CLR)—mixed, pure, and verifiable assemblies. Although you can use Windows Installer to deploy a managed application, we recommend that you use ClickOnce because it takes advantage of .NET Framework security features such as manifest signing. ClickOnce does not support deployment of native C++ applications. For more information, see [ClickOnce Deployment for Visual C++ Applications](clickonce-deployment-for-visual-cpp-applications.md).

- Windows Installer technology can be used to deploy either native C++ applications or C++ applications that target the CLR.

The articles in this section of the documentation discuss how to ensure that a native Visual C++ application runs on any computer that provides a supported target platform, which files you must include in an installation package, and the recommended ways to redistribute the components that your application depends on.

## In This Section

- [Deployment in Visual C++](deployment-in-visual-cpp.md)

- [Deployment Concepts](deployment-concepts.md)

- [Understanding the Dependencies of a Visual C++ Application](understanding-the-dependencies-of-a-visual-cpp-application.md)

- [Determining Which DLLs to Redistribute](determining-which-dlls-to-redistribute.md)

- [Choosing a Deployment Method](choosing-a-deployment-method.md)

- [Universal CRT deployment](universal-crt-deployment.md).

- [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)

- [Deployment Examples](deployment-examples.md)

- [Redistributing Web Client Applications](redistributing-web-client-applications.md)

- [ClickOnce Deployment for Visual C++ Applications](clickonce-deployment-for-visual-cpp-applications.md)

- [Running a C++ /clr Application on a Previous Runtime Version](running-a-cpp-clr-application-on-a-previous-runtime-version.md)

## Related Sections

- [Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)

- [Deployment](/dotnet/framework/deployment/index)

- [Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
