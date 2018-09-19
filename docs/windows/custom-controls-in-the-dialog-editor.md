---
title: "Custom Controls in the Dialog Editor (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["Custom Control"]
dev_langs: ["C++"]
helpviewer_keywords: ["controls [C++], templates", "custom controls [C++], dialog boxes", "custom controls [C++]", "dialog box controls [C++], custom (user) controls", "Dialog Editor [C++], custom controls"]
ms.assetid: f494b314-4000-4bbe-bbd0-4b18fb71ede1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Custom Controls in the Dialog Editor (C++)

The Dialog editor lets you use existing "custom" or "user" controls in a dialog box template.

> [!NOTE]
> Custom controls in this sense are not to be confused with ActiveX controls. ActiveX controls were sometimes called OLE custom controls. Also, don't confuse these controls with the owner-drawn controls in Windows.

This functionality is intended to let you use controls other than those supplied by Windows. At run time, the control is associated with a window class (not the same as a C++ class). A more common way to accomplish the same task is to install any control, such as a static control, in your dialog box. Then at run time, in the [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) function, remove that control and replace it with your own custom control.

This is an old technique. Today you are advised in most cases to write an ActiveX control or subclass a Windows common control.

For these custom controls, you are limited to:

- Setting the location in the dialog box.

- Typing a caption.

- Identifying the name of the control's Windows class (your application code must register the control by this name).

- Typing a 32-bit hexadecimal value that sets the control's style.

- Setting the extended style.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)