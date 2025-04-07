---
title: "Create a Standard C++ Program"
description: "Learn how to use Visual Studio to create a standard C++ project, and then compile and run the program."
ms.custom: "get-started-article"
ms.date: 03/25/2025
ms.topic: get-started
helpviewer_keywords: ["command-line applications [C++], standard", "standard applications [C++]"]
---
# Walkthrough: Create a standard C++ program

You can use Visual Studio to create standard C++ programs. By following the steps in this walkthrough, you can create a project, add a new file to the project, modify the file to add C++ code, and then compile and run the program by using Visual Studio.

You can type your own C++ program or use one of the [sample programs](../overview/visual-cpp-samples.md). This walkthrough creates a console application that uses the `set` container in the C++ Standard Library.

> [!NOTE]
> If conformance with a specific version of the C++ language standard (for example, C++14, C++17, or C++20) is required, use the `/std:c++14`, `/std:c++17`, or `/std:c++20` compiler option (Visual Studio 2017 or later.)

## Prerequisites

To complete this walkthrough, you must understand the fundamentals of the C++ language.

### Select a version

The following steps vary depending on which version of Visual Studio you're using. To see the documentation for your preferred version of Visual Studio, use the **Version** selector located at the top of the table of contents on this page.

::: moniker range=">=msvc-160"

## Create a C++ project in Visual Studio

1. From the main menu, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. At the top of the dialog, set **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **Console**.

1. From the filtered list of project types, choose **Console App** then choose **Next**. On the next page, enter a name for the project, and specify the project location if desired.

1. Select the **Create** button to create the project.

::: moniker-end

::: moniker range="msvc-150"

## Create a C++ project in Visual Studio 2017

1. Select **New** from the **File** menu, and then select **Project**.

1. In the **Visual C++** project types pane, select **Windows Desktop**, and then choose **Windows Console Application**.

1. Type a name for the project. By default, the solution that contains the project has the same name as the project, but you can type a different name. You can also type a different location for the project.

1. Select **OK** to create the project.

::: moniker-end

::: moniker range="msvc-140"

## Create a C++ project in Visual Studio 2015

1. Select **New** from the **File** menu, and then select **Project**.

1. In the **Visual C++** project types pane, select **Windows Desktop**, and then choose **Windows Console Application**.

1. In the **New Project** dialog box, expand **Installed** > **Templates** > **Visual C++**, and then select **Win32**. In the center pane, select **Win32 Console Application**.

1. Type a name for the project. By default, the solution that contains the project has the same name as the project, but you can type a different name. You can also type a different location for the project.

1. Select **OK** to create the project.

1. Complete the **Win32 Application Wizard**.

1. Select **Next**, then make sure **Console Application** is selected and uncheck the **Precompiled Headers** box.

1. Select **Finish**.

::: moniker-end

## Add a new source file

1. If **Solution Explorer** isn't displayed, on the **View** menu, select **Solution Explorer**.

1. Add a new source file to the project.

   1. In **Solution Explorer**, right-click the **Source Files** folder, point to **Add**, and then select **New Item**.

   1. In the **Code** node, select **C++ File (.cpp)**, type a name for the file, and then select **Add**.

   The *`.cpp`* file appears in the **Source Files** folder in **Solution Explorer**, and the file is opened in the Visual Studio editor.

1. In the file in the editor, type a valid C++ program that uses the C++ Standard Library, or copy one of the sample programs and paste it in the file.

1. Save the file.

1. On the **Build** menu, select **Build Solution**.

   The **Output** window displays information about the compilation progress, for example, the location of the build log and a message that indicates the build status.

1. On the **Debug** menu, select **Start without Debugging**.

   If you used the sample program, a command window is displayed and shows whether certain integers are found in the set.

## Related content

- [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)
- [Windows C++ desktop application types](./overview-of-windows-programming-in-cpp.md)
- [C++ Language Reference](../cpp/cpp-language-reference.md)
- [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
