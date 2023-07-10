---
title: "Compile a C++/CLI program that targets the CLR"
description: "Use Microsoft C++ to create programs and libraries that can connect native C++ code and .NET programs."
ms.date: 10/28/2021
helpviewer_keywords: ["command-line applications [C++], managed code", "compiling programs [C++]", "Visual C++, managed code", "managed code [C++]"]
ms.assetid: 339f89df-a5d2-4040-831a-ddbe25b5dce4
---
# Walkthrough: Compile a C++/CLI program that targets the CLR in Visual Studio

By using C++/CLI you can create C++ programs that use .NET classes as well as native C++ types. C++/CLI is intended for use in console applications and in DLLs that wrap native C++ code and make it accessible from .NET programs. To create a Windows user interface based on .NET, use C# or Visual Basic.

For this procedure, you can type your own C++ program or use one of the sample programs. The sample program that we use in this procedure creates a text file named textfile.txt, and saves it to the project directory.

## Prerequisites

- An understanding of the fundamentals of the C++ language.
- In Visual Studio 2017 and later, C++/CLI support is an optional component. To install it, open the **Visual Studio Installer** from the Windows Start menu. Make sure that the **Desktop development with C++** tile is checked, and in the **Optional** components section, also check **C++/CLI Support**.

## Create a new project

The following steps vary depending on which version of Visual Studio you are using. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker range=">=msvc-160"

### To create a C++/CLI project in Visual Studio

1. In **Solution Explorer**, right-click on the top  to open the **Create a New Project** dialog box.

1. At the top of the dialog, type **CLR** in the search box and then choose **CLR Empty Project (.NET Framework)** from the results list.

1. Choose the **Create** button to create the project.

::: moniker-end

::: moniker range="msvc-150"

### To create a C++/CLI project in Visual Studio 2017

1. Create a new project. On the **File** menu, point to **New**, and then click **Project**.

1. From the Visual C++ project types, click **CLR**, and then click **CLR Empty Project**.

1. Type a project name. By default, the solution that contains the project has the same name as the new project, but you can enter a different name. You can enter a different location for the project if you want.

1. Click **OK** to create the new project.

::: moniker-end

::: moniker range="msvc-140"

### To create a C++/CLI project in Visual Studio 2015

1. Create a new project. On the **File** menu, point to **New**, and then click **Project**.

1. From the Visual C++ project types, click **CLR**, and then click **CLR Empty Project**.

1. Type a project name. By default, the solution that contains the project has the same name as the new project, but you can enter a different name. You can enter a different location for the project if you want.

1. Click **OK** to create the new project.

::: moniker-end

## Add a source file

1. If **Solution Explorer** isn't visible, click **Solution Explorer** on the **View** menu.

1. Add a new source file to the project:

   - Right-click the **Source Files** folder in **Solution Explorer**, point to **Add**, and click **New Item**.

   - Click **C++ File (.cpp)** and type a file name and then click **Add**.

   The **.cpp** file appears in the **Source Files** folder in **Solution Explorer** and a tabbed window appears where you type the code you want in that file.

1. Click in the newly created tab in Visual Studio and type a valid Visual C++ program, or copy and paste one of the sample programs.

   For example, you can use the [How to: Write a Text File (C++/CLI)](./file-handling-and-i-o-cpp-cli.md#write_text) sample program (in the **File Handling and I/O** node of the Programming Guide).

   If you use the sample program, notice that you use the **`gcnew`** keyword instead of **`new`** when creating a .NET object, and that **`gcnew`** returns a handle (`^`) rather than a pointer (`*`):

   `StreamWriter^ sw = gcnew StreamWriter(fileName);`

   For more information on C++/CLI syntax, see [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md).

1. On the **Build** menu, click **Build Solution**.

   The **Output** window displays information about the compilation progress, such as the location of the build log and a message that indicates the build status.

   If you make changes and run the program without doing a build, a dialog box might indicate that the project is out of date. Select the checkbox on this dialog before you click **OK** if you want Visual Studio to always use the current versions of files instead of prompting you each time it builds the application.

1. On the **Debug** menu, click **Start without Debugging**.

1. If you used the sample program, when you run the program a command window is displayed that indicates the text file has been created.

   The **textfile.txt** text file is now located in your project directory. You can open this file by using Notepad.

   > [!NOTE]
   > Choosing the empty CLR project template automatically set the `/clr` compiler option. To verify this, right-click the project in **Solution Explorer** and clicking **Properties**, and then check the **Common Language Runtime support** option in the **General** node of **Configuration Properties**.

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](../build/projects-and-build-systems-cpp.md)<br/>
