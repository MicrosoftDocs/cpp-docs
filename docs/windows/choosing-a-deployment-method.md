---
description: "Learn more about: Choosing a deployment method"
title: "Choose a deployment method"
ms.date: 06/28/2022
helpviewer_keywords: ["redistributing DLLs", "manifests [C++]", "DLLs [C++], redistributing", "side-by-side assemblies [C++]", "dynamic linking [C++]", "application deployment [C++], methods", "deploying applications [C++], methods", "static linking [C++]", "libraries [C++], application deployment issues"]
ms.assetid: fd8eb956-f4a0-4ffb-b401-328c73e66986
---
# Choose a deployment method

We recommend that you use Windows Installer for deployment. Windows Installer supports installation, repair, and uninstallation, and also supports atomic updating of application files, dependencies, and registry entries. Unless your Visual C++ application is self-contained and can be deployed by using a copy command, use Windows Installer.

> [!NOTE]
> Although [ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment) deployment for Visual C++ native applications is possible in Visual Studio, it requires extra steps. For more information, see [ClickOnce deployment for Visual C++ applications](clickonce-deployment-for-visual-cpp-applications.md).

## Visual C++ libraries are shared DLLs

Because Visual C++ libraries are installed in the *`%windir%\system32\`* directory by the Visual Studio installer, when you develop a Visual C++ application that depends on them, it will run as expected. However, most computers don't have Visual Studio installed. To deploy the application to these computers, we recommend that you ensure that the libraries are installed together with your application.

## Redistributable Visual C++ libraries

In your deployments, you can redistribute any version of a Visual C++ library that's licensed for redistribution. Here are three ways to deploy them:

- Central deployment by using Visual C++ Redistributable packages. This approach is the one we recommend. A Visual C++ Redistributable package is an executable that installs Visual C++ libraries as shared DLLs in *`%windir%\system32\`*. (Installation in this folder requires administrator rights.) You can create a *bootstrapper*, a script or setup program that runs the Redistributable package before installing your application on the target computer. Redistributable packages are available for the x86, x64, ARM64, and ARM platforms. For more information on where to find the package files, see [Locate the Redistributable files](redistributing-visual-cpp-files.md#locate-the-redistributable-files). For information about how to use a Redistributable package, see [Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package](deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).

- Central deployment by using merge modules. This method is deprecated because libraries deployed this way can't be updated automatically by Windows Update. You can use merge modules to install a particular Visual C++ library as a shared DLL in *`%windir%\system32\`*. (Installation to this folder requires administrator rights.) Merge modules become part of the *`.msi`* installer file for your application. Because they've been deprecated, Visual C++ Redistributable merge modules are an optional, installable component in Visual Studio 2022 and 2019. They're installed by default in Visual Studio 2017 and 2015. For more information, see [Where to find merge module files](redistributing-components-by-using-merge-modules.md#where-to-find-merge-module-files).

- Local deployment. Local deployment isn't recommended in most situations. In local deployment, you copy particular Visual C++ DLLs from your Visual Studio installation—typically in *`\%VCINSTALLDIR%Redist\MSVC\<version>\<target-platform>\`*—and install them on target computers in the same folder as the application executable. You can use this deployment method to enable installation by users who don't have administrator rights. Or, for applications that can be run from a thumb drive or a network share.

If a deployment uses Redistributable merge modules, the user who installs the app must have administrative rights. Otherwise, the Visual C++ DLLs aren't installed and the application might not run. Application installers that allow installation on a per-user basis install the libraries in a shared location that impacts all users of the system. You can use local deployment to install the required Visual C++ DLLs in the directory of a particular user's application. This approach won't affect other users or require administrator rights. Because it can create serviceability issues, we don't recommend local deployment of Visual C++ Redistributable DLLs.

Incorrect deployment of Visual C++ libraries may cause run-time errors during execution of an application that depends on them. When the operating system loads the application, it uses the search order described in [`LoadLibraryEx`](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw).

## Dynamic linking is better than static linking

We recommend that you avoid static linking when you redistribute Visual C++ libraries. Although static linking almost never significantly improves application performance, it almost always makes servicing more expensive. For example, consider a statically linked application with a library that's been updated with security enhancements. The application can't benefit unless it's recompiled and redeployed. Instead, we recommend that you dynamically link your applications to the libraries they depend on. Then the libraries can be updated wherever they're deployed.

## See also

[Deploying desktop applications](deploying-native-desktop-applications-visual-cpp.md)\
[ClickOnce security and deployment](/visualstudio/deployment/clickonce-security-and-deployment)\
[Deployment examples](deployment-examples.md)
