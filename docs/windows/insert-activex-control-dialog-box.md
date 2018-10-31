---
title: "Insert ActiveX Control Dialog Box (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog.insertActiveXControls"]
helpviewer_keywords: ["Insert ActiveX Control dialog box [C++]", "ActiveX controls [C++], adding to dialog boxes"]
ms.assetid: 06638ea3-0726-40da-a989-9b89292d0e3d
---
# Insert ActiveX Control Dialog Box (C++)

This dialog box enables you to [insert ActiveX controls into your dialog box](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md) while using the [Dialog editor](../windows/dialog-editor.md).

### ActiveX Control

Displays a list of Active X controls. Inserting a control from this dialog box does not generate a wrapper class. If you need a wrapper class, use [Class View](/visualstudio/ide/viewing-the-structure-of-code) to create one (for more information, see [Adding a Class](../ide/adding-a-class-visual-cpp.md)). If an Active X control does not appear in this dialog box, try installing the control according to the vendor's instructions.

### Path

Displays the file in which the ActiveX control is found.

You can place controls in the **Toolbox** window for easy access. For more information, see [Toolbox](/visualstudio/ide/reference/).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Dialog Editor Tab, Toolbox](../windows/dialog-editor-tab-toolbox.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)