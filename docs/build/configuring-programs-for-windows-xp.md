---
title: "Configuring Programs for Windows XP"
description: "How to install and use the C++ Windows XP toolsets in Visual Studio."
ms.date: 09/17/2021
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
---
# Configuring Programs for Windows XP

Visual Studio supports multiple platform toolsets. That means it's possible to target operating systems and runtime libraries that aren't supported by the default toolset. For example, by switching the platform toolset, you can use the Visual Studio 2017 C++ compiler to create apps that target Windows XP and Windows Server 2003. You can also use older platform toolsets to maintain binary-compatible legacy code and still take advantage of the latest features of the Visual Studio IDE.

::: moniker range=">=msvc-160"

The toolset supplied in Visual Studio 2019 and later doesn't include support for creating code for Windows XP. Support for Windows XP development is available by using the Visual Studio 2017 v141_xp toolset. You can install the v141_xp toolset as an individual component option in the Visual Studio Installer.

::: moniker-end

## Install the Windows XP platform toolset

::: moniker range="<=msvc-150"

To get the Visual Studio 2017 platform toolset and components to target Windows XP and Windows Server 2003, run the Visual Studio Installer. When you initially install Visual Studio or when you modify an existing installation, make sure the **Desktop development with C++** workload is selected. In the list of optional components for this workload, choose **Windows XP support for C++**, and then choose **Install** or **Modify**.

::: moniker-end

::: moniker range=">=msvc-160"

To get the v141_xp platform toolset and components to target Windows XP and Windows Server 2003, run the Visual Studio Installer. When you initially install Visual Studio, or when you modify an existing installation, make sure the **Desktop development with C++** workload is selected. In the **Individual components** tab, under **Compilers, build tools, and runtimes**, choose **C++ Windows XP Support for VS 2017 (v141) tools \[Deprecated]**, and then choose **Install** or **Modify**.

::: moniker-end

## Windows XP targeting experience

The Windows XP platform toolset that's included in Visual Studio is a version of the Windows 7 SDK, but it uses the Visual Studio 2017 C++ compiler. It also configures project properties to appropriate default values, for example, the specification of a compatible linker for down-level targeting. Only Windows desktop apps created by using a Windows XP platform toolset can run on Windows XP and Windows Server 2003. Those apps can also run on more recent Windows operating systems.

### To target Windows XP

1. In **Solution Explorer**, open the shortcut menu for your project, and then choose **Properties**.

1. In the **Property Pages** dialog box for the project, set the **Configuration** dropdown to **All configurations**.

1. Select the **Configuration Properties** > **General** property page. Set the **Platform Toolset** property to your preferred Windows XP toolset. For example, choose **Visual Studio 2017 - Windows XP (v141_xp)** to create code for Windows XP and Windows Server 2003 by using the Microsoft C++ compiler from Visual Studio 2017.

### C++ runtime support

Along with the Windows XP platform toolset, several libraries include runtime support for Windows XP and Windows Server 2003:

- Universal C Runtime Library (UCRT)
- C++ Standard Library
- Active Template Library (ATL)
- Concurrency Runtime Library (ConcRT)
- Parallel Patterns Library (PPL)
- Microsoft Foundation Class Library (MFC)
- C++ AMP (C++ Accelerated Massive Programming) library.

The minimum supported versions of these operating systems are: Windows XP Service Pack 3 (SP3) for x86, Windows XP Service Pack 2 (SP2) for x64, and Windows Server 2003 Service Pack 2 (SP2) for both x86 and x64.

These libraries are supported by the platform toolsets installed by Visual Studio, depending on the target:

|Library|Default platform toolset targeting Windows desktop apps|Default platform toolset targeting Store apps|Windows XP platform toolset targeting Windows XP, Windows Server 2003|
|---|---|---|---|
|CRT|X|X|X|
|C++ Standard Library|X|X|X|
|ATL|X|X|X|
|ConcRT/PPL|X|X|X|
|MFC|X||X|
|C++ AMP|X|X||

> [!NOTE]
> Apps that are written in C++/CLI and target the .NET Framework 4 run on Windows XP and Windows Server 2003.

### Differences between the toolsets

Because of differences in platform and library support, the development experience for apps that use a Windows XP platform toolset isn't as complete as for apps that use the default platform toolset.

- **C++ language features**

   Only C++ language features implemented in Visual Studio 2017 are supported in apps that use the v141\_xp platform toolset. Only C++ language features implemented in Visual Studio 2015 are supported in apps that use the v140\_xp platform toolset. Visual Studio uses the corresponding compiler when it builds using the older platform toolsets. Use the most recent Windows XP platform toolset to take advantage of the latest C++ language features implemented in that version of the compiler. For more information about language feature support by compiler version, see [Microsoft C/C++ language conformance](../overview/visual-cpp-language-conformance.md).

- **Remote debugging**

   Remote debugging on Windows XP or Windows Server 2003 isn't supported by Remote Tools for Visual Studio. To debug an app locally or remotely on Windows XP or Windows Server 2003, use a debugger from an older version of Visual Studio. It's similar to debugging an app on Windows Vista: Vista is a *runtime* target of the platform toolset, but not a *remote debugging* target.

- **Static analysis**

   The Windows XP platform toolsets don't support static analysis. The SAL annotations for the Windows 7 SDK and the runtime libraries are incompatible. You can still run static analysis on an app that supports Windows XP or Windows Server 2003. Temporarily switch the solution to target the default platform toolset for the analysis, and then switch back to the Windows XP platform toolset to build the app.

- **Debugging of DirectX graphics**

   The Graphics Debugger doesn't support the Direct3D 9 API. It can't be used to debug apps that use Direct3D on Windows XP or Windows Server 2003. However, if the app implements an alternative renderer based on Direct3D 10 or Direct3D 11 APIs, you can use the Graphics Debugger to diagnose problems.

- **Building HLSL**

   The Windows XP toolset doesn't compile HLSL source code files by default. To compile HLSL files, download and install the June 2010 DirectX SDK, and then set the project's VC directories to include it. For more information, see the "DirectX SDK Does Not Register Include/Library Paths with Visual Studio 2010" section of the [June 2010 DirectX SDK download page](https://web.archive.org/web/20161026183606/https://www.microsoft.com/en-us/download/details.aspx?displaylang=en&id=6812) (Archived link).

## Windows XP deployment

> [!IMPORTANT]
> Because it lacks support for SHA-256 code signing certificates, runtime library support for Windows XP is no longer available in the [latest Visual C++ Redistributable](../windows/latest-supported-vc-redist.md) for Visual Studio 2015, 2017, 2019, and 2022. The last Redistributable to support Windows XP shipped in Visual Studio 2019 version 16.7. Use a Redistributable that has a file version starting with **14.27**. If your Windows XP apps are deployed with or updated to a later version of the redistributable, the apps won't run.

If you're using a version of Visual Studio later than Visual Studio 2019 version 16.7, the redistributable files won't work on Windows XP. To get a copy of the redistributable files that support Windows XP, you'll need a Visual Studio account. Use the account you use to sign in to Visual Studio. Or, you can create an account for free at [my.visualstudio.com](https://my.visualstudio.com). The redistributable file is available in the Downloads section, as [Visual C++ Redistributable for Visual Studio 2019 - Version 16.7](https://my.visualstudio.com/Downloads?q=Redistributable%20for%20Visual%20Studio%202019%20Version%2016.7). To download the files, select the platform and language you need, and then choose the Download button.

You can use central deployment or local deployment to install runtime library support for your Windows XP app. For more information, see [Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package](../windows/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).
