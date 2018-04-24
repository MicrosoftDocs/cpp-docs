---
title: "Command, Menu, and Toolbar Overview | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "menu essentials [Visual Studio SDK]"
  - "toolbar essentials [Visual Studio SDK]"
ms.assetid: cbdaceaa-7dd3-4a56-aea6-b759e48d83d6
caps.latest.revision: 19
manager: "douge"
---
# Command, Menu, and Toolbar Overview
Menus and toolbars provide a convenient graphical way for users to access commands in your VSPackage. Commands are functions that accomplish tasks, such as printing a document, refreshing a view, or creating a new file. Menus and toolbars are convenient graphical ways to present your commands to users. Typically, related commands are clustered together on the same menu or toolbar.  
  
-   Menus typically are displayed as one-word strings clustered in a row at the top of the integrated development environment (IDE) or a tool window. Menus also can be displayed as the result of a right-click event, and are referred to as shortcut menus in that context. When clicked, menus expand to display one or more commands. Commands, when clicked, can carry out tasks or launch submenus that contain additional commands. Some well-known menu names are File, Edit, View, and Window. For more information, see [Extending Menus and Commands](http://msdn.microsoft.com/library/7b2be4b9-e3fe-4412-874f-ae72ebc84c4b).  
  
-   Toolbars typically are rows of buttons and other controls, such as combo boxes, list boxes, text boxes, and menu controllers. All toolbar controls are associated with commands. When you click a toolbar button, its associated command is activated. Toolbar buttons usually have icons that suggest the underlying commands, such as a printer for a Print command. In a drop-down list control, each item in the list is associated with a different command. A menu controller is a hybrid in which one side of the control is a toolbar button and the other side is a down arrow that displays additional commands when clicked. For more information, see [How to: Create Toolbars for Tool Windows](../misc/how-to-create-toolbars-for-tool-windows.md) and [Adding Icons to Menu Commands](http://msdn.microsoft.com/library/362a0c7e-5729-4297-a83f-1aba1a37fd44).  
  
-   When you create a command, you also must create an event handler for it. The event handler determines when the command is visible or enabled, allows you to modify its text, and ensures that the command responds appropriately ("routes") when activated. In most instances, the IDE handles commands using the <xref:Microsoft.VisualStudio.OLE.Interop.IOleCommandTarget> interface. Commands in [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] route in a hierarchical manner, starting with the innermost command context, based on the local selection, and proceeding to the outermost context, based on the global selection. Commands added to the main menu are immediately available for scripting. For more information, see [MenuCommands Vs. OleMenuCommands](../misc/menucommands-vs-olemenucommands.md) and [Selection Context Objects](http://msdn.microsoft.com/library/7308ea8f-a42c-47e5-954e-7dee933dce7a).  
  
 To define new menus and toolbars, you must describe them in an Visual Studio Command Table (.vsct) file. The Visual Studio Package Template creates this file for you, along with the necessary elements to support whatever commands, toolbars, and editors you selected in the template. Alternatively, you can write your own .vsct file, using the xml schema described here: [VSCT XML Schema Reference](http://msdn.microsoft.com/library/49e7efae-e713-4762-a824-96fdaf92cdc9).  
  
 For more information about working with .vsct files, see [Visual Studio Command Table (.Vsct) Files](http://msdn.microsoft.com/library/1313adb4-add4-4e74-90e2-f4be522f5259), or try any of the [Walkthroughs for User Interface Elements](../misc/walkthroughs-for-user-interface-elements.md).  
  
 For a more detailed overview of menus and toolbars, see [Command Design](http://msdn.microsoft.com/library/097108c3-f758-4b87-89d6-b32d12d9041a).  
  
## See Also  
 [Extending Menus and Commands](http://msdn.microsoft.com/library/7b2be4b9-e3fe-4412-874f-ae72ebc84c4b)   
 [Commands, Menus, and Toolbars](http://msdn.microsoft.com/library/07b4ed90-dbbd-40df-b6c9-8395fd6f2ab6)   
 [VSPackages](http://msdn.microsoft.com/library/cad0893a-9c5f-45b7-952a-e2294f83e324)