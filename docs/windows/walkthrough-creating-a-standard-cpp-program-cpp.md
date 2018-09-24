---
title: "Walkthrough: Creating a Standard C++ Program (C++) | Microsoft Docs"
ms.custom: "get-started-article"
ms.date: "09/18/2018"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vcfirstapp", "vccreatefirst"]
dev_langs: ["C++"]
helpviewer_keywords: ["command-line applications [C++], standard", "standard applications [C++]"]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Walkthrough: Creating a Standard C++ Program (C++)

You can use Visual C++ in the Visual Studio integrated development environment (IDE) to create Standard C++ programs. By following the steps in this walkthrough, you can create a project, add a new file to the project, modify the file to add C++ code, and then compile and run the program by using Visual Studio.

You can type your own C++ program or use one of the sample programs. The sample program in this walkthrough is a console application. This application uses the `set` container in the C++ Standard Library.

Visual C++ complies with the 2003 C++ Standard, with these major exceptions: two-stage name lookup, exception specifications, and export. Additionally, Visual C++ supports several C++0x features, for example, lambdas, auto, static_assert, rvalue references, and extern templates.

> [!NOTE]
> If compliance with the standard is required, use the `/Za` compiler option to disable Microsoft extensions to the standard. For more information, see [/Za, /Ze (Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md).

## Prerequisites

To complete this walkthrough, you must understand the fundamentals of the C++ language.

### To create a project and add a source file

1. Create a project by pointing to **New** on the **File** menu, and then clicking **Project**.

1. In the **Visual C++** project types pane, click **Windows Desktop**, and then click **Windows Console Application**. 

   > [!NOTE]
   > For versions of Visual Studio older than 2017, in the **New Project** dialog box, expand **Installed** > **Templates** > **Visual C++**, and then select **Win32**. In the center pane, select **Win32 Console Application**. 

   Type a name for the project.

   By default, the solution that contains the project has the same name as the project, but you can type a different name. You can also type a different location for the project.

   Click **OK** to create the project.

   > [!NOTE]
   > For versions of Visual Studio older than 2017, complete the **Win32 Application Wizard**. Click **Next**, then make sure **Console Application** is selected and uncheck the **Precompiled Headers** box. Click **Finish**.

1. If **Solution Explorer** is not displayed, on the **View** menu, click **Solution Explorer**.

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

**Previous:** [Console Applications in Visual C++](../windows/console-applications-in-visual-cpp.md)<br/>
**Next:** [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>

## See Also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)<br/>
