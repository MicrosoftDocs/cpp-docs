---
title: "Microsoft C++ Porting and Upgrading Guide"
ms.date: "10/23/2019"
ms.assetid: f5fbcc3d-aa72-41a6-ad9a-a706af2166fb
ms.topic: "overview"
---
# Micorosft C++ Porting and Upgrading Guide

This topic provides a guide for upgrading Microsoft C++ code. This includes getting the code to compile and run correctly on a newer release of the tools, as well as taking advantage of new language and Visual Studio features. This topic also includes information about migrating legacy apps to more modern platforms.

## Reasons to Upgrade C++ Code

You should consider upgrading your code for the following reasons:

- Faster code, due to improved compiler optimizations.

- Safer code, if you take advantage of modern C++ features such as smart pointers.

- Faster builds, due to performance improvements in the compiler itself.

- Improved standards conformance.

- Better security, including features such as guard checking.

### Porting your Code

When upgrading, first consider your application's code and projects. Is your application built with Visual Studio? If so, identify the projects involved.  Do you have custom build scripts? If you have custom build scripts instead of using Visual Studio's build system, you will have more work to do in upgrading, because Visual Studio won't be able to update your project files and build settings automatically.

The build system and project file format in Visual Studio 2010 changed from VCBuild (\*.vcproj) to MSBuild (\*.vcxproj). If your upgrade is from a version prior to 2010, and you have a highly customized build system, you might have to do more work to upgrade. If you are upgrading from Visual Studio 2010 or later, your projects are already using MSBuild, so upgrading the project and build for your application should be easier. Beginning with Visual Studio 2017, CMake support is integrated into Visual Studio.

### Porting Visual Studio Projects

To start upgrading a project or solution, just open the solution in the new version of Visual Studio, and follow the prompts. When you upgrade a project, you get an upgrade report, which is also saved in your project folder as UpgradeLog.htm. The upgrade report shows a summary of what problems were encountered and some information about changes that were made, including:

1. Project properties

2. Include files

3. Code that no longer compiles cleanly due to compiler conformance improvements or changes in the standard

4. Code that relies on Visual Studio or Windows features that are no longer available or header files that either aren't included in a default installation of Visual Studio, or were removed from the product

5. Code that no longer compiles due to changes in APIs such as renamed APIs, changed function signatures, or deprecated functions

6. Code that no longer compiles due to changes in diagnostics, such as a warning becoming an error

7. Linker errors due to libraries that were changed, especially when /NODEFAULTLIB is used.

8. Runtime errors or unexpected results due to behavior changes

9. Errors due to errors that were introduced in the tools. If you encounter an issue, report it to the Visual C++ team through your normal support channels or by using the [Visual Studio C++ Developer Community](https://developercommunity.visualstudio.com/spaces/62/index.html) page.

In addition to changes that you can't avoid due to compiler errors, some changes are optional in an upgrade process, such as:

1. New warnings might mean you want to clean up your code. Depending on the specific diagnostics, this can improve the portability, standards conformance, and security of your code.

2. You might want to take advantage of newer compiler features such as the [/guard:cf (Enable Flow Control Guard)](../build/reference/guard-enable-control-flow-guard.md) compiler option, which adds checks for unauthorized code execution.

3. You might want to update some code to use new language features that simplify the code, improve the performance of your programs, or update the code to use modern libraries and conform to modern standards and best practices.

Once you've upgraded and tested your project, you might also want to consider improving your code further or plan the future direction of your code, or even reconsider the architecture of your project. Will it receive ongoing development work? Will it be important for your code to run on other platforms?  If so, what platforms?  C++ is a standardized language designed with portability and cross-platform development in mind, and yet the code for many Windows applications is strongly tied to the Windows platform. Do you want to refactor your code, to separate out those parts that could be compiled for other platforms? If so, consider moving to CMake, which is well-supported in Visual Studio.

What about your user interface? If you are using MFC, you might want to update the UI. Are you using any of the newer MFC features that were introduced in 2008 as a Feature Pack? If you just want to give your app a newer look and feel, without rewriting the entire app, you might consider using the ribbon APIs in MFC, or using some of new features of MFC.

If you want to give your Windows program a XAML user-interface but don't want to create a UWP app, you can use C# with WPF to create the UI layer and refactor your standard C++ logic into DLLs. Create an interoperability layer in C++/CLI to connect C# with your native code. Another option is to create a UWP app using [C++/CX](../cppcx/visual-c-language-reference-c-cx.md) or [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/). In Windows 10, you can use the [Desktop App Converter](/windows/msix/desktop/desktop-to-uwp-run-desktop-app-converter) to package your existing desktop application as a UWP app without having to modify any code.

Alternatively, perhaps you now have new requirements, or you can foresee the need for targeting platforms other than Windows desktop,such as Linux or Android devices. You could port your user interface code to a cross-platform UI library such as Qt, or consider using HTML5 for the user interface. With these UI frameworks, you can target multiple devices and still use Visual Studio and the Visual Studio debugger as your development environment.

## Related Topics

|Title|Description|
|-----------|-----------------|
|[Upgrading Projects from Earlier Versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)|Discusses how to use projects created in earlier versions of Visual Studio.|
|[What's New for The C++ compiler in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)|Changes in the IDE and tools to the current version of Visual Studio|
|[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)|Standards conformance improvements from Visual Studio 2015 to Visual Studio|
|[Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md)|A list of all the changes in the Microsoft C++ libraries and build tools from Visual Studio 2003 through 2015 that might require changes in your code.|
|[Visual C++ What's New 2003 through 2015](visual-cpp-what-s-new-2003-through-2015.md)|All the "what's new" information for Microsoft C++ from Visual Studio 2003 through Visual Studio 2015.|
|[Porting 3rd-party libraries](porting-third-party-libraries.md)|How to use the **vcpkg** command line tool to port older open-source libraries to versions compiled with more recent Visual C++ toolsets.|
|[Porting and Upgrading: Examples and Case Studies](porting-and-upgrading-examples-and-case-studies.md)|For this section, we ported and upgrades several samples and applications and discussed the experiences and results. You might find that reading these gives you a sense of what is involved in the porting and upgrading process. Throughout the process, we discuss tips and tricks for upgrading and show how specific errors were fixed.|
|[Porting to the Universal Windows Platform](porting-to-the-universal-windows-platform-cpp.md)|Contains information about porting code to Windows 10|
|[Introduction to Visual C++ for UNIX Users](introduction-to-visual-cpp-for-unix-users.md)|Provides information for UNIX users who are new to Visual C++ and want to become productive with it.|
|[Porting from UNIX to Win32](porting-from-unix-to-win32.md)|Discusses options for migrating UNIX applications to Windows.|

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
