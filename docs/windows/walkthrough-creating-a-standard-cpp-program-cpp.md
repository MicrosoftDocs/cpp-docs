---
description: "Learn more about: Walkthrough: Creating a Standard C++ Program (C++)"
title: "Walkthrough: Creating a Standard C++ Program (C++)"
ms.custom: "get-started-article"
ms.date: "04/25/2019"
helpviewer_keywords: ["command-line applications [C++], standard", "standard applications [C++]"]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
---
# Walkthrough: Creating a Standard C++ Program (C++)

You can use Visual Studio to create Standard C++ programs. By following the steps in this walkthrough, you can create a project, add a new file to the project, modify the file to add C++ code, and then compile and run the program by using Visual Studio.

You can type your own C++ program or use one of the sample programs. The sample program in this walkthrough is a console application. This application uses the `set` container in the C++ Standard Library.

> [!NOTE]
> If compliance with a specific version of the C++ language standard (i.e. C++14 or C++17) is required, use the `/std:c++14` or `/std:c++17` compiler option. (Visual Studio 2017 and later.)

## Prerequisites

To complete this walkthrough, you must understand the fundamentals of the C++ language.

### To create a project and add a source file

The following steps vary depending on which version of Visual Studio you are using. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker range="msvc-160"

### To create a C++ project in Visual Studio 2019

1. From the main menu, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. At the top of the dialog, set  **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **Console**.

1. From the filtered list of project types, choose **Console App** then choose **Next**. In the next page, enter a name for the project, and specify the project location if desired.

1. Choose the **Create** button to create the project.

::: moniker-end

::: moniker range="msvc-150"

### To create a C++ project in Visual Studio 2017

1. Create a project by pointing to **New** on the **File** menu, and then clicking **Project**.

1. In the **Visual C++** project types pane, click **Windows Desktop**, and then click **Windows Console Application**.

1. Type a name for the project. By default, the solution that contains the project has the same name as the project, but you can type a different name. You can also type a different location for the project.

1. Click **OK** to create the project.

::: moniker-end

::: moniker range="msvc-140"

### To create a C++ project in Visual Studio 2015

1. Create a project by pointing to **New** on the **File** menu, and then clicking **Project**.

1. In the **Visual C++** project types pane, click **Windows Desktop**, and then click **Windows Console Application**.

1. In the **New Project** dialog box, expand **Installed** > **Templates** > **Visual C++**, and then select **Win32**. In the center pane, select **Win32 Console Application**.

1. Type a name for the project. By default, the solution that contains the project has the same name as the project, but you can type a different name. You can also type a different location for the project.

1. Click **OK** to create the project.

1. Complete the **Win32 Application Wizard**.

1. Click **Next**, then make sure **Console Application** is selected and uncheck the **Precompiled Headers** box.

1. Click **Finish**.

::: moniker-end

## Add a new source file

1. If **Solution Explorer** isn't displayed, on the **View** menu, click **Solution Explorer**.

1. Add a new source file to the project, as follows.

   1. In **Solution Explorer**, right-click the **Source Files** folder, point to **Add**, and then click **New Item**.

   1. In the **Code** node, click **C++ File (.cpp)**, type a name for the file, and then click **Add**.

   The .cpp file appears in the **Source Files** folder in **Solution Explorer**, and the file is opened in the Visual Studio editor.

1. In the file in the editor, type a valid C++ program that uses the C++ Standard Library, or copy one of the sample programs and paste it in the file.

1. Save the file.

1. On the **Build** menu, click **Build Solution**.

   The **Output** window displays information about the compilation progress, for example, the location of the build log and a message that indicates the build status.

1. On the **Debug** menu, click **Start without Debugging**.

   If you used the sample program, a command window is displayed and shows whether certain integers are found in the set.

## Next Steps

**Previous:** [Console Applications in Visual C++](./overview-of-windows-programming-in-cpp.md)<br/>
**Next:** [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
