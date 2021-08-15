---
description: "Learn more about: Upgrade your code to the Universal CRT"
title: "Upgrade your code to the Universal CRT"
ms.date: "03/31/2017"
ms.assetid: eaf34c1b-da98-4058-a059-a10db693a5ce
---
# Upgrade your code to the Universal CRT

In Visual Studio 2015, the Microsoft C Runtime Library (CRT) was refactored. The Standard C Library, POSIX extensions and Microsoft-specific functions, macros, and global variables were moved into a new library, the Universal C Runtime Library (Universal CRT or UCRT). The compiler-specific components of the CRT were moved into a new vcruntime library.

The UCRT is now a Windows component, and ships as part of Windows 10. The UCRT supports a stable ABI based on C calling conventions, and it conforms closely to the ISO C99 standard, with only a few exceptions. It is no longer tied to a specific version of the compiler. You can use the UCRT on any version of Windows supported by Visual Studio 2015 or Visual Studio 2017. The benefit is that you no longer need to update your builds to target a new version of the CRT with every upgrade of Visual Studio.

With this refactoring, the names or locations of many CRT header files, library files, and redistributables, and the deployment methods required for your code have changed. In addition, many functions and macros in the UCRT were added or changed to improve standards conformance. To take advantage of these changes, your existing code and project build systems must be updated.

## Where to find the Universal CRT files

As a Windows component, the UCRT library files and headers are now part of the Windows software development kit (SDK). When you install Visual Studio, the parts of the Windows SDK required to use the UCRT are also installed. The Visual Studio installer adds the locations of the UCRT headers, libraries and DLL files to the default paths used by the Visual Studio project build system. When you update your Visual Studio C++ projects, if they use the default project settings, the IDE automatically finds the new locations for header files, and the linker automatically uses the new default UCRT and vcruntime libraries. Similarly, if you use a Developer command prompt to do command-line builds, the environment variables that contain paths for headers and libraries are updated and work automatically as well.

The Standard C Library header files are now found in the Windows SDK in an include folder in an SDK version-specific directory. A typical location for the header files is in the Program Files or Program Files (x86) directory under Windows Kits\\10\\Include\\_sdk-version_\\ucrt, where _sdk-version_ corresponds to a Windows version or update, for example, 10.0.14393.0 for the Anniversary Update of Windows 10.

The UCRT static libraries and dynamic link stub libraries are found in the Program Files or Program Files (x86) directory under Windows Kits\\10\\Lib\\_sdk-version_\\ucrt\\_architecture_, where _architecture_ is ARM, x86, or X64. The retail and debug static libraries are libucrt.lib and libucrtd.lib, and the libraries for the UCRT DLLs are ucrt.lib and ucrtd.lib.

The retail and debug UCRT DLLs are found in separate locations. The retail DLLs are redistributable, and can be found in the Program Files or Program Files (x86) directory under Windows Kits\\10\\Redist\\ucrt\\DLLs\\_architecture_\. Debug UCRT libraries are not redistributable, and can be found in the Program Files or Program Files (x86) directory under Windows Kits\\10\\bin\\_architecture_\\ucrt folder.

The C and C++ compiler-specific runtime support library, **vcruntime**, contains the code required to support program startup and features such as exception handling and intrinsics. The library and its header files are still found in the version-specific Microsoft Visual Studio folder in your Program Files or Program files (x86) directory. In Visual Studio 2017, the headers are found under Microsoft Visual Studio\\2017\\_edition_\\VC\\Tools\\MSVC\\_lib-version_\\include and the link libraries are found under Microsoft Visual Studio\\2017\\_edition_\\VC\\Tools\\MSVC\\_lib-version_\\lib\\_architecture_, where _edition_ is the edition of Visual Studio installed, _lib-version_ is the version of the libraries, and _architecture_ is the processor architecture. Link libraries for OneCore and Store are also found in the libraries folder. The retail and debug versions of the static library are libvcruntime.lib and libvcruntimed.lib. The dynamic link retail and debug stub libraries are vcruntime.lib and vcruntimed.lib, respectively.

When you update your Visual Studio C++ projects, if you have set the project's **Linker** property **Ignore All Default Libraries** to **Yes** or if you use the `/NODEFAULTLIB` linker option on the command line, then you must update your list of libraries to include the new, refactored libraries. Replace the old CRT library, for example, libcmt.lib, libcmtd.lib, msvcrt.lib, or msvcrtd.lib, with the equivalent refactored libraries. For information on the specific libraries to use, see [CRT Library Features](../c-runtime-library/crt-library-features.md).

## Deployment and redistribution of the Universal CRT

Because the UCRT is now a Microsoft Windows operating system component, it is included as part of the operating system in Windows 10 and is available through Windows Update for older operating systems, Windows Vista through Windows 8.1. A redistributable version is available for Windows XP. As an operating system component, UCRT updates and servicing are managed by Windows Update independently of Visual Studio and Microsoft C++ compiler  versions. Because the UCRT is a Windows component, for security and ease of updates, and a smaller image size, we strongly recommend central deployment of the UCRT for your app.

You can use the UCRT on any version of Windows supported by Visual Studio 2015 or Visual Studio 2017. You can redistribute it using a vcredist package for supported versions of Windows other than Windows 10. The vcredist packages include the UCRT components and automatically install them on Windows operating systems that do not have them installed by default. For more information, see [Redistributing Visual C++ Files](../windows/redistributing-visual-cpp-files.md).

App-local deployment of the UCRT is supported, though not recommended for both performance and security reasons. The DLLs for app-local deployment are included as part of the Windows SDK, under the **redist** subdirectory. The DLLs required include ucrtbase.dll and a set of **APISet forwarder** DLLs named api-ms-win-_subset_.dll. The set of DLLs required on each operating system varies, so we recommended that you include all of the DLLs when you use app-local deployment. For additional details and caveats about app-local deployment, see [Deployment in Visual C++](../windows/deployment-in-visual-cpp.md).

## Changes to the Universal CRT functions and macros

Many functions were added or updated in the UCRT to improve ISO C99 conformance, and to address code quality and security issues. In some cases, this required breaking changes to the library. If your code compiled cleanly when using an older version of the CRT but breaks when compiled using the UCRT, you must change your code to take advantage of these updates and features. For a detailed listing of the breaking changes and updates to the CRT found in the Universal CRT, see the [C Runtime Library (CRT)](visual-cpp-change-history-2003-2015.md#BK_CRT) section of the Visual C++ change history. It includes a list of affected headers and functions that you can use to identify the changes needed in your code.

## See also

[Visual C++ Porting and Upgrading Guide](visual-cpp-porting-and-upgrading-guide.md)<br/>
[Overview of potential upgrade issues (Visual C++)](overview-of-potential-upgrade-issues-visual-cpp.md)<br/>
[Upgrading projects from earlier versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)<br/>
[Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md)<br/>
[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)
