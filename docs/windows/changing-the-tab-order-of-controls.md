---
title: "Changing the Tab Order of Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["controls [C++], tab order", "focus, tab order", "tab controls, tab order", "Tabstop property for controls", "controls [C++], focus", "dialog box controls, tab order"]
ms.assetid: e2cee764-4367-42d7-9563-65a68f76f5ff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing the Tab Order of Controls

The tab order is the order in which the **Tab** key moves the input focus from one control to the next within a dialog box. Usually the tab order proceeds from left to right and from top to bottom in a dialog box. Each control has a **Tabstop** property that determines whether a control receives input focus.

### To set input focus for a control

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), select **True** or **False** in the **Tabstop** property.

Even controls that do not have the **Tabstop** property set to **True** need to be part of the tab order. This can be important, for example, when you [define access keys (mnemonics)](../windows/defining-mnemonics-access-keys.md) for controls that do not have captions. Static text that contains an access key for a related control must immediately precede the related control in the tab order.

> [!NOTE]
> If your dialog box contains overlapping controls, changing the tab order may change the way the controls are displayed. Controls that come later in the tab order are always displayed on top of any overlapping controls that precede them in the tab order.

### To view the current tab order for all controls in a dialog box

1. On the **Format** menu, click **Tab Order**.

\- or -

- Press **Ctrl**+**D**.

### To change the tab order for all controls in a dialog box

1. On the **Format** menu, click **Tab Order**.

   A number in the upper-left corner of each control shows its place in the current tab order.

2. Set the tab order by clicking each control in the order you want the **Tab** key to follow.

3. Press **Enter** to exit **Tab Order** mode.

   > [!TIP]
   > Once you enter **Tab Order** mode, you can press **Esc** or **Enter** to disable the ability to change the tab order.

### To change the tab order for two or more controls

1. From the **Format** menu, choose **Tab Order**.

2. Specify where the change in order will begin. To do this, hold down the **Ctrl** key and click the control prior to the one where you want the changed order to begin.

   For example, if you want to change the order of controls `7` through `9`, hold down **Ctrl**, then select control `6` first.

   > [!NOTE]
   > To set a specific control to number `1` (first in the tab order), double-click the control.

3. Release the **Ctrl** key, then click the controls in the order you want the **Tab** key to follow from that point.

4. Press **Enter** to exit **Tab Order** mode.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md)  
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)  
[Controls](../mfc/controls-mfc.md)