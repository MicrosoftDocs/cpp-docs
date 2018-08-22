---
title: "Disabling Guides | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["guides, disabling snapping", "Dialog editor, snap to guides", "snap to guides (Dialog editor)", "controls [C++], snap to guides/grid"]
ms.assetid: 51efa07b-8684-474e-a0b4-191ec5d91d1a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Disabling Guides

You can use special keys in conjunction with the mouse to disable the snapping effect of the guides. Using the **Alt** key disables the snapping effects of the guide selected. Moving a guide with the **Shift** key prevents snapped controls from moving with the guide.

### To disable the snapping effect of the guides

1. Drag the control while holding down the **Alt** key.

### To move guides without moving the snapped controls

1. Drag the guide while holding down the **Shift** key.

### To turn off the guides

1. From the **Format** menu, choose **Guide Settings**.

2. In the [Guide Settings Dialog Box](../windows/guide-settings-dialog-box.md), under **Layout Guides**, select **None**.

   > [!NOTE]
   > You can also double-click the ruler bar to access the **Guide Settings** dialog box.

 \- or -

- On the **Format** menu, click **Toggle Guides**.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Dialog Editor States (Guides and Grids)](../windows/dialog-editor-states-guides-and-grids.md)  
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)