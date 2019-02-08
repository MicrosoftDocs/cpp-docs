---
title: "How to: Create a Resource Script File (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.resource", "vc.resvw.add.MFC"]
helpviewer_keywords: ["rc files [C++], creating", ".rc files [C++], creating", "resource script files [C++], creating", "resources [C++], viewing", "rc files [C++], viewing resources", ".rc files [C++], viewing resources", "resource script files [C++], viewing resources", "resource script files [C++], opening in text format", ".rc files [C++], opening in text format", "rc files [C++], opening in text format", "rc files [C++], adding MFC support", ".rc files [C++], adding MFC support", "MFC, adding support to resource scripts files", "resource script files [C++], adding MFC support"]
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
---
# How to: Create a Resource Script File (C++)

> [!NOTE]
> The **Resource Editor** is not available in Express editions.
>
> This material applies to Windows desktop applications. Projects in .NET languages do not use resource script files. For more information, see [Resource Files](../windows/resource-files-visual-studio.md).

## To create a new resource script (.rc) file

1. Put focus on your existing project folder in **Solution Explorer**, for example, `MyProject`.

   > [!NOTE]
   > Don't confuse the project folder with the Solution folder in **Solution Explorer**. If you put focus on the **Solution** folder, your choices in the **Add New Item** dialog box (in Step 3) will be different.

1. On the **Project** menu, select **Add New Item**.

1. In the **Add New Item** dialog box, select the **Visual C++** folder then choose **Resource File (.rc)** in the right pane.

1. Provide a name for your resource script file in the **Name** text box, then choose **Open**.

You can now [create](../windows/how-to-create-a-resource.md) and add new resources to your .rc file.

> [!NOTE]
> You can only add a resource script (.rc file) to an existing project that is loaded into the Visual Studio IDE. You cannot create a standalone .rc file (one outside the project). [Resource templates](../windows/how-to-use-resource-templates.md) (.rct files) can be created anytime.

## To open a resource script file outside of a C++ project (standalone)

You can view resources in an .rc file without having a project open. The .rc file will open in a document window as opposed to opening in the [Resource View](../windows/resource-view-window.md) window (as it does when the file is open inside a project).

> [!NOTE]
> This is an important distinction because some commands are only available when the file is opened standalone (outside of a project). For example, you can only save a file in a different format or as a different file name when the file is opened outside of a project (the **Save As** command is unavailable when a file is opened inside a project).

### To open an .rc file outside a project

1. From the **File** menu, choose **Open**, then select **File**.

1. In the **Open File** dialog box, navigate to the resource script file you want to view, highlight the file, and select **Open**.

   > [!NOTE]
   > If you open the project first (**File**, **Open**, **Project**), some commands will not be available to you. Opening a file "standalone" means opening it without first loading the project.

### To open multiple .rc files outside a project

1. Open both resource files stand-alone. For example, open `Source1.rc` and `Source2.rc`.

   1. From the **File** menu, choose **Open**, then select **File**.

   1. In the **Open File** dialog box, navigate to the first resource script file you want to open (`Source1.rc`), highlight the file, and choose **Open**.

   1. Repeat the previous step to open the second .rc file (`Source2.rc`).

       The .rc files are now open in separate documents windows.

1. When both .rc files are open, tile the windows so you can view them simultaneously:

   - From the **Window** menu, choose **New Horizontal Tab Group** or **New Vertical Tab Group**.

       \- or -

   - Right-click one of the .rc files and choose **New Horizontal Tab Group** or **New Vertical Tab Group** from the shortcut menu.

> [!NOTE]
> If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

## To open a resource script file in text format

There may be times when you want to view the contents of your project's resource script (.rc) file without opening a resource, such as a dialog box, inside its specific resource editor. For example, you may want to search for a string across all dialog boxes in the resource file without having to open each one separately.

> [!NOTE]
> If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

You can easily open the resource file in text format to view all the resources it contains and complete global operations supported by the text editor.

> [!NOTE]
> The resource editors do not directly read .rc or `resource.h` files. The resource compiler compiles them into .aps files, which are consumed by the resource editors. This file is a compile step and only stores symbolic data. As with a normal compile process, information that is not symbolic (for example, comments) is discarded during the compile process. Whenever the .aps file gets out of synch with the .rc file, the .rc file is regenerated (for example, when you Save, the resource editor overwrites the .rc file and the resource.h file). Any changes to the resources themselves will remain incorporated in the .rc file, but comments will always be lost once the .rc file is overwritten. For information on how to preserve comments, see [Including Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md).

### To open a resource script file as text

1. From the **File** menu choose **Open**, then choose **File**.

1. In the **Open File** dialog box, navigate to the resource script file you want to view in text format.

1. Highlight the file, then select the drop-down arrow on the **Open** button (located on the right side of the button).

1. Choose **Open With** from the drop-down menu.

1. In the **Open With** dialog box, select **Source Code (Text) Editor**.

1. From the **Open As** drop-down list, select **Text**.

   The resource opens in the **Source Code** editor.

\- or -

1. In **Solution Explorer**, right-click the .rc file.

1. From the shortcut menu, choose **Open with...**, then select **Source Code (Text) Editor**.

## To add MFC Support to resource script files

Normally, when you build an MFC application for Windows using the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md), the wizard generates a basic set of files (including a resource script (.rc) file) that contains the core features of the Microsoft Foundation classes (MFC). However, if you're editing an .rc file for a Windows application that isn't based on MFC, the following features specific to the MFC framework aren't available:

- MFC code wizards

- Menu prompt strings

- List contents for combo box controls

- ActiveX control hosting

However, you can add MFC support to existing .rc files that don't have it.

> [!NOTE]
> These steps require MFC.

### To add MFC support to .rc files

1. Open the resource script file.

1. In [Resource View](../windows/resource-view-window.md), highlight the resources folder (for example, MFC.rc).

1. In the [Properties window](/visualstudio/ide/reference/properties-window), set the **MFC Mode** property to **True**.

   > [!NOTE]
   > In addition to setting this flag, the .rc file must be part of an MFC project. For example, just setting **MFC Mode** to **True** on an .rc file in a Win32 project won't give you any of the MFC features.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)