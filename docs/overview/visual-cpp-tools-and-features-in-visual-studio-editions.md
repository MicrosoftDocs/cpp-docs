---
title: "C++ Tools and Features in Visual Studio Editions"
ms.date: "05/16/2019"
helpviewer_keywords: ["tools and platforms [C++]"]
ms.assetid: 3d88607b-9cc4-490a-8d4c-31ee7610a26f
---
# C++ Tools and Features in Visual Studio Editions

::: moniker range=">=vs-2019"

The following tables show Visual C++ features that are available in Visual Studio 2019. An X in a cell indicates that the feature is available; an empty cell indicates that the feature is not available. Notes in parentheses indicate that a feature is available, but restricted.

## Platforms

||||||
|-|-|-|-|-|
|Platform|Visual Studio Community/Professional|Visual Studio Enterprise|
|Windows Desktop|X|X|
|Universal Windows Platform ((tablet, PC, Xbox, IoT, and HoloLens))|X|X|
|Android|X|X|
|iOS|X|X|

## Compilers

|Compiler|Visual Studio Professional / Community|Visual Studio Enterprise|
|--------------|---------------------------------------------|------------------------------|
|32-bit X86 compiler|X|X|
|X86_arm cross-compiler|X|X|
|64-bit x64 compiler|X|X|
|X86_ x64 cross-compiler|X|X|

## Libraries and Headers

|Library or Header|Visual Studio Professional / Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------------|------------------------------|
|Windows headers and libraries and CRT library|X|X|
|C++ Standard Library|X|X|
|ATL|X|X|
|MFC|X|X|
|.NET Framework class library|X|X|
|C++ Support Library for .NET|X|X|
|OpenMP|X|X|

## Project Templates

|Template|Visual Studio Professional / Community|Visual Studio Enterprise|
|--------------|---------------------------------------------|------------------------------|
|XAML Templates for UWP, Windows 8.1, Windows Phone 8.0|X|X|
|Direct3D App|X|X|
|DLL (Universal Windows)|X|X|
|Static Library (Universal Windows)|X|X|
|Windows Runtime Component|X|X|
|Unit Test App (Universal Windows)|X|X|
|ATL Project|X|X|
|Class Library (CLR)|X|X|
|CLR Console Application|X|X|
|CLR Empty Project|X|X|
|Custom Wizard|X|X|
|Empty Project|X|X|
|Makefile Project|X|X|
|MFC ActiveX Control|X|X|
|MFC Application|X|X|
|MFC DLL|X|X|
|Test Project|X|X|
|Win32 Console Application|X|X|
|Win32 Project|X|X|

## Tools

|Tool|Visual Studio Professional / Community|Visual Studio Enterprise|
|----------|---------------------------------------------|------------------------------|
|Incremental Linker (Link.exe)|X|X|
|Program Maintenance Utility (Nmake.exe)|X|X|
|Lib Generator (Lib.exe)|X|X|
|Windows Resource Compiler (Rc.exe)|X|X|
|Windows Resource to Object Converter (CvtRes.exe)|X|X|
|Browse Information Maintenance Utility (BscMake.exe)|X|X|
|C++ Name Undecorator (Undname.exe)|X|X|
|COFF/PE Dumper (Dumpbin.exe)|X|X|
|COFF/PE Editor (Editbin.exe)|X|X|
|MASM (Ml.exe)|X|X|
|Spy++|X|X|
|ErrLook|X|X|
|AtlTrace|X|X|
|Devenv.com|X|X|
|Inference Rules|X|X|
|Upgrade VCBuild .vcproj projects to MSBuild (VCUpgrade.exe)|X|X|
|Profile Guided Optimizations|X|X|

## Debugging Features

|Debugging Feature|Visual Studio Professional / Community|Visual Studio Enterprise|
|-----------------------|--------------------------------------------|------------------------------|
|Native Debugging|X|X|
|natvis (native type visualization)|X|X|
|Graphics Debugging|X|X|
|Managed Debugging|X|X|
|GPU usage|X|X|
|Memory usage|X|X|
|Remote Debugging|X|X|
|SQL Debugging|X|X|
|Static Code Analysis|X|X|

## Designers and Editors

|Designer or Editor|Visual Studio Professional / Community|Visual Studio Enterprise|
|------------------------|---------------------------------------------|------------------------------|
|XAML Designer|X|X|
|CSS Style Designer/Editor|X|X|
|HTML Designer/Editor|X|X|
|XML Editor|X|X|
|Source Code Editor|X|X|
|Productivity Features: Refactoring, IntelliSense, C++ Code Formatting|X|X|
|Windows Forms Designer|X|X|
|Data Designer|X|X|
|Native Resource Editor (.rc files)|X|X|
|Resource Editors|X|X|
|Model editor|X|X|
|Shader designer|X|X|

## Data Features

|Data Feature|Visual Studio Professional / Community|Visual Studio Enterprise|
|------------------|---------------------------------------------|------------------------------|
|Data Designer|X|X|
|Data Objects|X|X|
|Web Services|X|X|
|Server Explorer|X|X|

## Build and Project Systems

|Build or Project Feature|Visual Studio Professional / Community|Visual Studio Enterprise|
|------------------------------|---------------------------------------------|------------------------------|
|Command line builds (msbuild.exe)|X|X|
|Native Multi-targeting|X|X|
|Managed Multi-targeting|X|X|
|Parallel Builds|X|X|
|Build Customizations|X|X|
|Property Pages Extensibility|X|X|

## Automation and Extensibility

|Automation and Extensibility|Visual Studio Professional / Community|Visual Studio Enterprise|
|---------------------------------|---------------------------------------------|------------------------------|
|Extensibility Object Models|X|X|
|Code Model|X|X|
|Project Model|X|X|
|Resource Editor Model|X|X|
|Wizard Model|X|X|
|Debugger Object Model|X|X|

## Application Lifecycle Management Tools

||||||
|-|-|-|-|-|
|Tool|Visual Studio Professional / Community|Visual Studio Enterprise|
|Unit Testing (native framework)|X|X|
|Unit Testing (managed framework)|X|X|
|Code coverage||X|
|Manual testing||X|
|Exploratory testing||X|
|Test case management||X|
|Code map and dependency graphs|read-only|X|
|Code map debugging||X|

## See also

[Install Visual Studio](/visualstudio/install/install-visual-studio)<br/>
[What's New in Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)<br/>
[C++ project types in Visual Studio](../build/reference/visual-cpp-project-types.md)<br/>


::: moniker-end

::: moniker range="<=vs-2017"


The following tables show Visual C++ features that are available in Visual Studio 2017. An X in a cell indicates that the feature is available; an empty cell indicates that the feature is not available. Notes in parentheses indicate that a feature is available, but restricted.

## Platforms

||||||
|-|-|-|-|-|
|Platform|Visual Studio Express for Windows 10|Visual Studio Express for Windows Desktop|Visual Studio Community/Professional|Visual Studio Enterprise|
|Windows Desktop||X|X|X|
|Universal Windows Platform ((phone, tablet, PC, Xbox, IoT, and HoloLens))|X||X|X|
|Microsoft Store 8.1|||X|X|
|Windows Phone 8.0|||X|X|
|Android|||X|X|
|iOS|||X|X|

## Compilers

|Compiler|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|32-bit X86 compiler|X|X|X|X|
|X86_arm cross-compiler|X||X|X|
|64-bit x64 compiler|||X|X|
|X86_ x64 cross-compiler|X|X|X|X|

## Libraries and Headers

|Library or Header|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Windows headers and libraries and CRT library|(X)|X|X|X|
|C++ Standard Library|X|X|X|X|
|ATL|||X|X|
|MFC|||X|X|
|.NET Framework class library||X|X|X|
|C++ Support Library for .NET||X|X|X|
|OpenMP|X|X|X|X|

## Project Templates

|Template|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|XAML Templates for UWP, Windows 8.1, Windows Phone 8.0|X||X|X|
|Direct3D App|X||X|X|
|DLL (Universal Windows)|X||X|X|
|Static Library (Universal Windows)|X||X|X|
|Windows Runtime Component|X||X|X|
|Unit Test App (Universal Windows)|X||X|X|
|ATL Project|||X|X|
|Class Library (CLR)||X|X|X|
|CLR Console Application||X|X|X|
|CLR Empty Project||X|X|X|
|Custom Wizard|||X|X|
|Empty Project||X|X|X|
|Makefile Project||X|X|X|
|MFC ActiveX Control|||X|X|
|MFC Application|||X|X|
|MFC DLL|||X|X|
|Test Project|X|X|X|X|
|Win32 Console Application||X|X|X|
|Win32 Project||X|X|X|

## Tools

|Tool|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|----------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Incremental Linker (Link.exe)|X|X|X|X|
|Program Maintenance Utility (Nmake.exe)||X|X|X|
|Lib Generator (Lib.exe)|X|X|X|X|
|Windows Resource Compiler (Rc.exe)|X|X|X|X|
|Windows Resource to Object Converter (CvtRes.exe)||X|X|X|
|Browse Information Maintenance Utility (BscMake.exe)|X|X|X|X|
|C++ Name Undecorator (Undname.exe)|X|X|X|X|
|COFF/PE Dumper (Dumpbin.exe)|X|X|X|X|
|COFF/PE Editor (Editbin.exe)|X|X|X|X|
|MASM (Ml.exe)|||X|X|
|Spy++|||X|X|
|ErrLook|||X|X|
|AtlTrace|||X|X|
|Devenv.com|||X|X|
|Inference Rules|||X|X|
|Upgrade VCBuild .vcproj projects to MSBuild (VCUpgrade.exe)|X|X|X|X|
|Profile Guided Optimizations|||X|X|

## Debugging Features

|Debugging Feature|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Native Debugging|X|X|X|X|
|natvis (native type visualization)|X|X|X|X|
|Graphics Debugging|X||X|X|
|Managed Debugging||X|X|X|
|GPU usage|X||X|X|
|Memory usage|X||X|X|
|Remote Debugging|X|X|X|X|
|SQL Debugging|||X|X|
|Static Code Analysis|Limited|Limited|X|X|

## Designers and Editors

|Designer or Editor|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|XAML Designer|X||X|X|
|CSS Style Designer/Editor|X|X|X|X|
|HTML Designer/Editor|X|X|X|X|
|XML Editor|X|X|X|X|
|Source Code Editor|X|X|X|X|
|Productivity Features: Refactoring, IntelliSense, C++ Code Formatting|X|X|X|X|
|Windows Forms Designer||X|X|X|
|Data Designer|||X|X|
|Native Resource Editor (.rc files)|||X|X|
|Resource Editors|X|X|X|X|
|Model editor|X||X|X|
|Shader designer|X||X|X|

## Data Features

|Data Feature|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Data Designer|||X|X|
|Data Objects|||X|X|
|Web Services|||X|X|
|Server Explorer|||X|X|

## Build and Project Systems

|Build or Project Feature|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|------------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Command line builds (msbuild.exe)|X|X|X|X|
|Native Multi-targeting||X|X|X|
|Managed Multi-targeting||X|X|X|
|Parallel Builds|X|X|X|X|
|Build Customizations|X|X|X|X|
|Property Pages Extensibility|X|X|X|X|

## Automation and Extensibility

|Automation and Extensibility|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|----------------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Extensibility Object Models|||X|X|
|Code Model|||X|X|
|Project Model|||X|X|
|Resource Editor Model|||X|X|
|Wizard Model|||X|X|
|Debugger Object Model|||X|X|

## Application Lifecycle Management Tools

||||||
|-|-|-|-|-|
|Tool|Visual Studio Express for Windows|Visual Studio Express for Windows Desktop|Visual Studio Professional / Community|Visual Studio Enterprise|
|Unit Testing (native framework)|X|X|X|X|
|Unit Testing (managed framework)||X|X|X|
|Code coverage||||X|
|Manual testing||||X|
|Exploratory testing||||X|
|Test case management||||X|
|Code map and dependency graphs|||read-only|X|
|Code map debugging||||X|

## See also

[Install Visual Studio](/visualstudio/install/install-visual-studio)<br/>
[What's New in Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)<br/>
[C++ project types in Visual Studio](../build/reference/visual-cpp-project-types.md)<br/>

::: moniker-end
