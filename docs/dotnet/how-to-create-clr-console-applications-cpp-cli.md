---
title: "How to: Create CLR Console Applications (C++/CLI)"
description: "Learn how to create CLR Console App projects to use C++/CLI in Visual Studio."
ms.date: 12/08/2020
helpviewer_keywords: ["console applications, templates", "CLR console applications, project template"]
---
# How to: Create CLR Console Applications (C++/CLI)

::: moniker range="msvc-140"

You can use the  **CLR Console Application** template in the **New Project** dialog to create a console app project that already has essential project references and files.

::: moniker-end
::: moniker range="msvc-150"

You can use the **CLR Console App** template in the **New Project** dialog to create a console app project that already has essential project references and files.

C++/CLI support isn't installed by default when you install a Visual Studio C++ workload. If you don't see a CLR heading under Visual C++ in the **New Project** dialog, you may need to install C++/CLI support. For more information, see [.NET programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

::: moniker-end
::: moniker range="msvc-160"

You can use the **CLR Console App (.NET Framework)** template in the **Create a new project** dialog to create a console app project that already has essential project references and files.

C++/CLI support isn't installed by default when you install a Visual Studio C++ workload. If you don't see CLR project templates in the  **Create a new project** dialog, you may need to install C++/CLI support. For more information, see [.NET programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

::: moniker-end

Typically, a console app is compiled into a stand-alone executable file but doesn't have a graphical user interface. Users run the console app at a command prompt. They can use the command line to issue instructions to the running app. The app provides output information as text in the command window. The immediate feedback of a console app makes it a great way to learn programming. You don't need to worry about how to implement a graphical user interface.

::: moniker range="msvc-140"

When you use the CLR Console Application template to create a project, it automatically adds these references and files:

- References to these .NET Framework namespaces:

  - <xref:System>, <xref:System.Data>, <xref:System.Xml>: These references contain the fundamental classes that define commonly used types, events, interfaces, attributes, and exceptions.

  - *`mscorlib.dll`*: The assembly DLL that supports .NET Framework development.

- Source files:

  - *`ConsoleApplicationName.cpp`*: The main source file and entry point into the app. This file has the base name you specified for your project. It identifies the project DLL file and the project namespace. Provide your own code in this file.

  - *`AssemblyInfo.cpp`*: Contains attributes and settings that you can use to modify the project's assembly metadata. For more information, see [Assembly contents](/dotnet/framework/app-domains/assembly-contents).

  - *`stdafx.cpp`*: Used to build a precompiled header file that's named *`ConsoleApplicationName.pch`* and a precompiled types file that's named *`stdafx.obj`*.

- Header files:

  - *`stdafx.h`*: Used to build a precompiled header file that's named *`ConsoleApplicationName.pch`* and a precompiled types file that's named *`stdafx.obj`*.

  - *`resource.h`*: A generated include file for *`app.rc`*.

- Resource files:

  - *`app.rc`*: The resource script file of a program.

  - *`app.ico`*: The icon file of a program.

- *`ReadMe.txt`*: Describes the files in the project.

::: moniker-end
::: moniker range=">=msvc-150"

When you use the CLR Console App template to create a project, it automatically adds these references and files:

- References to these .NET Framework namespaces:

  - <xref:System>, <xref:System.Data>, <xref:System.Xml>: These references contain the fundamental classes that define commonly used types, events, interfaces, attributes, and exceptions.

  - *`mscorlib.dll`*: The assembly DLL that supports .NET Framework development.

- Source files:

  - *`ConsoleApplicationName.cpp`*: The main source file and entry point into the app. This file has the base name you specified for your project. It identifies the project DLL file and the project namespace. Provide your own code in this file.

  - *`AssemblyInfo.cpp`*: Contains attributes and settings that you can use to modify the project's assembly metadata. For more information, see [Assembly contents](/dotnet/framework/app-domains/assembly-contents).

  - *`pch.cpp`*: Used to build a precompiled header file that's named *`ConsoleApplicationName.pch`* and a precompiled types file that's named *`pch.obj`*.

- Header files:

  - *`pch.h`*: Used to build a precompiled header file that's named *`ConsoleApplicationName.pch`* and a precompiled types file that's named *`pch.obj`*.

  - *`Resource.h`*: A generated include file for *`app.rc`*.

- Resource files:

  - *`app.rc`*: The resource script file of a program.

  - *`app.ico`*: The icon file of a program.

::: moniker-end

## To create a CLR console app project

::: moniker range="msvc-140"

1. On the menu bar, choose **File** > **New** > **Project**.

1. In the **New Project** dialog box, select the **Installed** > **Templates** > **Visual C++** > **CLR** node, and then select the **CLR Console Application** template.

1. In the **Name** box, enter a unique name for your application.

   You can specify other project and solution settings, but they're not required.

1. Choose the **OK** button to generate the project and source files.

::: moniker-end
::: moniker range="msvc-150"

1. On the menu bar, choose **File** > **New** > **Project**.

1. In the **New Project** dialog box, select the **Installed** > **Visual C++** > **CLR** node, and then select the **CLR Console App** template.

1. In the **Name** box, enter a unique name for your application.

   You can specify other project and solution settings, but they're not required.

1. Choose the **OK** button to generate the project and source files.

::: moniker-end
::: moniker range="msvc-160"

1. On the menu bar, choose **File** > **New** > **Project**.

1. In the **Create a new project** dialog box, enter "clr console" in the search box. Select the **CLR Console App (.NET Framework)** template, and then choose **Next**.

1. In the **Name** box, enter a unique name for your application.

   You can specify other project and solution settings, but they're not required.

1. Choose the **Create** button to generate the project and source files.

::: moniker-end

## See also

[CLR projects](../build/reference/files-created-for-clr-projects.md)
