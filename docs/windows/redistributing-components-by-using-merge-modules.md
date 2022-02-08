---
description: "Learn more about: Redistributing Components By Using Merge Modules"
title: "Redistributing Components By Using Merge Modules"
ms.date: 02/07/2022
helpviewer_keywords: ["merge modules, using", "redistributing applications, using merge modules"]
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
---
# Redistributing components by using merge modules

> [!IMPORTANT]
> Merge modules (*`.msm`* files) for Visual C++ Redistributable files are deprecated. We don't recommend you use them for application deployment. Instead, we recommend central deployment of the Visual C++ Redistributable package. Central deployment by a redistributable package makes it possible for Microsoft to service runtime library files independently. And, an uninstall of your app can't break other applications that also use central deployment. When you use a Redistributable package for central deployment, you aren't responsible for tracking and maintaining the runtime libraries. Otherwise, an update to the runtime library files requires you to update and redeploy your *`.msi`* installer. Your app could be vulnerable to bugs or security issues until you do.

Visual Studio includes [merge modules](/windows/win32/Msi/about-merge-modules) for each Visual C++ component that's licensed for redistribution with an application. When a merge module is compiled in a Windows Installer setup file, it enables the deployment of Visual C++ Redistributable DLLs to computers that have a specific platform. In your setup file, specify that the merge modules are prerequisites for your application.

You can use merge modules to install Visual C++ Redistributable DLLs into the *`%SYSTEMROOT%\system32\`* folder. However, installation to this folder will fail unless the installing user has administrator rights.

We don't recommend you use the Visual C++ Redistributable merge modules. Merge modules are only appropriate when you don't have to service your application, and when you don't have dependencies on more than one version of the DLLs. You can't include merge modules for different versions of the same DLL in one installer. And merge modules make it difficult to service DLLs independently of your application. Instead, we recommend that you install a Visual C++ Redistributable Package.

## Where to find merge module files

In Visual Studio 2022 and 2019, merge module files are part of an optional installable component named **C++ \<version> Redistributable MSMs** in the Visual Studio Installer. The merge modules are installed by default as part of a C++ install in Visual Studio 2017 and Visual Studio 2015. When installed in Visual Studio 2022, you'll find the Visual C++ Redistributable merge modules in *`%VCINSTALLDIR%Redist\MSVC\v143\MergeModules`*. In the latest version of Visual Studio 2019, the merge modules are in *`%VCINSTALLDIR%Redist\MSVC\v142\MergeModules`*. In both Visual Studio 2019 and Visual Studio 2017, they're also found in *`%VCToolsRedistDir%MergeModules`*. In Visual Studio 2015, they're found in *`Program Files [(x86)]\Common Files\Merge Modules`*. For more information and a link to a list of merge modules that are licensed for redistribution, see [Redistributing Visual C++ files](redistributing-visual-cpp-files.md).

## See also

[Redistributing Visual C++ files](redistributing-visual-cpp-files.md)
