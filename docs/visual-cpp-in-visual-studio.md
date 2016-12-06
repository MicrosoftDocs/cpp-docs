---
title: "Visual C++ in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "visual c++"
  - "visual c"
  - "vc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unmanaged code, C++"
  - "development environment, Visual C++"
  - "unmanaged code"
  - "Visual C++"
  - "Visual C++, reference"
ms.assetid: e8dcc44c-a3e2-4ffe-887c-fd15b18dc458
caps.latest.revision: 61
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Visual C++ in Visual Studio
The [!INCLUDE[vcprvc](build/includes/vcprvc_md.md)] programming language and development tools help you develop native Universal Windows apps, native desktop and server applications, cross-platform libraries that run on Android and iOS as well as Windows, and managed apps that run on the .NET Framework.  
  
 **Who is this documentation for?**  
  
 This content is for C++ developers who are writing programs.  
  
-   If you are looking for a C++ redistributable package and runtime components so that you can run a program, go to the [Microsoft Download Center](http://www.microsoft.com/en-us/download/) and enter **Visual C++** in the search box.  
  
-   If you are looking for an introduction to C++ programming concepts, go to one of the many websites that offer this content, or get a copy of [Programming -- Principles and Practice Using C++ (Second Edition)](http://stroustrup.com/Programming/) by the inventor of C++, Bjarne Stroustrup. The Visual C++ content assumes you already have a basic familiarity with C++.  
  
-   If you are looking for the Visual C++ compiler, you need to download a paid or free edition of Visual Studio from [https://www.visualstudio.com/](https://www.visualstudio.com/).  

## General Information about Visual C++  
 [What's New for Visual C++](what-s-new-for-visual-cpp-in-visual-studio.md)  
 Find out what’s new in Visual C++.  
  
 [Visual C++ change history 2003 - 2015](porting/visual-cpp-change-history-2003-2015.md)  
 Learn about the breaking changes in this version.  
  
 [Welcome Back to C++](cpp/welcome-back-to-cpp-modern-cpp.md)  
 Learn more about modern C++ programming techniques based on C++11 and C++14 that enable you to write fast, safe code and avoid many of the pitfalls of C-style programming.  
  
 [How to Report a Problem with the Visual C++ Toolset](how-to-report-a-problem-with-the-visual-cpp-toolset.md)  
 Learn how to create effective error reports against the Visual C++ toolset (compiler, linker, and other tools), and ways to submit your report.  
  
 [Visual C++ Porting and Upgrading Guide](porting/visual-cpp-porting-and-upgrading-guide.md)  
 Guidance for porting code and upgrading projects to Visual C++ in [!INCLUDE[vs_dev14](ide/includes/vs_dev14_md.md)], including porting C++ code to Windows 10 and the Universal Windows Platform.  
  
 [Support For C++11/14/17 Features (Modern C++)](cpp/support-for-cpp11-14-17-features-modern-cpp.md)  
 Learn about support for C++11 and C++14 features in Visual C++.  
  
 [Visual C++ Team Blog](http://blogs.msdn.com/b/vcblog/)  
 Learn more about new features and the latest information from the developers of [!INCLUDE[vcprvc](build/includes/vcprvc_md.md)].  
  
 [Visual Studio Downloads](http://go.microsoft.com/fwlink/?LinkId=235233)  
 Download Visual C++.  
  
 [Visual C++ Tools and Features in Visual Studio Editions](ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)  
 Find out about different Visual Studio editions.  
  
 [Supported Platforms](supported-platforms-visual-cpp.md)  
 Find out which platforms are supported.  
  
 [Visual C++ Samples](visual-cpp-samples.md)  
 Information about samples.  
  
 [Visual Studio Community](http://go.microsoft.com/fwlink/?LinkId=235296)  
 Find out how to get help, file bugs, and make suggestions for Visual Studio.  
  
## Writing Applications in C++  
 [Universal Windows Apps](windows/universal-windows-apps-cpp.md)  
 Find guides and reference content on the Windows Developer Center. For information about developing Windows Store apps, see [Develop Windows Store apps using Visual Studio](http://go.microsoft.com/fwlink/p/?LinkId=248364) and [Roadmap for Windows Store apps using C++](http://go.microsoft.com/fwlink/p/?LinkId=244654).  
  
 [Desktop Applications (Visual C++)](windows/desktop-applications-visual-cpp.md)  
 Learn how to create desktop applications that have a message loop and callbacks.  
  
 [DLLs in Visual C++](build/dlls-in-visual-cpp.md)  
 Find out how to use Win32, ATL, and MFC to create Windows desktop DLLs, and provides information about how to compile and register your DLL.  
  
 [Parallel Programming](parallel/parallel-programming-in-visual-cpp.md)  
 Learn how to use the Parallel Patterns Library, C++ AMP, OpenMP, and other features that are related to multithreading on Windows.  
  
 [Security Best Practices](security/security-best-practices-for-cpp.md)  
 Learn how to protect applications from malicious code and unauthorized use.  
  
 [Cloud and Web Programming](cloud/cloud-and-web-programming-in-visual-cpp.md)  
 In C++, you have several options for connecting to the web and the cloud.  
  
 [Data Access](http://msdn.microsoft.com/Library/a9455752-39c4-4457-b14e-197772d3df0b)  
 Connect to databases using ODBC and other database access technologies.  
  
 [Text and Strings](text/text-and-strings-in-visual-cpp.md)  
 Learn about working with different text and string formats and encodings for local and international development.  
  
## C++ Development Tools  
 To find out about how to create projects, work with source code files, link to libraries, compile, debug, profile, deploy, and more, see [IDE and Development Tools](ide/ide-and-tools-for-visual-cpp-development.md).  
  
## C++ Language Reference  
 For information about the C++ language, see [C++ Language Reference](cpp/cpp-language-reference.md).  
  
 For information about the C++ preprocessor, see [C/C++ Preprocessor Reference](preprocessor/c-cpp-preprocessor-reference.md).  
  
## C++ Libraries in Visual Studio  
 The following sections provide information about the different C++ libraries that are included with Visual C++.  
  
 [C Run-Time Library Reference](c-runtime-library/c-run-time-library-reference.md)  
 Includes security-enhanced alternatives to functions that are known to pose security issues.  
  
 [C++ Standard Library](standard-library/cpp-standard-library-reference.md)  
 The Standard Template Library (STL).  
  
 [Active Template Library (ATL)](atl/atl-com-desktop-components.md)  
 Support for  COM components and apps.  
  
 [Microsoft Foundation Class (MFC) libraries](mfc/mfc-desktop-applications.md)  
 Support for creating desktop apps that have traditional or Office-style user interfaces.  
  
 [Parallel Patterns Library (PPL)](parallel/concrt/parallel-patterns-library-ppl.md)  
 Asynchronous and parallel algorithms that execute on the CPU.  
  
 [C++ AMP (C++ Accelerated Massive Parallelism)](parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)  
 Massively parallel algorithms that execute on the GPU.  
  
 [Windows Runtime Template Library (WRL)](http://msdn.microsoft.com/library/windows/apps/hh438466.aspx)  
 [!INCLUDE[win8_appname_long](build/includes/win8_appname_long_md.md)] apps and components.  
  
 [.NET Programming with C++/CLI (Visual C++)](dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)  
 Programming for the common language runtime (CLR).  
  
 See also the documentation for [STL/CLR](dotnet/stl-clr-library-reference.md) and the [C++ Support Library](dotnet/cpp-support-library.md).  
  
## Other C++ libraries  
 This section contains links to libraries that are not included with Visual Studio, but can be downloaded and used with Visual C++.  
  
 [Boost](http://www.boost.org/)  
 A popular and widely-used library.  
  
 [C++ REST SDK](http://casablanca.codeplex.com).  
 A Microsoft library for communicating with web services over HTTP.  
  
## More Resources  
 [Visual C++ Resources](http://msdn.microsoft.com/vstudio/hh386302.aspx)  
 More Visual C++ resources.  
  
 [Standard C++](http://isocpp.org/)  
 Learn about C++, get an overview of Modern C++, and find links to books, articles, talks, and events  
  
 [Learn Visual C++](http://msdn.microsoft.com/vstudio/hh386302.aspx)  
 Start learning C++.  
  
## See Also  
 [C Language Reference](c-language/c-language-reference.md)   
 [C Run-Time Library Reference](c-runtime-library/c-run-time-library-reference.md)   
 [Compiler Intrinsics and Assembly Language](intrinsics/compiler-intrinsics-and-assembly-language.md)