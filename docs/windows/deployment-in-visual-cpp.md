---
description: "Learn more about: Deployment in Visual C++"
title: "Deployment in Visual C++"
ms.date: "05/11/2018"
helpviewer_keywords: ["deploying applications [C++]", "application deployment [C++]"]
ms.assetid: d4b4ffc0-d2bd-4e4a-84a6-62f1c26f6a09
---
# Deployment in Visual C++

Installation of your application on a computer other than your development computer is known as *deployment*. When you deploy a Visual C++ application to another computer, you must install both the application and any library files it depends on. Visual Studio enables three ways to deploy the Visual C++ libraries together with your application: *central deployment*, *local deployment*, and *static linking*. Central deployment puts the library files under the Windows directory, where the Windows Update service can update them automatically. Local deployment puts the library files in the same directory as your application. You must redeploy any locally deployed libraries yourself to update them. Static linking binds the library code into your application. You must recompile and redeploy your application to take advantage of any updates to the libraries when you use static linking.

In Visual Studio 2015, the Microsoft C Runtime library was refactored into version-specific local library components, and a new Universal C Runtime library that is now part of Windows. For details on deployment of the Universal CRT, see [Universal CRT deployment](universal-crt-deployment.md).

## Central Deployment

In central deployment, library DLL files are installed in the Windows\System32 directory, or for 32-bit library files on x64 systems, the Windows\SysWow64 directory. Microsoft automatically updates its libraries that are centrally deployed. For Visual C++ libraries that are locally deployed or statically linked, you must provide the updates.

To centrally deploy Visual C++ libraries, you can use one of these two sources for the files to install:

- *Redistributable package* files, which are stand-alone command-line executables that contain all the Visual C++ redistributable libraries in compressed form, or

- *Redistributable merge modules* (.msm files), which you can use to deploy specific libraries, and which you include in your application's Windows Installer (.msi) file.

A redistributable package file installs all of the Visual C++ libraries for a particular system architecture. For example, if your application is built for x64, you can use the vcredist_x64.exe redistributable package to install all the Visual C++ libraries your application uses. You can program your application installer to run the redistributable package as a prerequisite before you install your application.

A merge module enables the inclusion of setup logic for a specific Visual C++ library in a Windows Installer application setup file. You can include as many or as few merge modules as your application requires. Use merge modules when you need to minimize the size of your deployment binaries.

Because central deployment by using a redistributable package or merge modules enables Windows Update to automatically update the Visual C++ libraries, we recommend that you use the library DLLs in your application instead of static libraries, and use central deployment instead of local deployment.

## Local Deployment

In local deployment, library files are installed in your application folder together with the executable file. Different versions of Visual C++ redistributable libraries can be installed in the same folder because the file name of each version includes its version number. For example, version 12 of the C++ runtime library is msvcp120.dll, and version 14 is msvcp140.dll.

A library may be spread across multiple additional DLLs, known as *dot libraries*. For example, some functionality in the standard library released in Visual Studio 2017 version 15.6 was added into msvcp140_1.dll, to preserve the ABI compatibility of msvcp140.dll. If you use Visual Studio 2017 version 15.6 (toolset 14.13), or a later toolset from Visual Studio 2017, you may need to locally deploy these dot libraries as well as the main library. These separate dot libraries are then rolled into the next major version of the base library, when the ABI changes.

Because Microsoft cannot automatically update locally deployed Visual C++ libraries, we do not recommend local deployment of these libraries. If you decide to use local deployment of redistributable libraries, we recommend that you implement your own method of automatically updating the locally deployed libraries.

## Static Linking

In addition to dynamically linked libraries, Visual Studio supplies most of its libraries as static libraries. You can statically link a static library to your application, that is, link the library object code directly into the application. This creates a single binary without a DLL dependency, so that you don't have to deploy the Visual C++ library files separately. However, we do not recommend this approach because statically-linked libraries cannot be updated in place. If you use static linking and you want to update a linked library, you have to recompile and redeploy your application.

## Troubleshooting deployment issues

The load order of Visual C++ libraries is system-dependent. To diagnose loader issues, use depends.exe or where.exe. For more information, see [Dynamic-Link Library Search Order (Windows)](/windows/win32/Dlls/dynamic-link-library-search-order).

## See also

- [Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)
- [Universal CRT deployment](universal-crt-deployment.md)
