---
title: "Creating a Dialog Box (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog"]
helpviewer_keywords: ["dialog boxes [C++], creating", "Dialog Editor [C++], creating dialog boxes", "modal dialog boxes [C++], logon screens", "logon screens"]
ms.assetid: 303de801-c4f8-42e1-b622-353f6423f688
---
# Creating a Dialog Box (C++)

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To create a new dialog box

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Add Resource** from the shortcut menu.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the **Add Resource** dialog box, select **Dialog** in the **Resource Type** list, then choose **New**.

   If a plus sign (**+**) appears next to the **Dialog** resource type, it means that dialog box templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

   The new dialog box opens in the **Dialog** editor.

   You can also [open existing dialog boxes in the Dialog Box editor for editing](../windows/viewing-and-editing-resources-in-a-resource-editor.md).

## To create a dialog box that a user can't exit

You can create a runtime dialog box that a user can't exit. This kind of dialog box is useful for logons, and for application or document locks.

1. In the **Properties** pane for the dialog box, set the **System Menu** property to **false**.

   This setting disables the dialog box system menu and **Close** button.

1. In the dialog box form, delete the **Cancel** and **OK** buttons.

   At run time, a user can't exit a modal dialog box that has these characteristics.

To enable testing of this kind of dialog box, the test dialog box function detects when **Esc** is pressed. (**Esc** is also known as the VK_ESCAPE virtual key.) No matter how the dialog box is designed to behave at run time, you can end test mode by pressing **Esc**.

> [!NOTE]
> For MFC applications, to create a dialog box that users cannot exit, you must override the default behavior of `OnOK` and `OnCancel` because even if you delete the associated buttons, the dialog box can still be dismissed by pressing **Enter** or **Esc**.

For information about how to add resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index).

## Requirements

Win32

## See also

- [How to: Create a Resource](../windows/how-to-create-a-resource.md)
- [Resource Files](../windows/resource-files-visual-studio.md)
- [Dialog Editor](../windows/dialog-editor.md)
