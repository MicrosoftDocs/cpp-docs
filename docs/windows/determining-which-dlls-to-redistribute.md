---
description: "Learn more about: Determining Which DLLs to Redistribute"
title: "Determining Which DLLs to Redistribute"
ms.date: "07/15/2019"
helpviewer_keywords: ["redistributing DLLs", "DLLs [C++], redistributing", "dependencies [C++], application deployment and", "application deployment [C++], DLL redistribution", "deploying applications [C++], DLL redistribution"]
ms.assetid: f7a2cb42-fb48-42ab-abd2-b35e2fd5601a
---
# Determining Which DLLs to Redistribute

When you build an application that uses library DLLs supplied by Visual Studio, users of your application must also have those DLLs on their computers for the application to run. Because most users probably do not have Visual Studio installed, you must provide these DLLs for them. Visual Studio makes these DLLs available as *redistributable files* that you can include in your application installer.

To make it easier to include the redistributable DLLs with your installer, they are available as stand-alone *redistributable packages*. These are architecture-specific executables that use central deployment to install the redistributable files on a user's computer. For example, vcredist\_x86.exe installs the 32-bit libraries for both x86 and x64 computers, vcredist\_x64.exe installs the 64-bit libraries for x64 computers, and vcredist\_ARM.exe installs the libraries for ARM computers. We recommend central deployment because Microsoft can use the Windows Update service to independently update these libraries. In addition to the copy in your Visual Studio installation, the current redistributable packages are available for download. For links to the latest supported redistributable packages for both current and older toolsets, see [The latest supported Visual C++ downloads](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads). Specific earlier versions of the redistributable packages may be found by searching the [Microsoft Download Center](https://go.microsoft.com/fwlink/p/?LinkId=158431) for "Visual C++ Redistributable Packages".

The major version number of the redistributable package you deploy must match the version of the Visual Studio toolset used to create your application, and the minor version must be the same or higher. Visual Studio 2017 and Visual Studio 2015 have compatible toolset version numbers, which means that the Visual Studio 2017 redistributable files may be used by apps built by using the 2015 toolset. While they may be compatible, we do not support using the 2015 redistributable files in apps built by using the 2017 toolset. We only support using a redistributable package that is the same as or newer than your toolset version.

Another way to include the redistributable DLLs with your installer is to use *merge modules*. These Microsoft Installer modules are included in and installed by your application installer. Merge modules for the redistributable DLLs are found in your Visual Studio installation directory under \\VC\\Redist\MSVC\\*version*\\MergeModules\\. In earlier versions of Visual Studio, these files are found in your \\Program Files or \\Program Files (x86) directory in a Common Files\\Merge Modules subdirectory. For more information about use of these files, see [Redistributing Components by using Merge Modules](redistributing-components-by-using-merge-modules.md).

The individual redistributable DLLs are also included in your installation of Visual Studio. By default, they are installed in the Visual Studio installation directory in the \\VC\\Redist\\MSVC\\*version* folder. The *version* numbers may represent different minor build numbers of a single common set of redistributable files. Use the latest version of any library DLL file, redistributable package, or merge module found in these directories. You may use these libraries for local deployment, by installing them in the same directory as your application. We don't recommend local deployment because it makes you responsible for delivering updates to your deployed applications. Central deployment by using the redistributable packages is preferred.

To determine which DLLs you have to redistribute with your application, collect a list of the DLLs that your application depends on. These are normally listed as import library inputs to the linker. Certain libraries, such as vcruntime and the Universal C Runtime Library (UCRT), are included by default. If your app or one of its dependencies uses LoadLibrary to dynamically load a DLL, that DLL may not be listed in the inputs to the linker. One way to collect the list of dynamically loaded DLLs is to run Dependency Walker (depends.exe) on your app, as described in [Understanding the Dependencies of a Visual C++ Application](understanding-the-dependencies-of-a-visual-cpp-application.md). Unfortunately, this tool is outdated and may report that it can't find certain DLLs.

When you have the list of dependencies, compare it to the list linked in the Redist.txt file found under the Microsoft Visual Studio installation directory, or to the "REDIST list" of redistributable DLLs that is referenced in the "Distributable Code Files" section of the Microsoft Software License Terms for your copy of Visual Studio. For Visual Studio 2017, see [Distributable Code for Microsoft Visual Studio 2017 (Includes Utilities, Extensibility, and BuildServer Files)](/visualstudio/productinfo/2017-redistribution-vs). For Visual Studio 2015, see [Distributable Code for Microsoft Visual Studio 2015 and Microsoft Visual Studio 2015 SDK (Includes Utilities and BuildServer Files)](/visualstudio/productinfo/2015-redistribution-vs). For Visual Studio 2013, the list is available online in [Distributable Code for Microsoft Visual Studio 2013 and Microsoft Visual Studio 2013 SDK](/visualstudio/productinfo/2013-redistribution-vs).

In Visual Studio versions before Visual Studio 2015, the C Runtime Library (CRT) was included as a redistributable DLL, in msvc*version*.dll. Starting in Visual Studio 2015, the functions in the CRT were refactored into the vcruntime and the UCRT. The UCRT is now a system component in Windows 10, managed by Windows Update. It is available on all Windows 10 operating systems. To deploy your application to earlier operating systems, you may need to redistribute the UCRT as well. An early version of the UCRT is included in the Visual Studio redistributable files, which is only installed on operating systems earlier than Windows 10, and only if no version of the UCRT is already installed. For an installable version of the UCRT for downlevel systems as a Microsoft System Update package, see [Windows 10 Universal C Runtime](https://www.microsoft.com/download/details.aspx?id=48234) in the Microsoft Download Center.

You cannot redistribute all of the files that are included in Visual Studio; you are only permitted to redistribute the files that are specified in Redist.txt or the online "REDIST list." Debug versions of applications and the various Visual C++ debug DLLs are not redistributable. For more information, see [Choosing a Deployment Method](choosing-a-deployment-method.md).

The following table describes some of the Visual C++ DLLs that your application might depend on.

|Visual C++ Library|Description|Applies to|
|--------------------------|-----------------|----------------|
|vcruntime*version*.dll|Runtime Library for native code.|Applications that use the normal C and C++ language startup and termination services.|
|vccorlib*version*.dll|Runtime Library for managed code.|Applications that use the C++ language services for managed code.|
|msvcp*version*.dll and msvcp*version*_*dotnumber*.dll|C++ Standard Library for native code.|Applications that use the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md).|
|concrt*version*.dll|Concurrency Runtime Library for native code.|Applications that use the [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).|
|mfc*version*.dll|Microsoft Foundation Classes (MFC) Library.|Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md).|
|mfc*version* *language*.dll|Microsoft Foundation Classes (MFC) Library Resources.|Applications that use specific language resources for MFC.|
|mfc*version*u.dll|MFC Library with Unicode support.|Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) and require Unicode support.|
|mfcmifc80.dll|MFC Managed Interfaces Library.|Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) with [Windows Forms Controls](/dotnet/framework/winforms/controls/index).|
|mfcm*version*.dll|MFC Managed Library.|Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) with [Windows Forms Controls](/dotnet/framework/winforms/controls/index).|
|mfcm*version*u.dll|MFC Managed Library with Unicode support.|Applications that use the [MFC Library](../mfc/mfc-desktop-applications.md) with [Windows Forms Controls](/dotnet/framework/winforms/controls/index) and require Unicode support.|
|vcamp*version*.dll|AMP Library for native code.|Applications that use the [C++ AMP library](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md) code.|
|vcomp*version*.dll|OpenMP Library for native code.|Applications that use the [C++ OpenMP library](../parallel/openmp/openmp-in-visual-cpp.md) code.|

> [!NOTE]
> You no longer need to redistribute the Active Template Library as a separate DLL. Its functionality has been moved to headers and a static library.

For more information about how to redistribute these DLLs with your application, see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md). For examples, see [Deployment Examples](deployment-examples.md).

Typically, you do not have to redistribute system DLLs because they are part of the operating system. However, there might be exceptions, for example, when your application will run on several versions of Microsoft operating systems. In this case, be sure to read the corresponding license terms. Also, try to get the system DLLs upgraded either through Windows Update, service packs or by using redistributable packages made available by Microsoft.

## See also

[Choosing a Deployment Method](choosing-a-deployment-method.md)<br/>
[Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)
