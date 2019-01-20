---
title: "How to: Open a Resource Script File Outside of a C++ Project (Standalone)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.resource"]
helpviewer_keywords: ["resources [C++], viewing", "rc files [C++], viewing resources", ".rc files [C++], viewing resources", "resource script files [C++], viewing resources"]
ms.assetid: bc350c60-178d-4c5d-9a7e-6576b0c936e4
---
# How to: Open a Resource Script File Outside of a C++ Project (Standalone)

You can view resources in an .rc file without having a project open. The .rc file will open in a document window as opposed to opening in the [Resource View](../windows/resource-view-window.md) window (as it does when the file is open inside a project).

> [!NOTE]
> This is an important distinction because some commands are only available when the file is opened standalone (outside of a project). For example, you can only save a file in a different format or as a different file name when the file is opened outside of a project (the **Save As** command is unavailable when a file is opened inside a project).

### To open an .rc file outside a project

1. From the **File** menu, choose **Open**, then click **File**.

2. In the **Open File** dialog box, navigate to the resource script file you want to view, highlight the file, and click **Open**.

   > [!NOTE]
   > If you open the project first (**File**, **Open**, **Project**), some commands will not be available to you. Opening a file "standalone" means opening it without first loading the project.

To open and view the resource file in text format, see [Editing a Resource Script (.rc) File](../windows/how-to-open-a-resource-script-file-in-text-format.md).

### To open multiple .rc files outside a project

1. Open both resource files stand-alone. For example, open `Source1.rc` and `Source2.rc`.

   1. From the **File** menu, choose **Open**, then click **File**.

   2. In the **Open File** dialog box, navigate to the first resource script file you want to open (`Source1.rc`), highlight the file, and click **Open**.

   3. Repeat the previous step to open the second .rc file (`Source2.rc`).

       The .rc files are now open in separate documents windows.

2. When both .rc files are open, tile the windows so you can view them simultaneously:

   - From the **Window** menu, choose **New Horizontal Tab Group** or **New Vertical Tab Group**.

       \- or -

   - Right-click one of the .rc files and choose **New Horizontal Tab Group** or **New Vertical Tab Group** from the shortcut menu.

> [!NOTE]
> If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

## Requirements

Win32

## See also

- [Resource Files](../windows/resource-files-visual-studio.md)
- [Resource Editors](../windows/resource-editors.md)
