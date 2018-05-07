---
title: "Aligning Controls on a Guide | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["DLUs (dialog units)", "controls [C++], aligning", "Dialog editor, snap to guides", "guides, tick mark interval", "dialog box controls, placement", "guides, aligning controls", "dialog units (DLUs)", "snap to guides (Dialog editor)", "controls [C++], sizing", "tick mark interval in Dialog editor", "controls [C++], snap to guides/grid"]
ms.assetid: 17db84ba-5288-4478-be57-afa748aa6447
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Aligning Controls on a Guide
The sizing handles of controls snap to guides when the controls are moved, and guides snap to controls (if there are no controls previously snapped to the guide). When a guide is moved, controls that are snapped to it move as well. Controls snapped to more than one guide are resized when one of the guides is moved.  
  
 The tick marks in the rulers that determine the spacing of guides and controls are defined by dialog units (DLUs). A DLU is based on the size of the dialog box font, normally 8-point MS Shell Dlg. A horizontal DLU is the average width of the dialog box font divided by four. A vertical DLU is the average height of the font divided by eight.  
  
### To size a group of controls with guides  
  
1.  Snap one side of the control (or controls) to a guide.  
  
2.  Drag a guide to the other side of the control (or controls).  
  
     If necessary with multiple controls, size each to snap to the second guide.  
  
3.  Move either guide to size the control (or controls).  
  
### To change the intervals of the tick marks  
  
1.  From the **Format** menu, choose **Guide Settings**.  
  
2.  In the [Guide Settings Dialog Box](../windows/guide-settings-dialog-box.md), in the **Grid Spacing** field, specify a new width and height in DLUs.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Dialog Editor States (Guides and Grids)](../windows/dialog-editor-states-guides-and-grids.md)   
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)

