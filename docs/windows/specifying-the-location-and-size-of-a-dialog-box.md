---
title: "Specifying the Location and Size of a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["dialog boxes, size", "dialog boxes, positioning"]
ms.assetid: 2b7c495e-6595-4cfb-9664-80b2826d0851
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Specifying the Location and Size of a Dialog Box
The location and size of a dialog box, as well as the location and size of controls within it, are measured in dialog units. The values for individual controls and the dialog box appear in the lower right of the Visual Studio status bar when you select them.  
  
 There are three properties that you can set in the [Properties Window](/visualstudio/ide/reference/properties-window) to specify where a dialog box will appear onscreen. The Center property is Boolean; if you set the value to True, the dialog box will always appear in the center of the screen. If you set it to False, you can then set the XPos and YPos properties to explicitly define where onscreen the dialog box will appear. The position properties are offset values from the upper left-hand corner of the viewing area, which is defined as {X=0, Y=0}. The position is also based on the **Absolute Align** property: if True, the coordinates are relative to the screen; if False, the coordinates are relative to the dialog owner's window.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
## Requirements  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)   
 [Controls](../mfc/controls-mfc.md)

