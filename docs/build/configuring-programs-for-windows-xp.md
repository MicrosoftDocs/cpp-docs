---
title: "Configuring Programs for Windows XP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
caps.latest.revision: 14
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
# Configuring Programs for Windows XP
Because Visual Studio supports multiple platform toolsets, you can target operating systems and runtime libraries that are not supported by the default toolset. For example, by switching the platform toolset, you can use the C++11, C++14, and C++17 language enhancements supported by the Visual C++ compiler in Visual Studio to create apps that target [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. You can also use older platform toolsets to maintain binary-compatible legacy code and still take advantage of the latest features of the Visual Studio IDE.  
  
> [!NOTE]
>  If you are using [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)], you must install [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] Update 4 to add platform toolset support for [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. To download and install a copy of [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] Update 4, see [Microsoft Visual Studio Express 2012 for Windows Desktop](http://go.microsoft.com/fwlink/?LinkID=265464) in the Microsoft Download Center. Then install [Visual Studio 2012 Update 4](http://go.microsoft.com/fwlink/?LinkID=335900) to get the v110_xp platform toolset. Use Windows Update to receive the latest software updates after installation.  
  
## Windows XP targeting experience  
 The Windows XP platform toolset that's included in Visual Studio is a version of the [!INCLUDE[win7](../build/includes/win7_md.md)] SDK that was included in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)], but it uses the current C++ compiler. It also configures project properties to appropriate default values—for example, the specification of a compatible linker for down-level targeting. Only Windows desktop apps that are created by using the Windows XP platform toolset run on [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], but those apps can also run on more recent Windows operating systems.  
  
#### To target Windows XP  
  
1.  In **Solution Explorer**, open the shortcut menu for your project, and then choose **Properties**.  
  
2.  In the **Property Pages** dialog box for the project, under **Configuration Properties**, **General**, set the **Platform Toolset** property to the desired Windows XP toolset. For example, choose **Visual Studio 2015 – Windows XP (v140_xp)** to create code for [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] by using the Microsoft Visual C++ 2015 compiler.  
  
### C++ runtime support  
 Along with the Windows XP platform toolset, the C Runtime Library (CRT), Standard Template Library (STL), Active Template Library (ATL), Concurrency Runtime Library (ConCRT), Parallel Patterns Library (PPL), Microsoft Foundation Class Library (MFC), and C++ AMP (C++ Accelerated Massive Programming) library include runtime support for [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. For these operating systems, the minimum supported versions are [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 3 (SP3) for x86, [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 2 (SP2) for x64, and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] Service Pack 2 (SP2) for both x86 and x64.  
  
 These libraries are supported by the platform toolsets installed by Visual Studio, depending on the target:  
  
|Library|Default platform toolset targeting Windows desktop apps|Default platform toolset targeting [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps|Windows XP platform toolset targeting [!INCLUDE[winxp](../build/includes/winxp_md.md)], [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]|  
|-------------|-------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|  
|CRT|X|X|X|  
|STL|X|X|X|  
|ATL|X|X|X|  
|ConCRT/PPL|X|X|X|  
|MFC|X||X|  
|C++ AMP|X|X||  
  
> [!NOTE]
>  Apps that are written in C++/CLI and target the .NET Framework 4 run on [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  
  
### Differences between the toolsets  
 Due to differences in platform and library support, the development experience for apps that use a Windows XP platform toolset is not as complete as for apps that use the default Visual Studio platform toolset.  
  
-   **C++ language features**  
  
     Only C++ language features implemented in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] are supported in apps that use the v110_xp platform toolset. Only C++ language features implemented in [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] are supported in apps that use the v120_xp platform toolset. Visual Studio uses the corresponding compiler when it builds using the older platform toolsets. Use the most recent Windows XP platform toolset to take advantage of additional C++ language features implemented in that version of the compiler.  
  
-   **Remote debugging**  
  
     Remote Tools for Visual Studio doesn't support remote debugging on [!INCLUDE[winxp](../build/includes/winxp_md.md)] or [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. To debug an app when it's running on [!INCLUDE[winxp](../build/includes/winxp_md.md)] or [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], you can use a debugger from an older version of Visual Studio to debug it locally or remotely. This resembles the experience of debugging an app on Windows Vista, which is a runtime target of the platform toolset, but not a remote debugging target.  
  
-   **Static analysis**  
  
     The Windows XP platform toolsets don't support static analysis because the SAL annotations for the [!INCLUDE[win7](../build/includes/win7_md.md)] SDK and the runtime libraries are incompatible. When you want to perform static analysis on an app that supports [!INCLUDE[winxp](../build/includes/winxp_md.md)] or [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], you can temporarily switch the solution to target the default platform toolset to perform the analysis, and then switch back to the Windows XP platform toolset to build the app.  
  
-   **Debugging of DirectX graphics**  
  
     Because the Graphics Debugger does not support the Direct3D 9 API, it cannot be used to debug apps that use Direct3D on [!INCLUDE[winxp](../build/includes/winxp_md.md)] or [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. However, if the app implements an alternative renderer that uses the Direct3D 10 or Direct3D 11 APIs, the Graphics Debugger can be used to diagnose problems with the use of those APIs.  
  
-   **Building HLSL**  
  
     By default, the Windows XP toolset does not compile HLSL source code files. To compile HLSL files, download and install the June 2010 DirectX SDK, and then set the project's VC directories to include it. For more information, see the "DirectX SDK Does Not Register Include/Library Paths with Visual Studio 2010" section of the [June 2010 DirectX SDK download page](http://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).