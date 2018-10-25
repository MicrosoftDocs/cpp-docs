---
title: "Compiling a C++ Program that Targets the CLR | Microsoft Docs"
ms.custom: ""
ms.date: "09/17/2018"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["command-line applications [C++], managed code", "compiling programs [C++]", "Visual C++, managed code", "managed code [C++]"]
ms.assetid: 339f89df-a5d2-4040-831a-ddbe25b5dce4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Walkthrough: Compiling a C++ Program that Targets the CLR in Visual Studio

You can create Visual C++ programs that use .NET classes and compile them by using the Visual Studio Development Environment.

For this procedure, you can type your own Visual C++ program or use one of the sample programs. The sample program that we use in this procedure creates a text file named textfile.txt, and saves it to the project directory.

## Prerequisites

These topics assume that you understand the fundamentals of the C++ language.

### To create a new project in Visual Studio and add a new source file

1. Create a new project. On the **File** menu, point to **New**, and then click **Project**.

1. From the Visual C++ project types, click **CLR**, and then click **CLR Empty Project**.

   > [!NOTE]
   > If the **CLR Empty Project** type is missing (Visual Studio 2017 only), select **Open Visual Studio Installer** in the left pane of the **New Project** dialog box. Install the option located under **Desktop development with C++** in the **Optional** components section, named **C++/CLI Support**.<br/>

1. Type a project name.

    By default, the solution that contains the project has the same name as the new project, but you can enter a different name. You can enter a different location for the project if you want.

    Click **OK** to create the new project.

1. If **Solution Explorer** isn't visible, click **Solution Explorer** on the **View** menu.

1. Add a new source file to the project:

    - Right-click the **Source Files** folder in **Solution Explorer**, point to **Add**, and click **New Item**.

    - Click **C++ File (.cpp)** and type a file name and then click **Add**.

    The **.cpp** file appears in the **Source Files** folder in **Solution Explorer** and a tabbed window appears where you type the code you want in that file.

1. Click in the newly created tab in Visual Studio and type a valid Visual C++ program, or copy and paste one of the sample programs.

    For example, you can use the [How to: Write a Text File (C++/CLI)](../dotnet/how-to-write-a-text-file-cpp-cli.md) sample program (in the **File Handling and I/O** node of the Programming Guide).

    If you use the sample program, notice that you use the `gcnew` keyword instead of `new` when creating a .NET object, and that `gcnew` returns a handle (`^`) rather than a pointer (`*`):

    `StreamWriter^ sw = gcnew StreamWriter(fileName);`

    For more information on the new Visual C++ syntax, see [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).

1. On the **Build** menu, click **Build Solution**.

    The **Output** window displays information about the compilation progress, such as the location of the build log and a message that indicates the build status.

    If you make changes and run the program without doing a build, a dialog box might indicate that the project is out of date. Select the checkbox on this dialog before you click **OK** if you want Visual Studio to always use the current versions of files instead of prompting you each time it builds the application.

1. On the **Debug** menu, click **Start without Debugging**.

1. If you used the sample program, when you run the program a command window is displayed that indicates the text file has been created.

    The **textfile.txt** text file is now located in your project directory. You can open this file by using Notepad.

    > [!NOTE]
    > Choosing the empty CLR project template automatically set the `/clr` compiler option. To verify this, right-click the project in **Solution Explorer** and clicking **Properties**, and then check the **Common Language Runtime support** option in the **General** node of **Configuration Properties**.

## What's Next

**Previous:** [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
**Next:** [Walkthrough: Compile a C Program on the Command Line](../build/walkthrough-compile-a-c-program-on-the-command-line.md)<br/>

## See Also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Building C/C++ Programs](../build/building-c-cpp-programs.md)<br/>
