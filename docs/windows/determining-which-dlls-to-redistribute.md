---
description: "Learn more about: Determine which DLLs to redistribute"
title: "Determine which DLLs to redistribute"
ms.date: 06/28/2022
helpviewer_keywords: ["redistributing DLLs", "DLLs [C++], redistributing", "dependencies [C++], application deployment and", "application deployment [C++], DLL redistribution", "deploying applications [C++], DLL redistribution"]
ms.assetid: f7a2cb42-fb48-42ab-abd2-b35e2fd5601a
---
# Determine which DLLs to redistribute

When you build an application that uses library DLLs supplied by Visual Studio, users of your application must also have those DLLs on their computers for the application to run. Because most users probably don't have Visual Studio installed, you must provide these DLLs for them. Visual Studio makes these DLLs available as *Redistributable files* that you can include in your application installer.

:::moniker range=">=msvc-150"

To make it easier to include the Redistributable DLLs with your installer, they're available as stand-alone *Redistributable packages*. These packages are architecture-specific executables that use central deployment to install the Redistributable files on a user's computer. For example, `vc_redist.x86.exe` installs the 32-bit libraries for both x86 and x64 computers, `vc_redist.x64.exe` installs the 64-bit libraries for x64 computers, and `vcredist.ARM64.exe` installs the libraries for ARM and ARM64 computers. We recommend central deployment because Microsoft can use the Windows Update service to independently update these libraries. In addition to the copy in your Visual Studio installation, the current Redistributable packages are available for download. For links to the latest supported Redistributable packages for both current and older toolsets, see [The latest supported Visual C++ Redistributable downloads](latest-supported-vc-redist.md). Specific earlier versions of the Redistributable packages may be found by searching [`my.visualstudio.com`](https://my.visualstudio.com/) for "Visual C++ Redistributable Packages".

:::moniker-end

:::moniker range="=msvc-140"

To make it easier to include the Redistributable DLLs with your installer, they're available as stand-alone *Redistributable packages*. These packages are architecture-specific executables that use central deployment to install the Redistributable files on a user's computer. For example, `vcredist_x86.exe` installs the 32-bit libraries for both x86 and x64 computers, `vcredist_x64.exe` installs the 64-bit libraries for x64 computers, and `vcredist_ARM.exe` installs the libraries for ARM computers. We recommend central deployment because Microsoft can use the Windows Update service to independently update these libraries. In addition to the copy in your Visual Studio installation, the current Redistributable packages are available for download. For links to the latest supported Redistributable packages for both current and older toolsets, see [The latest supported Visual C++ downloads](latest-supported-vc-redist.md). Specific earlier versions of the Redistributable packages may be found by searching [`my.visualstudio.com`](https://my.visualstudio.com/) for "Visual C++ Redistributable Packages".

:::moniker-end

We only support using a Redistributable package that's the same as or newer than your toolset version. The major version number of the Redistributable package you deploy must match the version of the Visual Studio toolset used to create your application, and the minor version must be the same or higher. Visual Studio 2022, 2019, 2017 and 2015 all have *compatible* toolset version numbers. For these versions, any newer Visual Studio Redistributable files may be used by apps built by a toolset from an older version. For example, Visual Studio 2022 Redistributable files may be used by apps built by using the Visual Studio 2017 or 2015 toolset. While they may be compatible, we don't support using older Redistributable files in apps built by using a newer toolset. For example, using the 2017 Redistributable files in apps built by using the 2019 toolset isn't supported.

:::moniker range=">=msvc-150"

It's also possible to include the Redistributable DLLs with your installer in *merge modules*. **This method is now deprecated because libraries deployed this way can't be updated automatically by Windows Update.** Redistributable merge modules, or Microsoft Installer modules (*`.msm`* files), are optional components available in the Visual Studio Installer. When installed, merge modules for the Redistributable DLLs are found in your Visual Studio installation directory under `%VCToolsRedistDir%\MergeModules\`. In Visual Studio 2015 and earlier versions of Visual Studio, these files are found in your *Program Files* or *Program Files (x86)* directory in a `Common Files\Merge Modules` subdirectory. For more information about use of these files, see [Redistributing components by using Merge Modules](redistributing-components-by-using-merge-modules.md).

The individual Redistributable DLLs are also included in your installation of Visual Studio. By default, they're installed in the Visual the `%VCToolsRedistDir%\debug_nonredist\[architecture]\Microsoft.[toolset].[library]` folders, where `[architecture]` represents the target architecture, `[toolset]` represents the toolset version, and `[library]` is the Debug library that has the debug DLLs.

:::moniker-end

:::moniker range="=msvc-140"

It's also possible to include the Redistributable DLLs with your installer in *merge modules*. **This method is now deprecated because libraries deployed this way can't be updated automatically by Windows Update.** Redistributable merge modules for the Redistributable DLLs are found in your *Program Files* or *Program Files (x86)* directory in a `Common Files\Merge Modules` subdirectory. For more information about use of these files, see [Redistributing components by using Merge Modules](redistributing-components-by-using-merge-modules.md).

The individual Redistributable DLLs are also included in your installation of Visual Studio. By default, they're installed in the Visual Studio 2015 installation directory in the `redist\debug_nonredist\[architecture]\Microsoft.[toolset].[library]` folders, where `[architecture]` represents the target architecture, `[toolset]` represents the toolset version, and `[library]` is the Debug library that has the debug DLLs.

:::moniker-end

Use the latest version of any library DLL file, Redistributable package, or merge module found in these directories. You may use these libraries for local deployment, by installing them in the same directory as your application. We don't recommend local deployment because it makes you responsible for delivering updates to your deployed applications. Central deployment by using the Redistributable packages is preferred.

To determine which DLLs you have to redistribute with your application, collect a list of the DLLs that your application depends on. These DLLs are normally listed as import library inputs to the linker. Certain libraries, such as vcruntime and the Universal C Runtime Library (UCRT), are included by default. If your app or one of its dependencies uses `LoadLibrary` to dynamically load a DLL, that DLL may not be listed in the inputs to the linker. One way to collect the list of dynamically loaded DLLs is to run Dependency Walker (`depends.exe`) on your app, as described in [Understanding the Dependencies of a Visual C++ Application](understanding-the-dependencies-of-a-visual-cpp-application.md). Unfortunately, this tool is outdated and may report that it can't find certain DLLs.

When you have the list of dependencies, compare it to the list linked in the `Redist.txt` file found under the Microsoft Visual Studio installation directory. Or, to the "REDIST list" of Redistributable DLLs that is referenced in the "Distributable Code Files" section of the Microsoft Software License Terms for your copy of Visual Studio. For Visual Studio 2022, see [Distributable Code for Visual Studio 2022](/visualstudio/releases/2022/redistribution). For Visual Studio 2019, see [Distributable Code for Visual Studio 2019](/visualstudio/releases/2019/redistribution). For Visual Studio 2017, see [Distributable Code for Microsoft Visual Studio 2017 (Includes Utilities, Extensibility, and BuildServer Files)](/visualstudio/productinfo/2017-redistribution-vs). For Visual Studio 2015, see [Distributable Code for Microsoft Visual Studio 2015 and Microsoft Visual Studio 2015 SDK (Includes Utilities and BuildServer Files)](/visualstudio/productinfo/2015-redistribution-vs). For Visual Studio 2013, the list is available online in [Distributable Code for Microsoft Visual Studio 2013 and Microsoft Visual Studio 2013 SDK](/visualstudio/productinfo/2013-redistribution-vs).

In Visual Studio versions before Visual Studio 2015, the C Runtime Library (CRT) was included as a Redistributable DLL, in `msvc[version].dll`. In Visual Studio 2015, the functions in the CRT were refactored into the vcruntime and the UCRT. The UCRT is now a system component in Windows 10 and later, managed by Windows Update. It's available on all Windows 10 and later operating systems. To deploy your application to earlier operating systems, you may need to redistribute the UCRT as well. An early version of the UCRT is included in the Visual Studio Redistributable files. This version is only installed on operating systems earlier than Windows 10, and only if no version of the UCRT is already installed. For an installable version of the UCRT for downlevel systems as a Microsoft System Update package, see [Windows 10 Universal C Runtime](https://www.microsoft.com/download/details.aspx?id=48234) in the Microsoft Download Center.

You can't redistribute all of the files that are included in Visual Studio. You're only permitted to redistribute the files that are specified in `Redist.txt` or the online "REDIST list." You also can't redistribute debug versions of your applications, or the debug versions of DLLs or libraries supplied by Microsoft. You may only copy debug executables and libraries to machines you use for testing. For more information, see [Choosing a deployment method](choosing-a-deployment-method.md).

The following table describes some of the Visual C++ DLLs that your application might depend on.

| Visual C++ Library | Description | Applies to |
|--|--|--|
| `vcruntime[version].dll` | Runtime Library for native code. | Applications that use the normal C and C++ language startup and termination services. |
| `vccorlib[version].dll` | Runtime Library for managed code. | Applications that use the C++ language services for managed code. |
| `msvcp[version].dll` and `msvcp[version_dotnumber].dll` | C++ Standard Library for native code. | Applications that use the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). |
| `concrt[version].dll` | Concurrency Runtime Library for native code. | Applications that use the [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md). |
| `mfc[version].dll` | Microsoft Foundation Classes (MFC) Library. | Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md). |
| `mfc[version][language].dll` | Microsoft Foundation Classes (MFC) Library Resources. | Applications that use specific language resources for MFC. |
| `mfc[version]u.dll` | MFC Library with Unicode support. | Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) and require Unicode support. |
| `mfcmifc80.dll` | MFC Managed Interfaces Library. | Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) with [Windows Forms Controls](/dotnet/framework/winforms/controls/index). |
| `mfcm[version].dll` | MFC Managed Library. | Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) with [Windows Forms Controls](/dotnet/framework/winforms/controls/index). |
| `mfcm[version]u.dll` | MFC Managed Library with Unicode support. | Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) with [Windows Forms Controls](/dotnet/framework/winforms/controls/index) and require Unicode support. |
| `vcamp[version].dll` | AMP Library for native code. | Applications that use the [C++ AMP library](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md) code. |
| `vcomp[version].dll` | OpenMP Library for native code. | Applications that use the [C++ OpenMP library](../parallel/openmp/openmp-in-visual-cpp.md) code. |

> [!NOTE]
> You no longer need to redistribute the Active Template Library as a separate DLL. Its functionality has been moved to headers and a static library.

For more information about how to redistribute these DLLs with your application, see [Redistributing Visual C++ files](redistributing-visual-cpp-files.md). For examples, see [Deployment examples](deployment-examples.md).

Typically, you don't have to redistribute system DLLs because they're part of the operating system. However, there might be exceptions, for example, when your application will run on several versions of Microsoft operating systems. In this case, be sure to read the corresponding license terms. Also, try to get the system DLLs upgraded either through Windows Update, service packs or by using Redistributable packages made available by Microsoft.

## See also

[Choosing a deployment method](choosing-a-deployment-method.md)\
[Deploying desktop applications](deploying-native-desktop-applications-visual-cpp.md)
