---
description: "Learn more about: Resource Editors (C++)"
title: "Resource Editors (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vs.editors.resource", "vc.resvw.resource.editors", "vs.resvw.resource.editors", "vs.resourceview", "vc.resvw.resource.previewing", "vs.resvw.resource.previewing"]
helpviewer_keywords: ["editors [C++], resource", "editors [C++]", "resource editors", "Windows [C++], application resource editing", "resources [C++], viewing", "layouts, previewing resource", "resource editors [C++], viewing resources", ".rc files [C++], viewing resources", "resources [C++], editing", "properties [C++], resources", "resources [C++], properties"]
ms.assetid: e20a29ec-d6fb-4ead-98f3-431a0e23aaaf
---
# Resource Editors (C++)

A resource editor is a specialized environment for creating or modifying resources that are included in a Visual Studio project. The Visual Studio resource editors share techniques and interfaces to help you create and modify application resources quickly and easily. Resource editors enable you to view and edit resources in the appropriate editor and preview resources.

The appropriate editor opens automatically when you create or open a resource.

> [!NOTE]
> Because managed projects do not use resource script files, you must open your resources from **Solution Explorer**. You can use the [Image Editor](../windows/image-editor-for-icons.md) and the [Binary Editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.

|Use the...|To edit...|
|----------------|----------------|
|[Accelerator Editor](../windows/accelerator-editor.md)|Accelerator tables in Visual Studio C++ projects.|
|[Binary Editor](binary-editor.md)|Binary data information and custom resources in Visual C++, Visual Basic, or Visual C# projects.|
|[Dialog Editor](../windows/dialog-editor.md)|Dialog boxes in Visual Studio C++ projects.|
|[Image Editor](../windows/image-editor-for-icons.md)|Bitmaps, icons, cursors, and other image files in Visual C++, Visual Basic, or Visual C# projects.|
|[Menu Editor](../windows/menu-editor.md)|Menu resources in Visual Studio C++ projects.|
|[Ribbon Editor](../mfc/ribbon-designer-mfc.md)|Ribbon resources in MFC projects.|
|[String Editor](../windows/string-editor.md)|String tables in Visual Studio C++ projects.|
|[Toolbar Editor](../windows/toolbar-editor.md)|Toolbar resources in Visual Studio C++ projects. The **Toolbar Editor** is part of the **Image Editor**.|
|[Version Information Editor](../windows/version-information-editor.md)|Version information in Visual Studio C++ projects.|

> [!NOTE]
> If your project doesn't already contain an .rc file, see [How to: Create Resources](../windows/how-to-create-a-resource-script-file.md).

## View and Edit Resources

Each resource type has a resource editor specific to that resource type. You can rearrange, resize, add controls and features, or otherwise modify aspects of a resource using the associated editor. You can also edit a resource in text format and binary format. For more information, see [How to: Create Resources](../windows/how-to-create-a-resource-script-file.md).

Some resource types are individual files that can be imported and used in various ways; these include bitmaps, icons, cursors, toolbars, and html files. Such resources have file names and [resource identifiers](../windows/symbols-resource-identifiers.md). Others, such as dialogs, menus, and string tables in Win32 projects, exist only as part of a resource script (.rc) file or resource template (.rct) file.

Resources can also be edited outside of the project without having the project open. For more information, see [How to: Create Resources](./how-to-create-a-resource-script-file.md).

> [!NOTE]
> Properties of a resource can be modified using the **Properties** window.

- To edit the properties of a resource, in [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click the resource you want to edit and choose **Properties**.  Then, in the [Properties window](/visualstudio/ide/reference/properties-window), change the properties of your resource.

- To undo a change made to the properties of a resource, make sure your resource has focus in **Resource View** and choose **Undo** from the **Edit** menu.

### Win32 Resources

You can access Win32 resources in the [Resource View](how-to-create-a-resource-script-file.md#create-resources) pane.

#### To view a Win32 resource in a resource editor

1. Go to menu **View** > **Other Windows** > **Resource View**.

1. If the **Resource View** window isn't the top-most window, select the **Resource View** tab to bring it to the top.

1. From **Resource View**, expand the folder for the project that contains resources you want to view. For example, if you want to view a dialog resource, expand the **Dialog** folder.

1. Double-click the resource, for example, **IDD_ABOUTBOX**.

   The resource opens in the appropriate editor. For example, for dialog resources, the resource opens inside the **Dialog Editor**.

#### To delete an existing Win32 resource

1. In **Resource View**, expand the node for a resource type.

1. Right-click on the resource you want to delete and choose **Delete**.

> [!TIP]
> You can also use this method when you have the .rc file open in a document window outside a project.

### Managed Project Resources

Because managed projects don't use resource script files, you must open your resources from **Solution Explorer**. Use the [Image Editor](../windows/image-editor-for-icons.md) and the [Binary Editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources and Visual Studio resource editors don't support editing embedded resources.

- To view a managed resource in a resource editor, in **Solution Explorer**, double-click the resource, for example, *Bitmap1.bmp*, and the resource opens in the appropriate editor.

- To delete an existing managed resource, in **Solution Explorer**, right-click the resource you want to delete and choose **Delete**.

## Preview Resources

Preview your resources to allow you to view graphical resource without opening them. Previewing is also useful for executables after you've compiled them, because the resource identifiers change to numbers. Since these numeric identifiers often don't provide enough information, previewing the resources helps you quickly identify them.

The following resource types provide a visual layout preview: Bitmap, Dialog, Icon, Menu, Cursor, Toolbar

The following resources don't provide a visual preview: Accelerator, Manifest, String Table, Version Information

> [!NOTE]
> To preview resources requires Win32.

### To preview resources

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources) or a document window, select your resource, for example, **IDD_ABOUTBOX**.

1. In the [Properties window](/visualstudio/ide/reference/properties-window), select the **Property Pages** button.

   > [!TIP]
   > Use a shortcut, go to menu **View** > **Property Pages**.

   The **Property** page for the resource opens displaying a preview of that resource. You can use the **Up** and **Down** arrow keys to navigate the tree control in **Resource View** or the document window. The **Property** page will stay open and show any resource that has focus and can be previewed.

## Requirements

None

## See also

[Working with Resource Files](../windows/working-with-resource-files.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Identifiers (Symbols)](../windows/symbols-resource-identifiers.md)<br/>
