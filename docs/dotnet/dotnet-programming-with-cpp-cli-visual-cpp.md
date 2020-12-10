---
title: ".NET programming with C++/CLI"
description: "Learn how to use C++/CLI to create .NET apps and components in Visual Studio."
ms.date: 12/08/2020
helpviewer_keywords: ["programming [C++], .NET programming", ".NET Framework [C++]", ".NET applications [C++]", "Visual C++, .NET programming"]
---
# .NET programming with C++/CLI

::: moniker range="msvc-140"

By default, CLR projects created with Visual Studio 2015 target .NET Framework 4.5.2. You can target .NET Framework 4.6 when you create a new project. In the **New Project** dialog, change the target framework in the dropdown at the top middle of the dialog. To change the target framework for an existing project, close the project, edit the project file (*`.vcxproj`*), and change the value of the Target Framework Version to 4.6. The changes take effect the next time you open the project.

::: moniker-end
::: moniker range="msvc-150"

In Visual Studio 2017, the default target .NET Framework is 4.6.1. The Framework version selector is at the bottom of the **New Project** dialog.

## Install C++/CLI support in Visual Studio 2017

C++/CLI itself isn't installed by default when you install a Visual Studio C++ workload. To install the component after Visual Studio is installed, open the Visual Studio Installer. Choose the **Modify** button next to your installed version of Visual Studio. Select the **Installed components** tab. Scroll down to the **Compilers, build tools, and runtimes** section, and select **C++/CLI support**. Choose **Modify** to update Visual Studio.

::: moniker-end
::: moniker range="msvc-160"

In Visual Studio 2019, the default target framework for .NET Core projects is 5.0. For .NET Frameworks projects, the default is 4.7.2. The .NET Framework version selector is on the **Configure your new project** page of the **Create a new project** dialog.
## Install C++/CLI support in Visual Studio 2019

C++/CLI itself isn't installed by default when you install a Visual Studio C++ workload. To install the component after Visual Studio is installed, open the Visual Studio Installer. Choose the **Modify** button next to your installed version of Visual Studio. Select the **Installed components** tab. Scroll down to the **Compilers, build tools, and runtimes** section, and select the latest **C++/CLI support for v142 build tools** component. Choose **Modify** to update Visual Studio.

::: moniker-end

## In this section

[C++/CLI tasks](../dotnet/cpp-cli-tasks.md)

[Native and .NET interoperability](../dotnet/native-and-dotnet-interoperability.md)

[Pure and verifiable code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)

[Regular expressions (C++/CLI)](../dotnet/regular-expressions-cpp-cli.md)

[File handling and I/O (C++/CLI)](../dotnet/file-handling-and-i-o-cpp-cli.md)

[Graphics operations (C++/CLI)](../dotnet/graphics-operations-cpp-cli.md)

[Windows operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)

[Data access using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md)

[Interoperability with other .NET languages (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)

[Serialization (C++/CLI)](../dotnet/serialization-cpp-cli.md)

[Managed types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)

[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)

[Strong Name assemblies (assembly signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)

[Debug class (C++/CLI)](../dotnet/debug-class-cpp-cli.md)

[STL/CLR library reference](../dotnet/stl-clr-library-reference.md)

[C++ support library](../dotnet/cpp-support-library.md)

[Exceptions in C++/CLI](../dotnet/exceptions-in-cpp-cli.md)

[Boxing (C++/CLI)](../dotnet/boxing-cpp-cli.md)

## See also

[Native and .NET interoperability](../dotnet/native-and-dotnet-interoperability.md)
