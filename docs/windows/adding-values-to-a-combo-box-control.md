---
title: "Adding Values to a Combo Box Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["vc.editors.dialog.combo"]
dev_langs: ["C++"]
helpviewer_keywords: ["combo boxes [C++], Data property", "controls [Visual Studio], testing values in combo boxes", "combo boxes [C++], adding values", "combo boxes [C++], previewing values", "controls [C++], testing values in combo boxes", "Data property", "combo boxes [C++], testing values"]
ms.assetid: 22a78f98-fada-48b3-90d8-7fa0d8e4de51
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Adding Values to a Combo Box Control
You can add values to a combo box control as long as you have the Dialog editor open.  
  
> [!TIP]
>  It's a good idea to add all values to the combo box *before* you size the box in the Dialog editor, or you may truncate text that should appear in the combo control.  
  
#### To enter values into a combo box control  
  
1.  Select the combo box control by clicking on it.  
  
2.  In the [Properties Window](/visualstudio/ide/reference/properties-window), scroll down to the **Data** property.  
  
    > [!NOTE]
    >  If you are displaying properties grouped by type, **Data** appears in the **Misc** properties.  
  
3.  Click in the value area for the **Data** property and type in your data values, separated by semicolons.  
  
    > [!NOTE]
    >  Do not put spaces between values because spaces interfere with alphabetizing in the drop-down list.  
  
4.  Click **Enter** when you are finished adding values.  
  
 For information on enlarging the drop-down portion of a combo box, see [Setting the Size of the Combo Box and Its Drop-Down List](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).  
  
> [!NOTE]
>  You cannot add values to Win32 projects using this procedure (the **Data** property is grayed out for Win32 projects). Because Win32 projects do not have libraries that add this capability, you must add values to a combo box with a Win32 project programmatically.  
  
#### To test the appearance of values in a combo box  
  
1.  After entering values in the **Data** property, click the **Test** button on the [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).  
  
     Try scrolling down the entire value list. Values appear exactly as they are typed in the **Data** property in the Properties window. There is no spelling or capitalization checking.  
  
     Press ESC to return to the Dialog box editor.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
### Requirements  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)   
 [Controls](../mfc/controls-mfc.md)

