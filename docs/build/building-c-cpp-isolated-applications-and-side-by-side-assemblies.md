---
description: "Learn more about: Building C/C++ Isolated Applications and Side-by-side Assemblies"
title: "Building C/C++ Isolated Applications and Side-by-side Assemblies"
ms.date: "05/06/2019"
helpviewer_keywords: ["isolated applications [C++]", "WinSxS [C++]", "native assembly cache [C++]", "builds [C++], isolated applications", "side-by-side applications [C++]", "builds [C++], side-by-side assemblies"]
ms.assetid: 9465904e-76f7-48bd-bb3f-c55d8f1699b6
---
# Building C/C++ Isolated Applications and Side-by-side Assemblies

Visual Studio supports a deployment model for Windows client applications based on the idea of [isolated applications](/windows/win32/SbsCs/isolated-applications) and [side-by-side assemblies](/windows/win32/SbsCs/about-side-by-side-assemblies-). By default, Visual Studio builds all native C/C++ applications as isolated applications that use [manifests](/windows/win32/sbscs/manifests) to describe their dependencies on Visual C++ libraries.

Building C/C++ programs as isolated applications presents a range of advantages. For example, an isolated application is unaffected when other C/C++ applications install or uninstall Visual C++ libraries. Visual C++ libraries used by isolated applications may still be redistributed in either the application's local folder, or by installation to the native assembly cache (WinSxS); however, servicing of Visual C++ libraries for already deployed applications can be simplified by using a [publisher configuration file](/windows/win32/SbsCs/publisher-configuration). The isolated application deployment model makes it easier to ensure that C/C++ applications that are running on a specific computer use the most recent version of Visual C++ libraries, while still leaving open the possibility for system administrators and application authors to control explicit version binding of applications to their dependent DLLs.

This section discusses how you can build your C/C++ application as an isolated application and ensure that it binds to Visual C++ libraries using a manifest. The information in this section primarily applies to native, or unmanaged, C++ applications. For information about deploying native C++ applications built with Visual Studio, see [Redistributing Visual C++ Files](../windows/redistributing-visual-cpp-files.md).

## In This Section

[Concepts of Isolated Applications and Side-by-side Assemblies](concepts-of-isolated-applications-and-side-by-side-assemblies.md)

[Building C/C++ Isolated Applications](building-c-cpp-isolated-applications.md)

[Building C/C++ Side-by-side Assemblies](building-c-cpp-side-by-side-assemblies.md)

[How to: Build Registration-Free COM Components](how-to-build-registration-free-com-components.md)

[How to: Build Isolated Applications to Consume COM Components](how-to-build-isolated-applications-to-consume-com-components.md)

[Understanding Manifest Generation for C/C++ Programs](understanding-manifest-generation-for-c-cpp-programs.md)

[Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies](troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)

## Related Sections

[Isolated Applications and Side-by-side Assemblies](/windows/win32/SbsCs/isolated-applications-and-side-by-side-assemblies-portal)

[Deploying Desktop Applications](../windows/deploying-native-desktop-applications-visual-cpp.md)
