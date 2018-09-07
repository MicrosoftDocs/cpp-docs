---
title: "Walkthrough: Creating and Using a Static Library (C++) | Microsoft Docs"
ms.custom: "get-started-article"
ms.date: "07/12/2018"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["libraries [C++], static", "static libraries [C++]"]
ms.assetid: 3cc36411-7d66-4240-851e-dacb9a8fd6ac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus", "uwp"]
---
# Walkthrough: Creating and Using a Static Library (C++)

This step-by-step walkthrough shows how to create a static library (.lib file) for use with C++ apps. Using a static library is a great way to reuse code. Rather than re-implementing the same routines in every app that requires the functionality, you write them one time in a static library and then reference it from the apps. Code linked from a static library becomes part of your app—you don’t have to install another file to use the code.

This walkthrough covers these tasks:

- [Creating a static library project](#CreateLibProject)

- [Adding a class to the static library](#AddClassToLib)

- [Creating a C++ console app that references the static library](#CreateAppToRefTheLib)

- [Using the functionality from the static library in the app](#UseLibInApp)

- [Running the app](#RunApp)

## Prerequisites

An understanding of the fundamentals of the C++ language.

##  <a name="CreateLibProject"></a> Creating a static library project

### To create a static library project

1. On the menu bar, choose **File** > **New** > **Project**.

2. In the left pane of the **New Project** dialog box, expand **Installed, Visual C++**, and then select **Windows Desktop**.

3. In the center pane, select **Windows Desktop Wizard**.

4. Specify a name for the project—for example, *MathFuncsLib*—in the **Name** box. Specify a name for the solution—for example, *StaticLibrary*—in the **Solution Name** box. Choose the **OK** button.

5. Under **Application type**, select Static Library (.lib).

6. Under **Additional Options**, un-check the **Precompiled header** check box.

7. Choose **OK** to create the project.

##  <a name="AddClassToLib"></a> Adding a class to the static library

### To add a class to the static library

1. To create a header file for a new class, open the shortcut menu for the **MathFuncsLib** project in **Solution Explorer**, and then choose **Add**, **New Item**. In the **Add New Item** dialog box, in the left pane, under **Visual C++**, select **Code**. In the center pane, select **Header File (.h)**. Specify a name for the header file—for example, *MathFuncsLib.h*—and then choose the **Add** button. A blank header file is displayed.

2. Add a class named `MyMathFuncs` to do common mathematical operations such as addition, subtraction, multiplication, and division. The code should resemble this:

   [!code-cpp[NVC_Walkthrough_Create_Static_Lib#100](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_1.h)]

3. To create a source file for the new class, open the shortcut menu for the **MathFuncsLib** project in **Solution Explorer**, and then choose **Add**, **New Item**. In the **Add New Item** dialog box, in the left pane, under **Visual C++**, select **Code**. In the center pane, select **C++ File (.cpp)**. Specify a name for the source file—for example, *MathFuncsLib.cpp*—and then choose the **Add** button. A blank source file is displayed.

4. Use this source file to implement the functionality for **MyMathFuncs**. The code should resemble this:

   [!code-cpp[NVC_Walkthrough_Create_Static_Lib#110](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_2.cpp)]

5. Compile the static library by selecting **Build** > **Build Solution** on the menu bar. This creates a static library that can be used by other programs.

   > [!NOTE]
   > When you build on the Visual Studio command line, you must build the program in two steps. First, run `cl /c /EHsc MathFuncsLib.cpp` to compile the code and create an object file that's named `MathFuncsLib.obj`. (The `cl` command invokes the compiler, Cl.exe, and the `/c` option specifies compile without linking. For more information, see [/c (Compile Without Linking)](../build/reference/c-compile-without-linking.md).) Second, run `lib MathFuncsLib.obj` to link the code and create the static library `MathFuncsLib.lib`. (The `lib` command invokes the Library Manager, Lib.exe. For more information, see [LIB Reference](../build/reference/lib-reference.md).)

##  <a name="CreateAppToRefTheLib"></a> Creating a C++ console app that references the static library

### To create a C++ console app that references the static library

1. On the menu bar, choose **File** > **New** > **Project**.

2. In the left pane of the **New Project** dialog box, expand **Installed, Visual C++**, and then select **Windows Desktop**.

3. In the center pane, select **Windows Desktop Wizard**.

4. Specify a name for the project—for example, *MyExecRefsLib*—in the **Name** box. In the drop-down list next to **Solution**, select **Add to Solution**. This adds the new project to the solution that contains the static library. Choose the **OK** button.
5. Under **Application type**, select **Console Application (.exe)**.

6. Under **Additioal Options**, un-check the **Precompiled header** check box.

7. Choose **OK** to create the project.

##  <a name="UseLibInApp"></a> Using the functionality from the static library in the app

### To use the functionality from the static library in the app

1. After you create a console app, an empty program is created for you. The name for the source file is the same as the name that you chose earlier. In this example, it's named `MyExecRefsLib.cpp`.

2. Before you can use the math routines in the static library, you must reference it. To do this, open the shortcut menu for the **MyExecRefsLib** project in **Solution Explorer**, and then choose **Add** > **Reference**.

3. The **Add Reference** dialog box lists the libraries that you can reference. The **Projects** tab lists the projects in the current solution and any libraries that they contain. On the **Projects** tab, select the **MathFuncsLib** check box, and then choose the **OK** button.

4. To reference the `MathFuncsLib.h` header file, you must modify the included directories path. In the **Property Pages** dialog box for **MyExecRefsLib**, expand the **Configuration Properties** node, expand the **C/C++** node, and then select **General**. Next to **Additional Include Directories**, specify the path of the **MathFuncsLib** directory or browse for it.

   To browse for the directory path, open the property value drop-down list, and then choose **Edit**. In the **Additional Include Directories** dialog box, in the text box, select a blank line and then choose the ellipsis button (**...**) at the end of the line. In the **Select Directory** dialog box, select the **MathFuncsLib** directory and then choose **Select Folder** button to save your selection and close the dialog box. In the **Additional Include Directories** dialog box, choose the **OK** button, and then in the **Property Pages** dialog box, choose the **OK** button to save your changes to the project.

5. You can now use the `MyMathFuncs` class in this app. To do this, replace the contents of `MyExecRefsLib.cpp` with this code:

   [!code-cpp[NVC_Walkthrough_Create_Static_Lib#120](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_3.cpp)]

6. Build the executable by choosing **Build** > **Build Solution** on the menu bar.

##  <a name="RunApp"></a> Running the app

### To run the app

1. Make sure that **MyExecRefsLib** is selected as the default project by opening the shortcut menu for **MyExecRefsLib** in **Solution Explorer**, and then choosing **Set as StartUp Project**.

2. To run the project, on the menu bar, choose **Debug** > **Start Without Debugging**. The output should resemble this:

    ```Output
    a + b = 106.4
    a - b = -91.6
    a * b = 732.6
    a / b = 0.0747475
    ```

## See Also

[Walkthrough: Creating and Using a Dynamic Link Library (C++)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)  
[Desktop Applications (Visual C++)](../windows/desktop-applications-visual-cpp.md)