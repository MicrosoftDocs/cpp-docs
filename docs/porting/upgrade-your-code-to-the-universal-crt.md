---
description: "Learn more about: Upgrade your code to the Universal CRT"
title: "Upgrade your code to the Universal CRT"
ms.date: 06/28/2022
ms.assetid: eaf34c1b-da98-4058-a059-a10db693a5ce
---
# Upgrade your code to the Universal CRT

The Microsoft C Runtime Library (CRT) was refactored in Visual Studio 2015. The Standard C Library, POSIX extensions and Microsoft-specific functions, macros, and global variables were moved into a new library, the Universal C Runtime Library (Universal CRT or UCRT). The compiler-specific components of the CRT were moved into a new vcruntime library.

The UCRT is now a Windows component, and ships as part of Windows 10 and later. The UCRT supports a stable ABI based on C calling conventions, and it conforms closely to the ISO C99 standard, with only a few exceptions. It's no longer tied to a specific version of the compiler. You can use the UCRT on any version of Windows supported by Visual Studio 2015 or Visual Studio 2017. The benefit is that you no longer need to update your builds to target a new version of the CRT with every upgrade of Visual Studio.

This refactoring has changed the names or locations of many CRT header files, library files, and Redistributable files, and the deployment methods required for your code. Many functions and macros in the UCRT were also added or changed to improve standards conformance. To take advantage of these changes, you must update your existing code and project build systems.

## Where to find the Universal CRT files

As a Windows component, the UCRT library files and headers are now part of the Windows software development kit (SDK). When you install Visual Studio, the parts of the Windows SDK required to use the UCRT are also installed. The Visual Studio installer adds the locations of the UCRT headers, libraries and DLL files to the default paths used by the Visual Studio project build system. When you update your Visual Studio C++ projects, if they use the default project settings, the IDE automatically finds the new locations for header files. And, the linker automatically uses the new default UCRT and vcruntime libraries. Similarly, if you use a Developer command prompt to do command-line builds, the environment variables that contain paths for headers and libraries are updated and work automatically as well.

The Standard C Library header files are now found in the Windows SDK in an include folder in an SDK version-specific directory. A typical location for the header files is in the *Program Files* or *Program Files (x86)* directory under `Windows Kits\10\Include\[sdk-version]\ucrt`, where `[sdk-version]` corresponds to a Windows version or update, for example, 10.0.14393.0 for the Anniversary Update of Windows 10.

The UCRT static libraries and dynamic link stub libraries are found in the *Program Files* or *Program Files (x86)* directory under `Windows Kits\10\Lib\[sdk-version]\ucrt\[architecture]`, where `architecture` is ARM64, x86, or X64. The retail and debug static libraries are `libucrt.lib` and `libucrtd.lib`, and the libraries for the UCRT DLLs are `ucrt.lib` and `ucrtd.lib`.

The retail and debug UCRT DLLs are found in separate locations. The retail DLLs are Redistributable files, and can be found in the *Program Files* or *Program Files (x86)* directory under `Windows Kits\10\Redist\ucrt\DLLs\[architecture]\`. Debug UCRT libraries aren't Redistributable files, and can be found in the *Program Files* or *Program Files (x86)* directory under `Windows Kits\10\bin\[architecture]\ucrt` folder.

## Where to find the standard libraries and headers

The C and C++ compiler-specific runtime support library, `vcruntime`, contains the code required to support program startup and features such as exception handling and intrinsics. The library and its header files are still found in the version-specific Microsoft Visual Studio folder in your *Program Files* or *Program files (x86)* directory.

In Visual Studio 2017, 2019, and 2022, the header files are found under `Microsoft Visual Studio\[year]\[edition]\VC\Tools\MSVC\[lib-version]\include`. Here, `[year]` is the version of Visual Studio, `[edition]` is the edition or nickname for Visual Studio, and `[lib-version]` is the build version of the libraries.

The link libraries are found under `Microsoft Visual Studio\[year]\[edition]\VC\Tools\MSVC\[lib-version]\lib\[architecture]`, where `[year]` is the version of Visual Studio, `[edition]` is the edition or nickname for Visual Studio, `[lib-version]` is the build version of the libraries, and `[architecture]` is the target processor architecture. Link libraries for OneCore and Store are also found in the libraries folder.

The retail and debug versions of the static library are `libvcruntime.lib` and `libvcruntimed.lib`. The dynamic link retail and debug stub libraries are `vcruntime.lib` and `vcruntimed.lib`, respectively.

When you update your Visual Studio C++ projects, if you have set the project's **Linker** property **Ignore All Default Libraries** to **Yes**, or if you use the `/NODEFAULTLIB` linker option on the command line, then you must update your list of libraries to include the new, refactored libraries. Replace the old CRT library, for example, `libcmt.lib`, `libcmtd.lib`, `msvcrt.lib`, or `msvcrtd.lib`, with the equivalent refactored libraries. For information on the specific libraries to use, see [CRT library features](../c-runtime-library/crt-library-features.md).

## Deployment and redistribution of the Universal CRT

Because the UCRT is now a Microsoft Windows operating system component, it's included as part of the operating system in Windows 10 and later. It's available through Windows Update for older operating systems, Windows Vista through Windows 8.1. A Redistributable version is available for Windows XP. As an operating system component, UCRT updates and servicing are managed by Windows Update independently of Visual Studio and Microsoft C++ compiler  versions. Because the UCRT is a Windows component, for security and ease of updates, and a smaller image size, we strongly recommend you use the Redistributable package to do central deployment of the UCRT for your app.

You can use the UCRT on any version of Windows supported by Visual Studio 2015 or later. You can redistribute it using a `vcredist` package for supported versions of Windows before Windows 10. The `vcredist` packages include the UCRT components and automatically install them on Windows operating systems that don't have them installed by default. For more information, see [Redistributing Visual C++ Files](../windows/redistributing-visual-cpp-files.md).

App-local deployment of the UCRT is supported, though not recommended for both performance and security reasons. The DLLs for app-local deployment of the UCRT are included as part of the Windows SDK, under the *`redist`* subdirectory. The DLLs required include `ucrtbase.dll` and a set of **APISet forwarder** DLLs named `api-ms-win-[subset].dll`. The set of DLLs required on each operating system varies, so we recommended that you include all of the DLLs when you use app-local deployment. For more information and recommendations about app-local deployment, see [Deployment in Visual C++](../windows/deployment-in-visual-cpp.md).

## Changes to the Universal CRT functions and macros

Many functions were added or updated in the UCRT to improve ISO C99 conformance, and to address code quality and security issues. In some cases, this required breaking changes to the library. Your code that compiled cleanly when using an older version of the CRT may break when you compile it using the UCRT. If so, you must change your code to take advantage of UCRT updates and features. For a detailed listing of the breaking changes and updates to the CRT found in the Universal CRT, see the [C Runtime Library (CRT)](visual-cpp-change-history-2003-2015.md#BK_CRT) section of the Visual C++ change history. It includes a list of affected headers and functions that you can use to identify the changes needed in your code.

## See also

[Visual C++ porting and upgrading guide](visual-cpp-porting-and-upgrading-guide.md)\
[Overview of potential upgrade issues (Visual C++)](overview-of-potential-upgrade-issues-visual-cpp.md)\
[Upgrading projects from earlier versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)\
[Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md)\
[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)
