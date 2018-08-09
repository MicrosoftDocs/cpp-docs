---
title: "Selecting Multiple Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Dialog editor, selecting controls", "dialog box controls, selecting in editor", "controls [C++], selecting", "controls [C++], removing from groups"]
ms.assetid: efbdbade-0a3a-4328-b36e-a6376c06e8de
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Selecting Multiple Controls
### To select multiple controls  
  
1.  In the [Toolbox Window](/visualstudio/ide/reference/toolbox), select the **Pointer** tool.  
  
2.  Drag the pointer to draw a selection box around the controls you want to select in your dialog box.  
  
     When you release the mouse button, all controls inside and intersecting the selection box are selected.  
  
     \- or -  
  
-   Hold down the **Shift** key and click the controls you'd like to include in the selection.  
  
     \- or -  
  
-   Hold down the **Ctrl** key and click the controls you'd like to include in the selection.  
  
### To remove a control from a group of selected controls or to add a control to a group of selected controls  
  
1.  With a group of controls selected, hold down the **Shift** key and click the control you want to remove from or add to the existing selection.  
  
    > [!NOTE]
    >  Holding down the **Ctrl** key and clicking a control within a selection will make that control the dominant control in that selection. For more information, see [Specifying the Dominant Control](../windows/specifying-the-dominant-control.md).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [Selecting Controls](../windows/selecting-controls.md)   
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)