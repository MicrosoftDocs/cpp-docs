---
title: "Creating a New Dialog Box (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog"]
helpviewer_keywords: ["dialog boxes [C++], creating", "Dialog Editor [C++], creating dialog boxes"]
ms.assetid: 303de801-c4f8-42e1-b622-353f6423f688
---
# Creating a New Dialog Box (C++)

### To create a new dialog box

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Add Resource** from the shortcut menu.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. In the **Add Resource** dialog box, select **Dialog** in the **Resource Type** list, then click **New**.

   If a plus sign (**+**) appears next to the **Dialog** resource type, it means that dialog box templates are available. Click the plus sign to expand the list of templates, select a template, and click **New**.

   The new dialog box opens in the **Dialog** editor.

   You can also [open existing dialog boxes in the Dialog Box editor for editing](../windows/viewing-and-editing-resources-in-a-resource-editor.md).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[How to: Create a Resource](../windows/how-to-create-a-resource.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Dialog Editor](../windows/dialog-editor.md)