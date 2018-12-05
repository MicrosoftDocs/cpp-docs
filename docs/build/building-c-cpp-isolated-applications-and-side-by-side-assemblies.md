---
title: "Building C/C++ Isolated Applications and Side-by-side Assemblies"
ms.date: "11/04/2016"
helpviewer_keywords: ["isolated applications [C++]", "WinSxS [C++]", "native assembly cache [C++]", "builds [C++], isolated applications", "side-by-side applications [C++]", "builds [C++], side-by-side assemblies"]
ms.assetid: 9465904e-76f7-48bd-bb3f-c55d8f1699b6
---
# Building C/C++ Isolated Applications and Side-by-side Assemblies

Visual C++ supports a deployment model for Windows client applications based on the idea of [isolated applications](/windows/desktop/SbsCs/isolated-applications) and [side-by-side assemblies](/windows/desktop/SbsCs/about-side-by-side-assemblies-). By default, Visual C++ builds all native C/C++ applications as isolated applications that use [manifests](/windows/desktop/sbscs/manifests) to describe their dependencies on Visual C++ libraries.

Building C/C++ programs as isolated applications presents a range of advantages. For example, an isolated application is unaffected when other C/C++ applications install or uninstall Visual C++ libraries. Visual C++ libraries used by isolated applications may still be redistributed in either the application's local folder, or by installation to the native assembly cache (WinSxS); however, servicing of Visual C++ libraries for already deployed applications can be simplified by using a [publisher configuration file](/windows/desktop/SbsCs/publisher-configuration). The isolated application deployment model makes it easier to ensure that C/C++ applications that are running on a specific computer use the most recent version of Visual C++ libraries, while still leaving open the possibility for system administrators and application authors to control explicit version binding of applications to their dependent DLLs.

This section discusses how you can build your C/C++ application as an isolated application and ensure that it binds to Visual C++ libraries using a manifest. The information in this section primarily applies to native, or unmanaged, Visual C++ applications. For information about deploying native applications built with Visual C++, see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md).

## In This Section

[Concepts of Isolated Applications and Side-by-side Assemblies](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)

[Building C/C++ Isolated Applications](../build/building-c-cpp-isolated-applications.md)

[Building C/C++ Side-by-side Assemblies](../build/building-c-cpp-side-by-side-assemblies.md)

[How to: Build Registration-Free COM Components](../build/how-to-build-registration-free-com-components.md)

[How to: Build Isolated Applications to Consume COM Components](../build/how-to-build-isolated-applications-to-consume-com-components.md)

[Understanding Manifest Generation for C/C++ Programs](../build/understanding-manifest-generation-for-c-cpp-programs.md)

[Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)

## Related Sections

[Isolated Applications and Side-by-side Assemblies](/windows/desktop/SbsCs/isolated-applications-and-side-by-side-assemblies-portal)

[Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)