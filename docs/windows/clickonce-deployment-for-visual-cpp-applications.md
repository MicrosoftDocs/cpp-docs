---
description: "Learn more about: ClickOnce Deployment for Microsoft C++ Applications"
title: "ClickOnce Deployment for Microsoft C++ Applications"
ms.date: "11/04/2016"
helpviewer_keywords: ["deploying applications [C++], ClickOnce", "application deployment [C++], ClickOnce", "ClickOnce deployment [C++], C++ applications"]
---
# ClickOnce Deployment for Microsoft C++ Applications

Visual Studio provides two different technologies for deploying Windows applications: ClickOnce deployment or [Windows Installer](/windows/win32/Msi/windows-installer-portal) deployment.

## ClickOnce Deployment in C++

> [!NOTE]
> ClickOnce does not support deployment of native C++ applications. However, you can use ClickOnce to deploy a Microsoft C++ application if it is a dependency of a C# or VB.NET project. For example, if you have a C# project that depends on a C++ project, you can publish the application (including its dependencies) using ClickOnce deployment from the C# development environment. If you have a Visual Basic .NET project that depends on a C++ project, you can publish the application (including its dependencies) using ClickOnce deployment from the Visual Basic .NET development environment.

To deploy a C++ application using ClickOnce, you first have to build a [ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest) and a [ClickOnce Deployment Manifest](/visualstudio/deployment/clickonce-deployment-manifest) using the [Mage.exe (Manifest Generation and Editing Tool)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool) or its graphical user interface version (for information, see [MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)).

You first use Mage.exe to build the application manifest; the resulting file will have the extension .manifest. You then use Mage.exe to build the deployment manifest; the resulting file will have the extension `.application`. You then sign the manifests.

The application manifest must specify the target processor (**x86**, **x64**, or **ARM**). See [Deploying Prerequisites for 64-bit Applications](/visualstudio/deployment/deploying-prerequisites-for-64-bit-applications) for information on these options.

Also, the name of the application and deployment manifests must be different from the name of the C++ application. This avoids conflict between the application manifest created by Mage.exe and the external manifest that is part of the C++ application.

Your deployment needs to install any C++ libraries on which your application depends. To determine the dependencies for a particular application, you can use depends.exe or the `DUMPBIN` utility with the `/DEPENDENTS` option. For more information on dependencies, see [Understanding the Dependencies of a Microsoft C++ Application](understanding-the-dependencies-of-a-visual-cpp-application.md). You might need to run VCRedist.exe; this utility installs C++ libraries on the target computer.

You may also need to build a bootstrapper (prerequisites installer) for your application to deploy prerequisite components; for information on the bootstrapper, see [Creating Bootstrapper Packages](/visualstudio/deployment/creating-bootstrapper-packages).

For a more detailed description of the technology, see [ClickOnce Security and Deployment](/visualstudio/deployment/clickonce-security-and-deployment). For a detailed example of ClickOnce deployment, see [Walkthrough: Manually Deploying a ClickOnce Application](/visualstudio/deployment/walkthrough-manually-deploying-a-clickonce-application).

## See also

[Mage.exe (Manifest Generation and Editing Tool)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool)<br>
[MageUI.exe (Manifest Generation and Editing Tool, Graphical Client)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)<br>
[Makecert.exe (Certificate Creation Tool)](/windows/win32/SecCrypto/makecert)<br>
[Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)<br>
[Deploying Applications, Services, and Components](/visualstudio/deployment/deploying-applications-services-and-components)<br>
[ClickOnce Security and Deployment](/visualstudio/deployment/clickonce-security-and-deployment)<br>
[Creating Bootstrapper Packages](/visualstudio/deployment/creating-bootstrapper-packages)<br>
[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br>
[Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)
