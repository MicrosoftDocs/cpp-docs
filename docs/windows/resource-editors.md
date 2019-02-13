---
title: "Resource Editors (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vs.editors.resource", "vc.resvw.resource.editors", "vs.resvw.resource.editors", "vs.resourceview", "vc.resvw.resource.previewing", "vs.resvw.resource.previewing"]
helpviewer_keywords: ["editors [C++], resource", "editors [C++]", "resource editors", "Windows [C++], application resource editing", "resources [C++], viewing", "layouts, previewing resource", "resource editors [C++], viewing resources", ".rc files [C++], viewing resources", "resources [C++], editing", "properties [C++], resources", "resources [C++], properties"]
ms.assetid: e20a29ec-d6fb-4ead-98f3-431a0e23aaaf
---
# Resource Editors (C++)

A **Resource** editor is a specialized environment for creating or modifying resources that are included in a Visual Studio project. The Visual Studio resource editors share techniques and interfaces to help you create and modify application resources quickly and easily. Resource editors enable you to view and edit resources in the appropriate editor and preview resources.

The appropriate editor opens automatically when you create or open a resource.

> [!NOTE]
> Because managed projects do not use resource script files, you must open your resources from **Solution Explorer**. You can use the [Image editor](../windows/image-editor-for-icons.md) and the [Binary editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

|Use the...|To edit...|
|----------------|----------------|
|[Accelerator Editor](../windows/accelerator-editor.md)|Accelerator tables in Visual C++ projects.|
|[Binary Editor](binary-editor.md)|Binary data information and custom resources in Visual C++, Visual Basic, or Visual C# projects.|
|[Dialog Editor](../windows/dialog-editor.md)|Dialog boxes in Visual C++ projects.|
|[Image Editor](../windows/image-editor-for-icons.md)|Bitmaps, icons, cursors, and other image files in Visual C++, Visual Basic, or Visual C# projects.|
|[Menu Editor](../windows/menu-editor.md)|Menu resources in Visual C++ projects.|
|[Ribbon Editor](../mfc/ribbon-designer-mfc.md)|Ribbon resources in MFC projects.|
|[String Editor](../windows/string-editor.md)|String tables in Visual C++ projects.|
|[Toolbar Editor](../windows/toolbar-editor.md)|Toolbar resources in Visual C++ projects. The Toolbar editor is part of the Image editor.|
|[Version Information Editor](../windows/version-information-editor.md)|Version information in Visual C++ projects.|

## View and edit resources in a resource editor

Each resource type has a **Resource** editor specific to that resource type. You can rearrange, resize, add controls and features, or otherwise modify aspects of a resource using the associated editor. You can also edit a resource in [text format](../windows/how-to-open-a-resource-script-file-in-text-format.md) and [binary format](../windows/opening-a-resource-for-binary-editing.md).

Some resource types are individual files that can be imported and used in various ways; these include bitmaps, icons, cursors, toolbars, and html files. Such resources have file names and [resource identifiers](../windows/symbols-resource-identifiers.md). Others, such as dialogs, menus, and string tables in Win32 projects, exist only as part of a resource script (.rc) file or resource template (.rct) file.

Resources can also be edited outside of the project, see [How to: Open a Resource Script File Outside of a Project (Standalone)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

> [!NOTE]
> Properties of a resource [can be modified using the Properties window](../windows/changing-the-properties-of-a-resource.md).

To edit the properties of a resource:

1. In [Resource View](../windows/resource-view-window.md), right-click the resource you want to edit and choose **Properties** from the shortcut menu.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the [Properties window](/visualstudio/ide/reference/properties-window), change the properties of your resource.

To undo a change made to the properties of a resource:

1. Make sure your resource has focus in **Resource View**.

1. Choose **Undo** from the **Edit** menu.

### Win32 resources

You can access Win32 resources in the [Resource View](../windows/resource-view-window.md) pane.

To view a Win32 resource in a resource editor:

1. Select **Resource View** from the **View** menu.

1. If the **Resource View** window isn't the top-most window, select the **Resource View** tab to bring it to the top.

1. From **Resource View**, expand the folder for the project that contains resources you want to view. For example, if you want to view a dialog resource, expand the **Dialog** folder.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Double-click the resource, for example, **IDD_ABOUTBOX**.

   The resource opens in the appropriate editor. For example, for dialog resources, the resource opens inside the **Dialog** editor.

   You can also [view resources in an .rc (resource script) file without having a project open](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

To delete an existing Win 32 resource:

1. In **Resource View**, expand the node for a resource type.

2. Right-click on the resource you want to delete and choose **Delete** from the shortcut menu.

   > [!NOTE]
   > You can delete a resource using the same shortcut menu command when you have the .rc file open in a document window outside a project.

### Resources in managed projects

Because managed projects don't use resource script files, you must open your resources from **Solution Explorer**. You can use the [Image editor](../windows/image-editor-for-icons.md) and the [Binary editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors don't support editing embedded resources.

To view a managed resource in a resource editor:

In **Solution Explorer**, double-click the resource, for example, *Bitmap1.bmp*.

   The resource opens in the appropriate editor.

To delete an existing managed resource:

In **Solution Explorer**, right-click the resource you want to delete and choose **Delete** from the shortcut menu.

## Preview resources

Preview your resources to allow you to view graphical resource without opening them. Previewing is also useful for executables after you've compiled them because the resource identifiers change to numbers. Since these numeric identifiers often don't provide enough information, previewing the resources helps you quickly identify them.

You can preview the visual layout of the following resource types: Bitmap, Dialog, Icon, Menu, Cursor, Toolbar

The visual preview function doesn't apply to resources: Accelerator, Manifest, String Table, and Version Information

> [!NOTE]
> To preview resources requires Win32.

To preview resources:

1. In [Resource View](../windows/resource-view-window.md) or a document window, select your resource, for example, `IDD_ABOUTBOX`.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the [Properties window](/visualstudio/ide/reference/properties-window), select the **Property Pages** button.

   > [!TIP]
   > For a shortcut, on the **View** menu, select **Property Pages**.

   The **Property Page** for the resource opens displaying a preview of that resource. You can then use the **Up** and **Down** arrow keys to navigate the tree control in **Resource View** or the document window. The **Property Page** will stay open and show any resource that has focus and can be previewed.

## Requirements

None

## See also

[Working with Resource Files](../windows/working-with-resource-files.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)<br/>
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)