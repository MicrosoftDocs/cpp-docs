---
title: "C and C++ in Visual Studio"
description: "Learn how to use the Microsoft C/C++ compiler and related tools to develop C++ and assembly programs for Windows, Linux, Android, and iOS."
ms.date: 09/29/2022
ms.technology: "cpp-ide"
helpviewer_keywords: ["Visual C++, home page"]
---
# C and C++ in Visual Studio

:::moniker range="msvc-170"

> [!NOTE]
> This developer documentation applies to Visual Studio 2022. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.
>
> If you're looking for a Microsoft Visual C++ Redistributable package so that you can run a program, see the [latest supported Visual C++ downloads](../windows/latest-supported-vc-redist.md).

:::moniker-end

:::moniker range="msvc-160"

> [!NOTE]
> This developer documentation applies to Visual Studio 2019. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.
>
> If you're looking for a Microsoft Visual C++ Redistributable package so that you can run a program, see the [latest supported Visual C++ downloads](../windows/latest-supported-vc-redist.md).

:::moniker-end

:::moniker range="msvc-150"

> [!NOTE]
> This developer documentation applies to Visual Studio 2017. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.
>
> If you're looking for a Microsoft Visual C++ Redistributable package so that you can run a program, see the [latest supported Visual C++ downloads](../windows/latest-supported-vc-redist.md).

:::moniker-end

:::moniker range="msvc-140"

> [!NOTE]
> This developer documentation applies to Visual Studio 2015. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.
>
> If you're looking for a Microsoft Visual C++ Redistributable package so that you can run a program, see the [latest supported Visual C++ downloads](../windows/latest-supported-vc-redist.md).

:::moniker-end

Microsoft Visual C++ (MSVC) refers to the C++, C, and assembly language development tools and libraries available as part of Visual Studio on Windows. These tools and libraries let you create native Windows desktop and server applications, Universal Windows Platform (UWP) apps, or managed apps and libraries that use the .NET Framework. Create cross-platform libraries and apps that run on Windows, Linux, Android, and iOS. You can use MSVC to write anything from simple console apps to the most sophisticated and complex apps for Windows desktop. Write device drivers and operating system components or cross-platform games for mobile devices. Target anything from the smallest IoT devices to multi-server high performance computing in the Azure cloud.

Visual Studio 2015, 2017, 2019, and 2022 can be installed side-by-side. You can use Visual Studio 2019 (compiler toolset v142) or Visual Studio 2017 (v141) to edit and build programs using the toolset from Visual Studio 2017 (v141) and Visual Studio 2015 (v140).

## What's new for C++ in Visual Studio

[What's New for C++ in Visual Studio 2022](what-s-new-for-visual-cpp-in-visual-studio.md)\
Find out what's new in Visual Studio 2022.

[What's New for C++ in Visual Studio 2019](./what-s-new-for-cpp-2019.md)\
Find out what's new in Visual Studio 2019.

[What's New for C++ in Visual Studio 2017](./what-s-new-for-cpp-2017.md)\
Find out what's new in Visual Studio 2017.

[What's New for C++ in Visual Studio 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)\
Find out what was new in C++ for each version of Visual Studio from 2003 through 2015.

[C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md)\
Learn about C++ conformance improvements in Visual Studio.

[Microsoft C/C++ language conformance](./visual-cpp-language-conformance.md)\
Find feature-level language conformance status in the MSVC compiler by Visual Studio version.

[Microsoft C/C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)\
Learn about the breaking changes in previous versions.

## Install Visual Studio C++ and upgrade from earlier versions

[Install C++ support in Visual Studio](../build/vscpp-step-0-installation.md)\
Download Visual Studio and install the Microsoft C/C++ toolset.

[Microsoft C++ porting and upgrading guide](../porting/visual-cpp-porting-and-upgrading-guide.md)\
Guidance for porting code and upgrading projects to Visual Studio 2015 or later. Take advantage of greater compiler conformance to the C++ standard, greatly improved compilation times, and security features such as Spectre mitigation.

[C++ tools and features in Visual Studio editions](visual-cpp-tools-and-features-in-visual-studio-editions.md)\
Find out about different Visual Studio editions.

[Supported platforms](supported-platforms-visual-cpp.md)\
Find out which platforms the Microsoft C/C++ compiler supports.

## Learn C++ using Visual Studio

[Welcome back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)\
Learn more about modern C++ programming techniques based on C++11 and later that enable you to write fast, safe code and avoid many of the pitfalls of C-style programming.

[Standard C++](https://isocpp.org/)\
Learn about C++, get an overview of Modern C++, and find links to books, articles, talks, and events

[Learn Visual Studio and make your first C++ project](../build/vscpp-step-1-create.md)\
Start learning how to write C++ in Visual Studio.

[Visual Studio C++ samples](visual-cpp-samples.md)\
Information about the C++ code samples provided by Microsoft.

## Visual Studio C/C++ development tools

[Overview of C++ development in Visual Studio](overview-of-cpp-development.md)\
How to use the Visual Studio IDE to create projects, edit code, link to libraries, compile, debug, create unit tests, do static analysis, deploy, and more.

[Projects and build systems](../build/projects-and-build-systems-cpp.md)\
How to create and configure Visual Studio C++ projects, CMake projects, and other kinds of projects with MSVC compiler and linker options.

[Writing and refactoring C++ code](../ide/writing-and-refactoring-code-cpp.md)\
How to use the productivity features in the C++ editor to refactor, navigate, understand and write code.

[Debugging native code](/visualstudio/debugger/debugging-native-code)\
Use the Visual Studio debugger with C++ projects.

[Code analysis for C/C++ overview](../code-quality/code-analysis-for-c-cpp-overview.md)\
Use SAL annotations or the C++ Core Guidelines checkers to perform static analysis.

[Write unit tests for C/C++ in Visual Studio](/visualstudio/test/writing-unit-tests-for-c-cpp)\
Create unit tests using the Microsoft Unit Testing Framework for C++, Google Test, Boost.Test, or CTest.

## Write C/C++ applications using Visual Studio

[Desktop applications (C++)](../windows/desktop-applications-visual-cpp.md)\
Learn how to create traditional native C++ desktop applications for Windows.

[.NET programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)\
Learn how to create DLLs that enable interoperability between native C++ and .NET programs written in languages such as C# or Visual Basic.

[Universal Windows Apps (C++)](../cppcx/universal-windows-apps-cpp.md)\
Find guides and reference content on the Windows Developer Center. For information about developing UWP apps, see [Intro to the Universal Windows Platform](/windows/uwp/get-started/universal-application-platform-guide) and [Create your first UWP app using C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

[Linux programming](../linux/index.yml)\
Use the Visual Studio IDE to code and deploy to a remote Linux machine for compilation with GCC.

[Create C/C++ DLLs in Visual Studio](../build/dlls-in-visual-cpp.md)\
Find out how to use Win32, ATL, and MFC to create Windows desktop DLLs. Provides information about how to compile and register your DLL.

[Parallel programming](../parallel/parallel-programming-in-visual-cpp.md)\
Learn how to use the Parallel Patterns Library, C++ AMP, OpenMP, and other features that are related to multithreading on Windows.

[Security best practices](../security/security-best-practices-for-cpp.md)\
Learn how to protect applications from malicious code and unauthorized use.

[Cloud and web programming](../cloud/cloud-and-web-programming-in-visual-cpp.md)\
In C++, you have several options for connecting to the web and the cloud.

[Data access](../data/data-access-in-cpp.md)\
Connect to databases using ODBC and OLE DB.

[Text and strings](../text/text-and-strings-in-visual-cpp.md)\
Learn about working with different text and string formats and encodings for local and international development.

## C/C++ language reference

[C++ language reference](../cpp/cpp-language-reference.md)\
The reference guide to the Microsoft implementation of the C++ programming language.

[C language reference](../c-language/c-language-reference.md)\
The reference guide to the Microsoft implementation of the C programming language.

[C/C++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)\
A common reference to the shared C and C++ language preprocessor.

[C++/CX language reference](../cppcx/visual-c-language-reference-c-cx.md)\
The reference guide to the Microsoft extensions to the C++ language for creating C++ Universal Windows Platform apps, C++ Windows runtime components that can be consumed by JavaScript-based Windows apps, and Windows DirectX games and graphics-intensive apps.

[C++/CLI language reference](https://www.ecma-international.org/wp-content/uploads/ECMA-372_1st_edition_december_2005.pdf)\
The ECMA standard for the C++/CLI programming language.

[Compiler intrinsics and assembly language](../intrinsics/compiler-intrinsics-and-assembly-language.md)\
Guides to the compiler intrinsics supported or implemented by the Microsoft C/C++ compilers on each platform.

## C/C++ libraries available in Visual Studio

The following sections provide information about the different C and C++ libraries that are included in Visual Studio.

[C runtime library reference](../c-runtime-library/c-run-time-library-reference.md)\
Includes security-enhanced alternatives to functions that are known to pose security issues.

[C++ standard library](../standard-library/cpp-standard-library-reference.md)\
The C++ Standard Library.

[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)\
Support for COM components and apps.

[Microsoft Foundation Class (MFC) libraries](../mfc/mfc-desktop-applications.md)\
Support for creating desktop apps that have traditional or Office-style user interfaces.

[Parallel Patterns Library (PPL)](../parallel/concrt/parallel-patterns-library-ppl.md)\
Asynchronous and parallel algorithms that execute on the CPU.

[C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)\
Massively parallel algorithms that execute on the GPU.

[Windows Runtime Template Library (WRL)](../cppcx/wrl/windows-runtime-cpp-template-library-wrl.md)\
Universal Windows Platform (UWP) apps and components.

[.NET programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)\
Programming for the common language runtime (CLR).

## Third-party open source C++ libraries in Visual Studio

The cross-platform **vcpkg** command-line tool greatly simplifies the discovery and installation of over 900 C++ open source libraries. For more information, see [vcpkg](https://vcpkg.io/).

## Visual Studio C++ feedback and community

[Microsoft Learn Q&A](/answers/topics/c%2B%2B.html)\
Microsoft Learn hosts searchable forums for questions and answers. Add a `C++` tag to your post for community assistance on C++-related issues.

[How to report a problem with the Microsoft C/C++ toolset](how-to-report-a-problem-with-the-visual-cpp-toolset.md)\
Learn how to create effective error reports against the Microsoft C/C++ toolset (compiler, linker, and other tools), and ways to submit your report.

Microsoft [C++ Team Blog](https://devblogs.microsoft.com/cppblog/)\
Learn more about new features and the latest information from the developers of the C++ tools in Visual Studio.

[Visual Studio C++ Developer Community](https://aka.ms/vsfeedback/browsecpp)\
Get help, file bugs, and make suggestions for C++ in Visual Studio.
