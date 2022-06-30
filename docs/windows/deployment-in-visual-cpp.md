---
description: "Learn more about: Deployment in Visual C++"
title: "Deployment in Visual C++"
ms.date: 06/28/2022
helpviewer_keywords: ["deploying applications [C++]", "application deployment [C++]"]
ms.assetid: d4b4ffc0-d2bd-4e4a-84a6-62f1c26f6a09
ms.custom: intro-deployment
---
# Deployment in Visual C++

Installation of your application on a computer other than your development computer is known as *deployment*. When you deploy a Visual C++ application to another computer, you must install both the application and any library files it depends on. Visual Studio enables three ways to deploy the Visual C++ libraries together with your application: *central deployment*, *local deployment*, and *static linking*. Central deployment puts the library files under the Windows directory, where all applications can access them automatically. Local deployment puts the library files in the same directory as your application. You must redeploy any locally deployed libraries yourself to update them. Static linking binds the library code into your application. You have to recompile and redeploy your application to take advantage of any updates to the libraries when you use static linking.

In Visual Studio 2015, the Microsoft C Runtime library was refactored into version-specific local library components, and a new Universal C Runtime library that is now part of Windows. For details on deployment of the Universal CRT, see [Universal CRT deployment](universal-crt-deployment.md).

## Central deployment

In central deployment, library DLL files are installed in the *`Windows\System32`* directory, or for 32-bit library files on x64 systems, the *`Windows\SysWow64`* directory. Centrally deployed library files are available to other applications.

To centrally deploy Visual C++ libraries, you can use one of these two sources for the files to install:

- *Redistributable package* files. These files are stand-alone command-line executables that contain all the Visual C++ Redistributable libraries in compressed form. The latest Redistributable packages are available from [Microsoft Visual C++ Redistributable Latest Supported Downloads](latest-supported-vc-redist.md). When you use the Redistributable packages for central deployment, Windows Update can service the libraries independently.

- *Redistributable merge modules* (*`.msm`* files), which you can include in your application's Windows Installer (*`.msi`*) file. This method is deprecated because libraries deployed this way can't be updated automatically by Windows Update. For more information, see [Redistributing by using merge modules](redistributing-components-by-using-merge-modules.md).

A Redistributable package file installs all of the Visual C++ libraries for a particular system architecture. For example, if your application is built for x64, you can use the *`vcredist_x64.exe`* package to install all the Visual C++ libraries your application uses. You can program your application installer to run the package as a prerequisite before you install your application.

Central deployment by using a Redistributable package enables Windows Update to automatically update the Visual C++ libraries. For continued security and functionality, we recommend that you use the library DLLs in your application instead of static libraries, and use Redistributable packages and central deployment instead of local deployment.

## Local deployment

In local deployment, library files are installed in your application folder together with the executable file. Different versions of Visual C++ Redistributable libraries can be installed in the same folder because the file name of each version includes its version number. For example, version 12 of the C++ runtime library is *`msvcp120.dll`*, and version 14 is *`msvcp140.dll`*.

Expansions to a library may be spread across multiple extra DLLs, known as *dot libraries*. For example, some functionality in the standard library released in Visual Studio 2017 version 15.6 was added into *`msvcp140_1.dll`*, to preserve the ABI compatibility of *`msvcp140.dll`*. If you use Visual Studio 2017 version 15.6 (toolset 14.13) or later, you may need to locally deploy both these dot libraries and the main library. These separate dot libraries will eventually be added to the base library, when the ABI changes.

Because Microsoft can't automatically update locally deployed Visual C++ libraries, we don't recommend local deployment of these libraries. If you decide to use local deployment of the Redistributable libraries, we recommend that you implement your own method of automatically updating the locally deployed libraries.

## Static linking

In addition to dynamically linked libraries, Visual Studio supplies most of its libraries as static libraries. You can statically link a static library to your application, that is, link the library object code directly into the application. Static linking creates a single binary without a DLL dependency, so that you don't have to deploy the Visual C++ library files separately. However, we don't recommend this approach because statically linked libraries can't be updated in place. To update a linked library when you use static linking, you have to recompile and redeploy your application.

## Troubleshooting deployment issues

The load order of Visual C++ libraries is system-dependent. To diagnose loader issues, use *`depends.exe`* or *`where.exe`*. For more information, see [Dynamic-link library search order (Windows)](/windows/win32/Dlls/dynamic-link-library-search-order).

## See also

[Deploying desktop applications](deploying-native-desktop-applications-visual-cpp.md)\
[Universal CRT deployment](universal-crt-deployment.md)
