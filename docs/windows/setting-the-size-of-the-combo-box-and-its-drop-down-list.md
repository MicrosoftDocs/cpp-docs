---
title: "Setting the Size of the Combo Box and Its Drop-Down List | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.dialog.combo"]
dev_langs: ["C++"]
helpviewer_keywords: ["combo boxes, sizing", "controls [C++], sizing"]
ms.assetid: 51fb53cf-9ddf-4a20-962e-8553938e55ee
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Setting the Size of the Combo Box and Its Drop-Down List

You can size a combo box when you add it to the dialog box. You can also specify the size of the drop-down list box.

### To size a combo box

1. Select the combo-box control in your dialog box.

   Initially, only the right and left sizing handles are active.

2. Use the sizing handles to set the width of the combo box.

You can also set the vertical size of the drop-down portion of the combo box.

#### To set the size of the combo box drop-down list

1. Click the drop-down arrow button at the right of the combo box.

   ![Arrow on a combo box in an MFC project](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   The outline of the control changes to show the size of the combo box with the drop-down list area extended.

2. Use the lower sizing handle to change the initial size of the drop-down list area.

   ![Combo&#45;box sizing in an MFC project](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

3. Click the drop-down arrow again to close the drop-down list portion of the combo box.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Adding Values to a Combo Box Control](../windows/adding-values-to-a-combo-box-control.md)  
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)  
[Controls](../mfc/controls-mfc.md)