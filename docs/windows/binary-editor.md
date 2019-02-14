---
title: "Binary Editor (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.binary.F1", "vc.editors.binary"]
helpviewer_keywords: ["editors, Binary", "resources [C++], editing", "resource editors [C++], Binary editor", "Binary editor", "binary data, editing", "resources [C++], opening for binary editing", "binary data", "hexadecimal bytes in binary data", "strings [C++], searching for", "file searches [C++]", "binary data, finding", "ASCII characters, finding in binary data", "custom resources [C++]", "data resources [C++]", "resources [C++], creating"]
ms.assetid: 2483c48b-1252-4dbc-826b-82e6c1a0e9cb
---
# Binary Editor (C++)

> [!WARNING]
> The **Binary Editor** is not available in Express editions.

The Binary editor allows you to edit any resource at the binary level in either hexadecimal or ASCII format. You can also use the [Find command](/visualstudio/ide/reference/find-command) to search for either ASCII strings or hexadecimal bytes. You should use the **Binary** editor only when you need to view or make minor changes to custom resources or resource types not supported by the Visual Studio environment.

To open the **Binary Editor**, first choose **File** > **New** > **File** from the main menu, select the file you want to edit, then select the drop arrow next to the **Open** button, and choose **Open With** > **Binary Editor**.

> [!CAUTION]
> Editing resources such as dialog boxes, images, or menus in the Binary editor is dangerous. Incorrect editing could corrupt the resource, making it unreadable in its native editor.

> [!TIP]
> While using the **Binary** editor, in many instances, you can right-click to display a shortcut menu of resource-specific commands. The commands available depend on what your cursor is pointing to. For example, if you click while pointing to the **Binary** editor with selected hexadecimal values, the shortcut menu shows the **Cut**, **Copy**, and **Paste** commands.

## How-To

With the **Binary** editor, see the following actions:

### To open a Windows desktop resource for binary editing

1. In [Resource View](../windows/resource-view-window.md), select the specific resource file you want to edit.

1. Right-click the resource and click **Open Binary Data** from the shortcut menu.

   > [!NOTE]
   > If you use the [Resource View](../windows/resource-view-window.md) window to open a resource with a format that Visual Studio does not recognize (such as RCDATA or a custom resource), the resource is automatically opened in the **Binary** editor.

### To open a managed resource for binary editing

1. In **Solution Explorer**, select the specific resource file you want to edit.

1. Right-click the resource and choose **Open With** from the shortcut menu.

1. In the **Open With** dialog box, choose **Binary Editor**.

   > [!NOTE]
   > You can use the [Image editor](../windows/image-editor-for-icons.md) and the [Binary editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.

![Binary Editor](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")<br/>
Binary Data for a Dialog Box Displayed in the Binary Editor

Only certain ASCII values are represented in the Binary editor (0x20 through 0x7E). Extended characters are displayed as periods in the ASCII Value section of the Binary editor (the right panel). The "printable" characters are ASCII values 32 through 126.

> [!NOTE]
> If you want to use the **Binary** editor on a resource already being edited in another editor window, close the other editor window first.

### To edit a resource

1. Select the byte you want to edit.

   The **Tab** key moves the focus between the hexadecimal and ASCII sections of the **Binary** editor. You can use the **Page Up** and **Page Down** keys to move through the resource one screen at a time.

1. Type the new value.

   The value changes immediately in both the hexadecimal and ASCII sections and focus shifts to the next value in line.

   > [!NOTE]
   > The **Binary** editor accepts changes automatically when you close the editor.

### To find binary data

You can search for either ASCII strings or hexadecimal bytes. For example, to find "Hello," you can search for either the string "Hello" or for "48 65 6C 6C 6F" (the hexadecimal equivalent).

1. From the **Edit** menu, choose [Find](/visualstudio/ide/reference/find-command).

1. In the **Find What** box, select a previous search string from the drop-down list or type the data you want to find.

1. Select any of the **Find** options and choose **Find Next**.

### To create a new custom or data resource

You can create a new custom or data resource by placing the resource in a separate file using normal resource script (.rc) file syntax, and then including that file by right-clicking your project in **Solution Explorer** and clicking **Resource Includes** on the shortcut menu.

1. [Create a .rc file](../windows/how-to-create-a-resource-script-file.md) that contains the custom or data resource.

   You can type custom data in a .rc file as null-terminated quoted strings, or as integers in decimal, hexadecimal, or octal format.

1. In **Solution Explorer**, right-click your project's .rc file, then click **Resource Includes** on the shortcut menu.

1. In the **Compile-Time Directives** box, type a `#include` statement that gives the name of the file containing your custom resource. For example:

    ```cpp
    #include mydata.rc
    ```

   Make sure the syntax and spelling of what you type are correct. The contents of the **Compile-Time Directives** box are inserted into the resource script file exactly as you typed them.

1. Select **OK** to record your changes.

Another way to create a custom resource is to import an external file as the custom resource. For more information, see [Importing and Exporting Resources](../windows/how-to-import-and-export-resources.md).

> [!NOTE]
> Creating new custom or data resources requires Win32.

## Requirements

None

## See Also

[Resource Editors](../windows/resource-editors.md)