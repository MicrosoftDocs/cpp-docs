---
description: "Learn more about: Redistributing Components By Using Merge Modules"
title: "Redistributing Components By Using Merge Modules"
ms.date: "11/04/2016"
helpviewer_keywords: ["merge modules, using", "redistributing applications, using merge modules"]
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
---
# Redistributing Components By Using Merge Modules

Visual Studio includes [merge modules](/windows/win32/Msi/about-merge-modules) for each Visual C++ component that's licensed to be redistributed with an application. When a merge module is compiled in a Windows Installer setup file, it enables the deployment of specific DLLs to computers that have a specific platform. In your setup file, specify that the merge modules are prerequisites for your application. When Visual Studio is installed, the merge modules are installed in \Program Files\Common Files\Merge Modules\\. (Only non-debug versions of Visual C++ DLLs may be redistributed.) For more information and a link to a list of merge modules that are licensed for redistribution, see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md).

You can use merge modules to enable the installation of redistributable Visual C++ DLLs into the %SYSTEMROOT%\system32\ folder. (Visual Studio itself uses this technique.) However, installation to this folder will fail unless the installing user has administrator rights.

We recommend that you not use merge modules except when you don't have to service your application and you don't have dependencies on more than one version of the DLLs. Merge modules for different versions of the same DLL cannot be included in one installer, and merge modules make it difficult to service DLLs independently of your application. Instead, we recommend that you install a Visual C++ Redistributable Package.

## See also

[Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)
