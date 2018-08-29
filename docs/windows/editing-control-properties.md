---
title: "Editing Control Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["controls [C++], undoing changes", "controls [C++], editing properties", "dialog box controls, editing properties"]
ms.assetid: 9bdae21d-6dec-4344-a197-2ca4fc46d040
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Editing Control Properties

### To edit the properties of a control or controls

1. In the dialog box, select the control you want to modify.

   > [!NOTE]
   > If you select multiple controls, only the properties common to the selected controls can be edited.

2. In the [Properties window](/visualstudio/ide/reference/properties-window), change the properties of your control.

   > [!NOTE]
   > When you set the **Bitmap** property for a button, radio button, or check box control equal to **True**, the style BS_BITMAP is implemented for your control. For more information, see [Button Styles](../mfc/reference/styles-used-by-mfc.md#button-styles). For an example of associating a bitmap with a control, see [CButton::SetBitmap](../mfc/reference/cbutton-class.md#setbitmap). Bitmaps will not appear on your control while you are in the **Dialog** resource editor.

### To undo changes to the properties of a control

1. Make sure the control has focus in the **Dialog** editor.

2. Choose **Undo** from the **Edit** menu (if focus is not on the control, the **Undo** command will be unavailable).

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3\(v=vs.100\)).

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)