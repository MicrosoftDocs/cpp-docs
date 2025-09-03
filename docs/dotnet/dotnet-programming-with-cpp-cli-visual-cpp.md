---
title: ".NET programming with C++/CLI"
description: "Learn how to use C++/CLI to create .NET apps and components in Visual Studio."
ms.date: 05/02/2025
helpviewer_keywords: ["programming [C++], .NET programming", ".NET Framework [C++]", ".NET applications [C++]", "Visual C++, .NET programming"]
---
# .NET programming with C++/CLI

> [!IMPORTANT]
> C++/CLI is a technology designed during the early years of .NET (2003–2010) and remains supported for compatibility purposes. It is best suited for existing codebases, particularly those being brought forward from the .NET Framework to .NET Core, or for maintaining large legacy systems that are unlikely to evolve beyond the .NET Framework.
> 
> While C++/CLI is reliable and robust, no new feature work is planned beyond what’s necessary to ensure continued functionality. Developers should be aware that using C++/CLI pessimizes both C++ and .NET languages, as it is constrained by the language features and APIs available at the time of its design—prior to ISO C++11 and .NET Core. C++/CLI was designed based on C++98 and its [ECMA standard](https://ecma-international.org/publications-and-standards/standards/ecma-372) has not been updated to keep up with newer C++ standards since C++11. While some features in C++11 were incorporated, many features from more recent standards, like C++20 and C++23, have no direct support in C++/CLI for compilation to managed code. For details, see this [blog article by the MSVC team](https://devblogs.microsoft.com/cppblog/cpp20-support-comes-to-cpp-cli/).
> 
> For new projects, we recommend exploring 3rd party modern alternatives such as https://github.com/dotnet/ClangSharp or https://www.swig.org/, which offer more flexibility and better alignment with current language and runtime capabilities.

C++/CLI supplanted Managed C++. C++/CLI is a language specification created by Microsoft that extends C++ to support .NET. It's only supported on Windows. It's not for writing [WinUI](/windows/apps/winui) or Universal Windows Platform [UWP](/windows/uwp/get-started/universal-application-platform-guide) Windows Runtime (WinRT) apps. It's for writing .NET applications and components that run on .NET. C++/CLI is a bridge between native C++ code and managed code. It allows you to use existing C++ libraries in .NET applications and to write new .NET applications in C++.

Microsoft provides C++/WinRT for writing WinUI and WinRT apps. It's an entirely standard modern C++17 language projection for Windows Runtime (WinRT) APIs. For more information about using C++ with the Windows Runtime (WinRT), see [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/).

::: moniker range="msvc-140"

By default, CLR projects created with Visual Studio 2015 target .NET Framework 4.5.2. You can target .NET Framework 4.6 when you create a new project. In the **New Project** dialog, change the target framework in the dropdown at the top middle of the dialog. To change the target framework for an existing project, close the project, edit the project file (*`.vcxproj`*), and change the value of the Target Framework Version to 4.6. The changes take effect the next time you open the project.

::: moniker-end
::: moniker range="msvc-150"

In Visual Studio 2017, the default target .NET Framework is 4.6.1. The Framework version selector is at the bottom of the **New Project** dialog.

## Install C++/CLI support in Visual Studio 2017

C++/CLI itself isn't installed by default when you install a Visual Studio C++ workload. To install the component after Visual Studio is installed, open the Visual Studio Installer by selecting the Windows **Start** menu and searching for **visual studio installer**. Choose the **Modify** button next to your installed version of Visual Studio. Select the **Individual components** tab. Scroll down to the **Compilers, build tools, and runtimes** section, and select **C++/CLI support**. Select **Modify** to download the necessary files and update Visual Studio.

::: moniker-end
::: moniker range="msvc-160"

In Visual Studio 2019, the default target framework for .NET Core projects is 5.0. For .NET Frameworks projects, the default is 4.7.2. The .NET Framework version selector is on the **Configure your new project** page of the **Create a new project** dialog.

## Install C++/CLI support in Visual Studio 2019

C++/CLI itself isn't installed by default when you install a Visual Studio C++ workload. To install the component after Visual Studio is installed, open the Visual Studio Installer by selecting the Windows **Start** menu and searching for **visual studio installer**. Choose the **Modify** button next to your installed version of Visual Studio. Select the **Individual components** tab. Scroll down to the **Compilers, build tools, and runtimes** section, and select **C++/CLI support for v142 build tools (Latest)**. Select **Modify** to download the necessary files and update Visual Studio.

::: moniker-end
::: moniker range="msvc-170"

In Visual Studio 2022, the default target framework for .NET Core projects is 6.0. For .NET Frameworks projects, the default is 4.7.2. The .NET Framework version selector is on the **Configure your new project** page of the **Create a new project** dialog.

## Install C++/CLI support in Visual Studio 2022

C++/CLI itself isn't installed by default when you install a Visual Studio C++ workload. To install the component after Visual Studio is installed, open the Visual Studio Installer by selecting the Windows **Start** menu and searching for **visual studio installer**. Choose the **Modify** button next to your installed version of Visual Studio. Select the **Individual components** tab. Scroll down to the **Compilers, build tools, and runtimes** section, and select **C++/CLI support for v143 build tools (Latest)**. Select **Modify** to download the necessary files and update Visual Studio.

::: moniker-end

## In this section

[C++/CLI tasks](../dotnet/cpp-cli-tasks.md)\
[Native and .NET interoperability](../dotnet/native-and-dotnet-interoperability.md)\
[Pure and verifiable code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)\
[Regular expressions (C++/CLI)](../dotnet/regular-expressions-cpp-cli.md)\
[File handling and I/O (C++/CLI)](../dotnet/file-handling-and-i-o-cpp-cli.md)\
[Graphics operations (C++/CLI)](../dotnet/graphics-operations-cpp-cli.md)\
[Windows operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)\
[Data access using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md)\
[Interoperability with other .NET languages (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)\
[Serialization (C++/CLI)](../dotnet/serialization-cpp-cli.md)\
[Managed types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)\
[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)\
[Strong Name assemblies (assembly signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)\
[Debug class (C++/CLI)](../dotnet/debug-class-cpp-cli.md)\
[STL/CLR library reference](../dotnet/stl-clr-library-reference.md)\
[C++ support library](../dotnet/cpp-support-library.md)\
[Exceptions in C++/CLI](../dotnet/exceptions-in-cpp-cli.md)\
[Boxing (C++/CLI)](../dotnet/boxing-cpp-cli.md)

## See also

[Native and .NET interoperability](../dotnet/native-and-dotnet-interoperability.md)
