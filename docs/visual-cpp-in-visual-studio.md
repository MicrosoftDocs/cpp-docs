---
title: "Visual C++ in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "1/02/2018"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["unmanaged code, C++", "development environment, Visual C++", "unmanaged code", "Visual C++", "Visual C++, reference"]
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Visual C++ in Visual Studio

**This documentation applies to Visual Studio 2015 and Visual Studio 2017**

Microsoft Visual C++, usually shortened to Visual C++ or MSVC, is the name for the C++, C, and assembly language development tools and libraries available as part of Visual Studio on Windows. These tools and libraries let you create Universal Windows Platform (UWP) apps, native Windows desktop and server applications, cross-platform libraries and apps that run on Windows, Linux, Android, and iOS, as well as managed apps and libraries that use the .NET Framework. You can use Visual C++ to write anything from simple console apps to the most sophisticated and complex apps for Windows desktop, from device drivers and operating system components to cross-platform games for mobile devices, and from the smallest IoT devices to multi-server high performance computing in the Azure cloud.

## General information about Visual C++

[//]: # (No versioning zones needed here yet. We just link to what's new for both 2015 and 2017. All other links on this page are valid for both.)

[What's New for C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
Find out what’s new in Visual Studio 2017.

[What's New for C++ in Visual Studio 2003 through 2015](porting/visual-cpp-what-s-new-2003-through-2015.md)<br/>
Find out what was new in C++ for each version of Visual Studio from 2003 through 2015.

[C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md)<br/>
Learn about C++ conformance improvements in Visual Studio 2017.

[Visual C++ language conformance](visual-cpp-language-conformance.md)<br/>
A list of conformance status by feature in the MSVC C++ compiler.

[Visual C++ change history 2003 - 2015](porting/visual-cpp-change-history-2003-2015.md)<br/>
Learn about the breaking changes in previous versions.

[Welcome Back to C++](cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
Learn more about modern C++ programming techniques based on C++11 and C++14 that enable you to write fast, safe code and avoid many of the pitfalls of C-style programming.

[How to Report a Problem with the Visual C++ Toolset](how-to-report-a-problem-with-the-visual-cpp-toolset.md)<br/>
Learn how to create effective error reports against the Visual C++ toolset (compiler, linker, and other tools), and ways to submit your report.

[Visual C++ Porting and Upgrading Guide](porting/visual-cpp-porting-and-upgrading-guide.md)<br/>
Guidance for porting code and upgrading projects to Visual Studio 2015 or Visual Studio 2017, including porting C++ code to Windows 10 and the Universal Windows Platform.

[Visual C++ Team Blog](http://blogs.msdn.com/b/vcblog/)<br/>
Learn more about new features and the latest information from the developers of [!INCLUDE[vcprvc](build/includes/vcprvc_md.md)].

[Visual Studio Downloads](http://go.microsoft.com/fwlink/p/?linkid=235233)<br/>
Download Visual Studio.

[Visual C++ Tools and Features in Visual Studio Editions](ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)<br/>
Find out about different Visual Studio editions.

[Supported Platforms](supported-platforms-visual-cpp.md)<br/>
Find out which platforms are supported.

[Visual C++ Samples](visual-cpp-samples.md)<br/>
Information about samples.

[Visual Studio Developer Community](https://developercommunity.visualstudio.com/)<br/>
Find out how to get help, file bugs, and make suggestions for Visual Studio.

## Writing applications in C++

[Universal Windows Apps](windows/universal-windows-apps-cpp.md)<br/>
Find guides and reference content on the Windows Developer Center. For information about developing UWP apps, see [Intro to the Universal Windows Platform](/windows/uwp/get-started/universal-application-platform-guide) and [Create your first UWP app using C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

[Desktop Applications (C++)](windows/desktop-applications-visual-cpp.md)<br/>
Learn how to create desktop applications that have a message loop and callbacks.

[DLLs in Visual C++](build/dlls-in-visual-cpp.md)<br/>
Find out how to use Win32, ATL, and MFC to create Windows desktop DLLs, and provides information about how to compile and register your DLL.

[Parallel Programming](parallel/parallel-programming-in-visual-cpp.md)<br/>
Learn how to use the Parallel Patterns Library, C++ AMP, OpenMP, and other features that are related to multithreading on Windows.

[Security Best Practices](security/security-best-practices-for-cpp.md)<br/>
Learn how to protect applications from malicious code and unauthorized use.

[Cloud and Web Programming](cloud/cloud-and-web-programming-in-visual-cpp.md)<br/>
In C++, you have several options for connecting to the web and the cloud.

[Data Access](data/data-access-in-cpp.md)<br/>
Connect to databases using ODBC and other database access technologies.

[Text and Strings](text/text-and-strings-in-visual-cpp.md)<br/>
Learn about working with different text and string formats and encodings for local and international development.

## C++ development tools

To find out about how to create projects, work with source code files, link to libraries, compile, debug, profile, deploy, and more, see [IDE and Development Tools](ide/ide-and-tools-for-visual-cpp-development.md).

## C++ language reference

For information about the C++ language, see [C++ Language Reference](cpp/cpp-language-reference.md).

For information about the C++ preprocessor, see [C/C++ Preprocessor Reference](preprocessor/c-cpp-preprocessor-reference.md).

## C++ Libraries in Visual Studio

The following sections provide information about the different C and C++ libraries that are included in Visual Studio.

[C Run-Time Library Reference](c-runtime-library/c-run-time-library-reference.md)<br/>
Includes security-enhanced alternatives to functions that are known to pose security issues.

[C++ Standard Library](standard-library/cpp-standard-library-reference.md)<br/>
The C++ Standard Library.

[Active Template Library (ATL)](atl/atl-com-desktop-components.md)<br/>
Support for COM components and apps.

[Microsoft Foundation Class (MFC) libraries](mfc/mfc-desktop-applications.md)<br/>
Support for creating desktop apps that have traditional or Office-style user interfaces.

[Parallel Patterns Library (PPL)](parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Asynchronous and parallel algorithms that execute on the CPU.

[C++ AMP (C++ Accelerated Massive Parallelism)](parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
Massively parallel algorithms that execute on the GPU.

[Windows Runtime Template Library (WRL)](http://msdn.microsoft.com/library/windows/apps/hh438466.aspx)<br/>
Universal Windows Platform (UWP) apps and components.

[.NET Programming with C++/CLI](dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
Programming for the common language runtime (CLR).

## Other C++ libraries

You can use the vcpkg command-line tool to greatly simplify the discovery and installation of over 600 C++ open-source libraries. See [vcpkg: C++ Package Manager for Windows](vcpkg.md).

## More resources

[Standard C++](http://isocpp.org/)<br/>
Learn about C++, get an overview of Modern C++, and find links to books, articles, talks, and events

[Learn Visual C++](http://msdn.microsoft.com/vstudio/hh386302.aspx)<br/>
Start learning C++.

## See also

- [C Language Reference](c-language/c-language-reference.md)
- [C Run-Time Library Reference](c-runtime-library/c-run-time-library-reference.md)
- [Compiler Intrinsics and Assembly Language](intrinsics/compiler-intrinsics-and-assembly-language.md)
