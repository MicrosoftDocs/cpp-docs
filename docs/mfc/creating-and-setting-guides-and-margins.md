---
title: "Creating and Setting Guides and Margins | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "guides, clearing"
  - "guides"
  - "Dialog editor, guides and margins"
  - "dialog box controls, placement"
  - "controls [C++], guides and margins"
  - "guides, creating"
  - "guides, moving"
  - "margins, moving"
ms.assetid: fafa4545-8f00-436f-b590-300e76601156
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating and Setting Guides and Margins
Whether you are moving controls, adding controls, or rearranging a current layout, guides can help you align controls accurately within a dialog box. Guides appear as blue dotted lines across the dialog box displayed in the editor and corresponding arrows in the rulers (at the top and along the left side of the Dialog editor).  
  
 When you create a dialog box, four margins are provided. Margins are modified guides, appearing as blue dotted lines.  
  
### To create a guide  
  
1.  Within the ruler, click once to create a guide. (One click creates a new guide; double-clicking launches the [Guide Settings Dialog Box](../mfc/guide-settings-dialog-box.md) in which you can specify guide settings.)  
  
### To set a guide  
  
1.  On the dialog box, click the guide and drag it to a new position. (You can also click the arrow in the ruler to drag the associated guide.)  
  
     The coordinates of the guide are displayed in the status bar at the bottom of the window and in the ruler. Move the pointer over the arrow in the ruler to display the exact position of the guide.  
  
### To delete a guide  
  
1.  Drag the guide out of the dialog box.  
  
 \- or -  
  
-   Drag the corresponding arrow off the ruler.  
  
#### To move margins  
  
1.  Drag the margin to the new position.  
  
     To make a margin disappear, move the margin to a zero position. To bring the margin back, place the pointer over the margin's zero position and move the margin into position.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
### Requirements  
 Win32  
  
## See Also  
 [Dialog Editor States (Guides and Grids)](../mfc/dialog-editor-states-guides-and-grids.md)   
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)

