---
description: "Learn more about: C++ Tools and Features in Visual Studio Editions"
title: "C++ Tools and Features in Visual Studio Editions"
ms.date: 10/27/2021
helpviewer_keywords: ["tools and platforms [C++]"]
ms.assetid: 3d88607b-9cc4-490a-8d4c-31ee7610a26f
---
# C++ Tools and Features in Visual Studio Editions

::: moniker range=">=msvc-160"

The following C++ features are available in Visual Studio. Unless stated otherwise, all features are available in all editions: Visual Studio Community, Visual Studio Professional, and Visual Studio Enterprise. Some features require specific workloads or optional components, which you can install with the Visual Studio Installer.

::: moniker-end

::: moniker range="<=msvc-150"

The following tables show Visual C++ features that are available in Visual Studio 2017. An X in a cell indicates that the feature is available; an empty cell indicates that the feature is not available. Notes in parentheses indicate that a feature is available, but restricted.

::: moniker-end

## Platforms

::: moniker range=">=msvc-160"

- Windows Desktop
- Universal Windows Platform ((tablet, PC, Xbox, IoT, and HoloLens))
- Linux
- Android
- iOS

::: moniker-end

::: moniker range="<=msvc-150"

| Platform | Visual Studio Express for Windows 10 | Visual Studio Express for Windows Desktop | Visual Studio Community/Professional | Visual Studio Enterprise |
|--|--|--|--|--|
| Windows Desktop |  | X | X | X |
| Universal Windows Platform ((phone, tablet, PC, Xbox, IoT, and HoloLens)) | X |  | X | X |
| Linux | X | X |
| Microsoft Store 8.1 |  |  | X | X |
| Windows Phone 8.0 |  |  | X | X |
| Android |  |  | X | X |
| iOS |  |  | X | X |

::: moniker-end

## Compilers

::: moniker range=">=msvc-160"

- MSVC 32-bit compiler for x86, x64, ARM, and ARM64
- MSVC 64-bit compiler for x86, x64, ARM, and ARM64
- GCC cross-compiler for ARM
- Clang/LLVM
  - On Windows, Clang/LLVM 12.0, targeting x86 or x64 (CMake support only).
  - On Linux, any Clang/LLVM installation supported by the distro.

::: moniker-end

::: moniker range="<=msvc-150"

| Compiler | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| MSVC 32-bit X86 compiler | X | X | X | X |
| x86_arm cross-compiler | X |  | X | X |
| MSVC 64-bit x64 compiler |  |  | X | X |
| x86_x64 cross-compiler | X | X | X | X |

::: moniker-end

::: moniker range=">=msvc-160"

## C++ Workloads

Visual Studio includes the following workloads for C++ development. You can install any or all of these, along with other workloads such as .NET Desktop Development, Python Development, Azure Development, Visual Studio Extension Development, and others.

### Desktop development with C++

Included:

- C++ core desktop features

Optional Components:

::: moniker-end

::: moniker range=">=msvc-170"

- MSVC v143 - VS 2022 C++ x64/x86 build tools (latest)
- Windows 10 SDK (latest for this Visual Studio version)
- Just-In-Time debugger
- C++ profiling tools
- C++ CMake tools for Windows
- C++ ATL for v143 build tools (x86 & x64)
- Test Adapter for Boost.Test
- Test Adapter for Google Test
- Live Share
- IntelliCode
- C++ AddressSanitizer
- IntelliTrace (Enterprise only)
- MSVC v143 - VS 2022 C++ ARM64 build tools (latest)
- C++ MFC for latest v143 build tools (x86 & x64)
- C++/CLI support for v143 build tools (latest)
- C++ Modules for v143 build tools (x64/x86 – experimental)
- C++ Clang tools for Windows (12.0.0 - x64/x86)
- JavaScript diagnostics
- IncrediBuild - Build Acceleration
- Windows 11 SDK
- Windows 10 SDK (other versions)
- MSVC v142 - VS 2019 C++ x64/x86 build tools (v14.29)
- MSVC v141 - VS 2017 C++ x64/x86 build tools (v14.16)
- MSVC v140 - VS 2015 C++ build tools (v14.00)

::: moniker-end

::: moniker range="msvc-160"

- MSVC v142 - VS 2019 C++ x64/x86 build tools (latest)
- Windows 10 SDK (latest for this Visual Studio version)
- Just-In-Time debugger
- C++ profiling tools
- C++ CMake tools for Windows
- C++ ATL for v142 build tools (x86 & x64)
- Test Adapter for Boost.Test
- Test Adapter for Google Test
- Live Share
- IntelliCode
- C++ AddressSanitizer
- IntelliTrace (Enterprise only)
- MSVC v142 - VS 2019 C++ ARM64 build tools (latest)
- C++ MFC for latest v142 build tools (x86 & x64)
- C++/CLI support for v142 build tools (latest)
- C++ Modules for v142 build tools (x64/x86 – experimental)
- C++ Clang tools for Windows
- JavaScript diagnostics
- IncrediBuild - Build Acceleration
- Windows 11 SDK
- Windows 10 SDK (other versions)
- MSVC v141 - VS 2017 C++ x64/x86 build tools (v14.16)
- MSVC v140 - VS 2015 C++ build tools (v14.00)

::: moniker-end

::: moniker range=">=msvc-160"

### Linux development with C++

Included:

- C++ core features
- C++ for Linux Development

Optional Components:

- C++ CMake tools for Linux
- IntelliCode
- Embedded and IoT development tools

### Universal Windows Platform development

Included:

- Blend for Visual Studio
- .NET Native and .NET Standard
- NuGet package manager
- Universal Windows Platform tools
- Windows 10 SDK (latest for this Visual Studio version)

Optional Components:

::: moniker-end

::: moniker range=">=msvc-170"

- IntelliCode
- IntelliTrace (Enterprise only)
- USB Device Connectivity
- C++ (v143) Universal Windows Platform tools
- C++ (v142) Universal Windows Platform tools
- C++ (v141) Universal Windows Platform tools
- Graphics debugger and GPU profiler for DirectX
- Windows 11 SDK
- Windows 10 SDK (other versions)
- Architecture and analysis tools

::: moniker-end

::: moniker range="msvc-160"

- IntelliCode
- IntelliTrace (Enterprise only)
- USB Device Connectivity
- C++ (v142) Universal Windows Platform tools
- C++ (v141) Universal Windows Platform tools
- Graphics debugger and GPU profiler for DirectX
- Windows 11 SDK
- Windows 10 SDK (other versions)
- Architecture and analysis tools

::: moniker-end

::: moniker range=">=msvc-160"

### C++ Game Development

Included:

::: moniker-end

::: moniker range=">=msvc-170"

- C++ core features
- Windows Universal C Runtime
- C++ 2019 Redistributable Update
- MSVC v143 - VS 2022 C++ x64/x86 build tools (latest)

Optional Components:

- C++ profiling tools
- C++ AddressSanitizer
- Windows 10 SDK (latest for this Visual Studio version)
- IntelliCode
- IntelliTrace (Enterprise only)
- Windows 11 SDK
- Windows 10 SDK (other versions)
- IncrediBuild - Build Acceleration
- Cocos
- Unreal Engine installer
- Android IDE support for Unreal engine

::: moniker-end

::: moniker range="msvc-160"

- C++ core features
- Windows Universal C Runtime
- C++ 2019 Redistributable Update
- MSVC v142 - VS 2019 C++ x64/x86 build tools (latest)

Optional Components:

- C++ profiling tools
- Windows 10 SDK (latest for this Visual Studio version)
- IntelliCode
- IntelliTrace (Enterprise only)
- Windows 11 SDK
- Windows 10 SDK (other versions)
- IncrediBuild - Build Acceleration
- Cocos
- Unreal Engine installer
- Android IDE support for Unreal engine

::: moniker-end

::: moniker range=">=msvc-160"

### Mobile development with C++

Included:

- C++ core features
- Android SDK setup (API level 25) (local install for Mobile development with C++)

Optional Components:

::: moniker-end

::: moniker range=">=msvc-170"

- Android NDK (R21E)
- Apache Ant (1.9.3)
- C++ Android development tools
- IntelliCode
- Intel Hardware Accelerated Execution Manager (HAXM) (local install)
- C++ iOS development tools
- IncrediBuild - Build Acceleration

::: moniker-end

::: moniker range="msvc-160"

- Android NDK (R16B)
- Apache Ant (1.9.3)
- C++ Android development tools
- IntelliCode
- Google Android Emulator (API Level 25) (local install)
- Intel Hardware Accelerated Execution Manager (HAXM) (local install)
- Android NDK (R16B) (32bit)
- C++ iOS development tools
- IncrediBuild - Build Acceleration

::: moniker-end

::: moniker range=">=msvc-160"

## Individual components

You can install these components independently from any workload.

- JavaScript diagnostics
- Live Share
- C++ Universal Windows Platform runtime for v142 build tools
- ClickOnce Publishing
- Microsoft Visual Studio Installer Projects
- Windows SDK

::: moniker-end

## Libraries and Headers

::: moniker range=">=msvc-160"

- Windows headers and libraries
- Windows Universal C Runtime (CRT)
- C++ Standard Library
- ATL
- MFC
- .NET Framework class library
- C++ Support Library for .NET
- OpenMP 2.0
- Over 900 open-source libraries via vcpkg catalog

::: moniker-end

::: moniker range="<=msvc-150"

| Library or Header | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Windows headers and libraries and CRT library | (X) | X | X | X |
| C++ Standard Library | X | X | X | X |
| ATL |  |  | X | X |
| MFC |  |  | X | X |
| .NET Framework class library |  | X | X | X |
| C++ Support Library for .NET |  | X | X | X |
| OpenMP 2.0 | X | X | X | X |

::: moniker-end

## Build and Project Systems

::: moniker range=">=msvc-160"

- CMake
- Any build system via Open Folder
- Command line builds (msbuild.exe)
- Native Multi-targeting
- Managed Multi-targeting
- Parallel Builds
- Build Customizations
- Property Pages Extensibility

::: moniker-end

::: moniker range="<=msvc-150"

| Build or Project Feature | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Command line builds (msbuild.exe) | X | X | X | X |
| Native Multi-targeting |  | X | X | X |
| Managed Multi-targeting |  | X | X | X |
| Parallel Builds | X | X | X | X |
| Build Customizations | X | X | X | X |
| Property Pages Extensibility | X | X | X | X |

::: moniker-end

## Project Templates

::: moniker range=">=msvc-160"

The following project templates are available depending on which workloads you have installed.

Windows Desktop:

- Empty Project
- Console App
- Windows Desktop Wizard
- Windows Desktop Application
- Shared Items Project
- MFC App
- Dynamic Link Library
- CLR Empty Project
- CLR Console App
- Static Library
- CMake Project
- ATL Project
- MFC Dynamic Link Library
- CLR Class Library
- Makefile Project (Windows)
- MFC ActiveXControl
- Native Unit Test Project
- Google Test

Universal Windows Platform (C++/CX):

- Blank App
- DirectX 11 and XAML App
- DirectX 11 App
- DirectX 12 App
- Unit Test App
- DLL
- Windows Runtime Component
- Static Library
- Windows Application Packaging Project

Linux:

- Console App (Linux)
- Empty Project (Linux)
- Raspberry Pi Blink
- Makefile Project (Linux)

::: moniker-end

::: moniker range="<=msvc-150"

| Template | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| XAML Templates for UWP, Windows 8.1, Windows Phone 8.0 | X |  | X | X |
| Direct3D App | X |  | X | X |
| DLL (Universal Windows) | X |  | X | X |
| Static Library (Universal Windows) | X |  | X | X |
| Windows Runtime Component | X |  | X | X |
| Unit Test App (Universal Windows) | X |  | X | X |
| ATL Project |  |  | X | X |
| Class Library (CLR) |  | X | X | X |
| CLR Console Application |  | X | X | X |
| CLR Empty Project |  | X | X | X |
| Custom Wizard |  |  | X | X |
| Empty Project |  | X | X | X |
| Makefile Project |  | X | X | X |
| MFC ActiveX Control |  |  | X | X |
| MFC Application |  |  | X | X |
| MFC DLL |  |  | X | X |
| Test Project | X | X | X | X |
| Win32 Console Application |  | X | X | X |
| Win32 Project |  | X | X | X |

::: moniker-end

## Tools

::: moniker range=">=msvc-160"

- Incremental Linker (Link.exe)
- Microsoft Makefile Utility (Nmake.exe)
- Lib Generator (Lib.exe)
- Windows Resource Compiler (Rc.exe)
- Windows Resource to Object Converter (CvtRes.exe)
- Browse Information Maintenance Utility (BscMake.exe)
- C++ Name Undecorator (Undname.exe)
- COFF/PE Dumper (Dumpbin.exe)
- COFF/PE Editor (Editbin.exe)
- MASM (Ml.exe)
- Spy++
- ErrLook
- AtlTrace
- Inference Rules
- Profile Guided Optimizations

::: moniker-end

::: moniker range="<=msvc-150"

| Tool | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Incremental Linker (Link.exe) | X | X | X | X |
| Program Maintenance Utility (Nmake.exe) |  | X | X | X |
| Lib Generator (Lib.exe) | X | X | X | X |
| Windows Resource Compiler (Rc.exe) | X | X | X | X |
| Windows Resource to Object Converter (CvtRes.exe) |  | X | X | X |
| Browse Information Maintenance Utility (BscMake.exe) | X | X | X | X |
| C++ Name Undecorator (Undname.exe) | X | X | X | X |
| COFF/PE Dumper (Dumpbin.exe) | X | X | X | X |
| COFF/PE Editor (Editbin.exe) | X | X | X | X |
| MASM (Ml.exe) |  |  | X | X |
| Spy++ |  |  | X | X |
| ErrLook |  |  | X | X |
| AtlTrace |  |  | X | X |
| Devenv.com |  |  | X | X |
| Inference Rules |  |  | X | X |
| Upgrade VCBuild .vcproj projects to MSBuild (VCUpgrade.exe) | X | X | X | X |
| Profile Guided Optimizations |  |  | X | X |

::: moniker-end

## Debugging Features

::: moniker range=">=msvc-160"

- Native Debugging
- natvis (native type visualization)
- Graphics Debugging
- Managed Debugging
- GPU usage
- Memory usage
- Remote Debugging
- SQL Debugging
- Static Code Analysis

::: moniker-end

::: moniker range="<=msvc-150"

| Debugging Feature | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Native Debugging | X | X | X | X |
| natvis (native type visualization) | X | X | X | X |
| Graphics Debugging | X |  | X | X |
| Managed Debugging |  | X | X | X |
| GPU usage | X |  | X | X |
| Memory usage | X |  | X | X |
| Remote Debugging | X | X | X | X |
| SQL Debugging |  |  | X | X |
| Static Code Analysis | Limited | Limited | X | X |

::: moniker-end

## Designers and Editors

::: moniker range=">=msvc-160"

- XAML Designer
- CSS Style Designer/Editor
- HTML Designer/Editor
- XML Editor
- Source Code Editor
- Productivity Features: Refactoring, EDG IntelliSense engine, C++ Code Formatting
- Windows Forms Designer
- Data Designer
- Native Resource Editor (.rc files)
- Resource Editors
- Model editor
- Shader designer
- Live Dependency Validation (Enterprise Only)
- Architectural Layer Diagrams (Enterprise Only)
- Architecture Validation (Enterprise Only)
- Code Clone (Enterprise Only)

::: moniker-end

::: moniker range="<=msvc-150"

| Designer or Editor | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| XAML Designer | X |  | X | X |
| CSS Style Designer/Editor | X | X | X | X |
| HTML Designer/Editor | X | X | X | X |
| XML Editor | X | X | X | X |
| Source Code Editor | X | X | X | X |
| Productivity Features: Refactoring, IntelliSense, C++ Code Formatting | X | X | X | X |
| Windows Forms Designer |  | X | X | X |
| Data Designer |  |  | X | X |
| Native Resource Editor (.rc files) |  |  | X | X |
| Resource Editors | X | X | X | X |
| Model editor | X |  | X | X |
| Shader designer | X |  | X | X |

::: moniker-end

## Data Features

::: moniker range=">=msvc-160"

- Data Designer
- Data Objects
- Web Services
- Server Explorer

::: moniker-end

::: moniker range="<=msvc-150"

| Data Feature | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Data Designer |  |  | X | X |
| Data Objects |  |  | X | X |
| Web Services |  |  | X | X |
| Server Explorer |  |  | X | X |

::: moniker-end

## Automation and Extensibility

::: moniker range=">=msvc-160"

- Extensibility Object Models
- Code Model
- Project Model
- Resource Editor Model
- Wizard Model
- Debugger Object Model

::: moniker-end

::: moniker range="<=msvc-150"

| Automation and Extensibility | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Extensibility Object Models |  |  | X | X |
| Code Model |  |  | X | X |
| Project Model |  |  | X | X |
| Resource Editor Model |  |  | X | X |
| Wizard Model |  |  | X | X |
| Debugger Object Model |  |  | X | X |

::: moniker-end

## Application Lifecycle Management Tools

::: moniker range=">=msvc-160"

- Unit Testing (Microsoft Native C++, Boost.Test, Google Test, CTest)
- Code map and dependency graphs (Professional and Enterprise)
- Code coverage (Enterprise Only)
- Manual testing (Enterprise only)
- Exploratory testing (Enterprise only)
- Test case management (Enterprise only)
- Code map debugger integration (Enterprise only)
- Live Unit Testing (Enterprise only)
- IntelliTrace (Enterprise only)
- IntelliTest (Enterprise only)
- Microsoft Fakes (Unit Test Isolation) (Enterprise only)
- Code Coverage (Enterprise only)

::: moniker-end

::: moniker range="<=msvc-150"

| Tool | Visual Studio Express for Windows | Visual Studio Express for Windows Desktop | Visual Studio Professional / Community | Visual Studio Enterprise |
|--|--|--|--|--|
| Unit Testing (native framework) | X | X | X | X |
| Unit Testing (managed framework) |  | X | X | X |
| Code coverage |  |  |  | X |
| Manual testing |  |  |  | X |
| Exploratory testing |  |  |  | X |
| Test case management |  |  |  | X |
| Code map and dependency graphs |  |  | read-only | X |
| Code map debugging |  |  |  | X |

::: moniker-end

## See also

[Install Visual Studio](/visualstudio/install/install-visual-studio)\
[What's New in Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)\
[C++ project types in Visual Studio](../build/reference/visual-cpp-project-types.md)
