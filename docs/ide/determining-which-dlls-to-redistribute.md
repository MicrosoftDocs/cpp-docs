---
title: "Determining Which DLLs to Redistribute | Microsoft Docs"
ms.custom: ""
ms.date: "09/15/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-ide"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "redistributing DLLs"
  - "DLLs [C++], redistributing"
  - "dependencies [C++], application deployment and"
  - "application deployment [C++], DLL redistribution"
  - "deploying applications [C++], DLL redistribution"
ms.assetid: f7a2cb42-fb48-42ab-abd2-b35e2fd5601a
caps.latest.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Determining Which DLLs to Redistribute

When you build an application that uses DLLs supplied by Visual Studio, users of your application must also have those DLLs on their computers for the application to run. Because most users probably do not have Visual Studio installed, you must provide these DLLs for them. Visual Studio makes these DLLs available as *redistributable files* that you can include in your application installer.

The redistributable DLLs are included with your installation of Visual Studio. By default, they are installed in the Visual Studio installation directory in the \VC\Redist\MSVC\*version* folder. 

To make it easier to include the redistributable DLLs with your installer, they are also available as stand-alone *redistributable packages*. These are executables that install the redistributable files on a user's computer. In addition to the copy in your Visual Studio installation, the current redistributable packages are available for download on [VisualStudio.com/Downloads](https://www.visualstudio.com/downloads/) in the Other Tools and Frameworks section. The version of the redistributable package must match the version of the Visual Studio toolset used to create your application. To find matching redistributable packages for earlier versions of Visual Studio, search the [Microsoft Download Center](http://go.microsoft.com/fwlink/p/?LinkId=158431) for "Visual C++ Redistributable Packages".

While redistributable packages are preferred, another way to include the redistributable DLLs with your installer is to use *merge modules*. These Microsoft Installer modules are included in and installed by your application installer. Merge modules for the redistributable DLLs are found in your Visual Studio installation directory under \VC\Redist\MSVC\*version*\MergeModules\. For more information, see [Redistributing Components by using Merge Modules](../cpp/ide/redistributing-components-by-using-merge-modules.md).

To determine which DLLs you have to redistribute with your application, collect a list of the DLLs that your application depends on. One way to collect the list is to run Dependency Walker (depends.exe) on your app, as described in [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). Unfortunately, this tool is outdated and may report that it can't find certain DLLs.

When you have the list of dependencies, compare it to the list linked in the Redist.txt file found somewhere under the Microsoft Visual Studio installation directory, or to the "REDIST list" of redistributable DLLs that is referenced in the "Distributable Code Files" section of the Microsoft Software License Terms for your copy of Visual Studio. For Visual Studio 2017, see [Distributable Code for Microsoft Visual Studio 2017 (Includes Utilities, Extensibility, and BuildServer Files)](http://go.microsoft.com/fwlink/?LinkId=823098). For Visual Studio 2015, see [Distributable Code for Microsoft Visual Studio 2015 and Microsoft Visual Studio 2015 SDK (Includes Utilities and BuildServer Files)](http://go.microsoft.com/fwlink/?LinkId=799794). For Visual Studio 2013, the list is available online in [Distributable Code for Microsoft Visual Studio 2013 and Microsoft Visual Studio 2013 SDK](http://go.microsoft.com/fwlink/p/?LinkId=313603).

You cannot redistribute all of the files that are included in Visual Studio; you are only permitted to redistribute the files that are specified in Redist.txt or the online "REDIST list." Debug versions of applications and the various Visual C++ debug DLLs are not redistributable. For more information, see [Choosing a Deployment Method](../ide/choosing-a-deployment-method.md).

The following table describes some of the Visual C++ DLLs that your application might depend on.

|Visual C++ Library|Description|Applies to|
|--------------------------|-----------------|----------------|
|vcruntime*version*.dll|Runtime Library for native code.|Applications that use the normal C and C++ language startup and termination services.|
|vccorlib*version*.dll|Runtime Library for managed code.|Applications that use the C++ language services for managed code.|
|msvcp*version*.dll|C++ Standard Library for native code.|Applications that use the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md).|
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
>  You no longer need to redistribute the Active Template Library as a separate DLL. Its functionality has been moved to headers and a static library.

For more information about how to redistribute these DLLs with your application, see [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md). For examples, see [Deployment Examples](../ide/deployment-examples.md).

Typically, you do not have to redistribute system DLLs because they are part of the operating system. However, there might be exceptions, for example, when your application will run on several versions of Microsoft operating systems. In this case, be sure to read the corresponding license terms. Also, try to get the system DLLs upgraded either through Windows Update, service packs or by using redistributable packages made available by Microsoft. For links to the latest supported redistributable packages for older toolsets, see [The latest supported Visual C++ downloads](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads). Specific earlier versions of the redistributable packages may be found by searching the [Microsoft Download Center](http://go.microsoft.com/fwlink/p/?LinkId=158431).

## See Also

[Choosing a Deployment Method](../ide/choosing-a-deployment-method.md)   
[Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)
