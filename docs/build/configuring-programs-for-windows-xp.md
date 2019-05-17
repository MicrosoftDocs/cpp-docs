---
title: "Configuring Programs for Windows XP"
ms.date: "05/16/2019"
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
---
# Configuring Programs for Windows XP

Because Visual Studio supports multiple platform toolsets, you can target operating systems and runtime libraries that are not supported by the default toolset. For example, by switching the platform toolset, you can use the C++11, C++14, and C++17 language enhancements supported by the MSVC compiler in Visual Studio to create apps that target Windows XP and Windows Server 2003. You can also use older platform toolsets to maintain binary-compatible legacy code and still take advantage of the latest features of the Visual Studio IDE.

Visual Studio 2019 and later does not include support for creating code for Windows XP by using the v142 toolset. Support for Windows XP development by using the v141 toolset that shipped in Visual Studio 2017 is available as an optional component in the Visual Studio Installer.

## Install the Windows XP platform toolset

To get the platform toolset and components to target Windows XP and Windows Server 2003 in Visual Studio 2017, run the Visual Studio Installer. When you initially install Visual Studio or when you choose **Modify** to modify an existing installation, make sure that the **Desktop development with C++** workload is selected. In the list of optional components for this workload, choose **Windows XP support for C++**, and then choose **Install** or **Modify**.

## Windows XP targeting experience

The Windows XP platform toolset that's included in Visual Studio is a version of the Windows 7 SDK, but it uses the current C++ compiler. It also configures project properties to appropriate default values, for example, the specification of a compatible linker for down-level targeting. Only Windows desktop apps that are created by using a Windows XP platform toolset run on Windows XP and Windows Server 2003, but those apps can also run on more recent Windows operating systems.

#### To target Windows XP

1. In **Solution Explorer**, open the shortcut menu for your project, and then choose **Properties**.

1. In the **Property Pages** dialog box for the project, under **Configuration Properties** > **General**, set the **Platform Toolset** property to the desired Windows XP toolset. For example, choose **Visual Studio 2017 - Windows XP (v141_xp)** to create code for Windows XP and Windows Server 2003 by using the Microsoft C++ compiler in Visual Studio 2017.

### C++ runtime support

Along with the Windows XP platform toolset, the C Runtime Library (CRT), C++ Standard Library, Active Template Library (ATL), Concurrency Runtime Library (ConCRT), Parallel Patterns Library (PPL), Microsoft Foundation Class Library (MFC), and C++ AMP (C++ Accelerated Massive Programming) library include runtime support for Windows XP and Windows Server 2003. For these operating systems, the minimum supported versions are Windows XP Service Pack 3 (SP3) for x86, Windows XP Service Pack 2 (SP2) for x64, and Windows Server 2003 Service Pack 2 (SP2) for both x86 and x64.

These libraries are supported by the platform toolsets installed by Visual Studio, depending on the target:

|Library|Default platform toolset targeting Windows desktop apps|Default platform toolset targeting Store apps|Windows XP platform toolset targeting Windows XP, Windows Server 2003|
|---|---|---|---|
|CRT|X|X|X|
|C++ Standard Library|X|X|X|
|ATL|X|X|X|
|ConCRT/PPL|X|X|X|
|MFC|X||X|
|C++ AMP|X|X||

> [!NOTE]
> Apps that are written in C++/CLI and target the .NET Framework 4 run on Windows XP and Windows Server 2003.

### Differences between the toolsets

Due to differences in platform and library support, the development experience for apps that use a Windows XP platform toolset is not as complete as for apps that use the default Visual Studio platform toolset.

- **C++ language features**

   Only C++ language features implemented in Visual Studio 2012 are supported in apps that use the v110\_xp platform toolset. Only C++ language features implemented in Visual Studio 2013 are supported in apps that use the v120\_xp platform toolset. Only C++ language features implemented in Visual Studio 2015 are supported in apps that use the v140\_xp platform toolset. Visual Studio uses the corresponding compiler when it builds using the older platform toolsets. Use the most recent Windows XP platform toolset to take advantage of additional C++ language features implemented in that version of the compiler.

- **Remote debugging**

   Remote Tools for Visual Studio doesn't support remote debugging on Windows XP or Windows Server 2003. To debug an app when it's running on Windows XP or Windows Server 2003, you can use a debugger from an older version of Visual Studio to debug it locally or remotely. This resembles the experience of debugging an app on Windows Vista, which is a runtime target of the platform toolset, but not a remote debugging target.

- **Static analysis**

   The Windows XP platform toolsets don't support static analysis because the SAL annotations for the Windows 7 SDK and the runtime libraries are incompatible. When you want to perform static analysis on an app that supports Windows XP or Windows Server 2003, you can temporarily switch the solution to target the default platform toolset to perform the analysis, and then switch back to the Windows XP platform toolset to build the app.

- **Debugging of DirectX graphics**

   Because the Graphics Debugger does not support the Direct3D 9 API, it cannot be used to debug apps that use Direct3D on Windows XP or Windows Server 2003. However, if the app implements an alternative renderer that uses the Direct3D 10 or Direct3D 11 APIs, the Graphics Debugger can be used to diagnose problems with the use of those APIs.

- **Building HLSL**

   By default, the Windows XP toolset does not compile HLSL source code files. To compile HLSL files, download and install the June 2010 DirectX SDK, and then set the project's VC directories to include it. For more information, see the "DirectX SDK Does Not Register Include/Library Paths with Visual Studio 2010" section of the [June 2010 DirectX SDK download page](http://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).
