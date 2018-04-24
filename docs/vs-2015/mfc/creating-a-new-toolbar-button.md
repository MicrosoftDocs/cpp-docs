---
title: "Creating a New Toolbar Button | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.toolbar"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "Toolbar editor, creating buttons"
  - "toolbar buttons (in Toolbar editor), button image"
  - "toolbar buttons (in Toolbar editor), creating"
  - "toolbar buttons (in Toolbar editor)"
ms.assetid: 46c120fe-4f2a-4887-a08f-bd1fea04b3f4
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating a New Toolbar Button
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating a New Toolbar Button](https://docs.microsoft.com/cpp/windows/creating-a-new-toolbar-button).  
  
  
To create a new toolbar button  
  
1.  In [Resource view](../windows/resource-view-window.md) expand the resource folder (for example, Project1.rc).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Expand the **Toolbar** folder and select a toolbar to edit.  
  
3.  Assign an ID to the blank button at the right end of the toolbar. You can do so by editing the **ID** property in the [Properties Window](http://msdn.microsoft.com/library/e6e0fa4f-75c4-4a52-af15-281cd61876ca). For example, you may want to give a toolbar button the same ID as a menu option. In this case, use the drop-down list box to select the **ID** of the menu option.  
  
     –or–  
  
     Select the blank button at the right end of the toolbar (in the Toolbar View pane) and begin drawing. A default button command ID is assigned (ID_BUTTON\<n>).  
  
 You can also copy and paste an image onto a toolbar as a new button.  
  
#### To add an image to a toolbar as a button  
  
1.  In [Resource View](../windows/resource-view-window.md), open the toolbar by double-clicking it.  
  
2.  Next, open the image you'd like to add to your toolbar.  
  
    > [!NOTE]
    >  If you open the image in Visual Studio, it will open in the Image editor. You can also open the image in other graphics programs.  
  
3.  From the **Edit** menu, choose **Copy**.  
  
4.  Switch to your toolbar by clicking its tab at the top of the source window.  
  
5.  From the **Edit** menu, choose **Paste**.  
  
     The image will appear on your toolbar as a new button.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
### Requirements  
 MFC or ATL  
  
## See Also  
 [Toolbar Button Properties](../mfc/toolbar-button-properties.md)   
 [Creating, Moving, and Editing Toolbar Buttons](../mfc/creating-moving-and-editing-toolbar-buttons.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)









