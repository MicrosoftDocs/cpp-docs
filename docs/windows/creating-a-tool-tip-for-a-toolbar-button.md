---
title: "Creating a Tool Tip for a Toolbar Button | Microsoft Docs"
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
helpviewer_keywords: 
  - "tool tips [C++], adding to toolbar buttons"
  - "\n in tool tip"
  - "toolbar buttons [C++], tool tips"
  - "buttons [C++], tool tips"
  - "Toolbar editor, creating tool tips"
ms.assetid: 0af65342-fd78-4e78-8d0d-dc68f7fc462e
caps.latest.revision: 10
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
# Creating a Tool Tip for a Toolbar Button
### To create a tool tip  
  
1.  Select the toolbar button.  
  
2.  In the [Properties Window](/visualstudio/ide/reference/properties-window), in the **Prompt** property field, add a description of the button for the status bar; after the message, add \n and the tool tip name.  
  
 A common example of a tool tip is the Print button in WordPad:  
  
 1. Open WordPad.  
  
 2. Hover your mouse pointer over the **Print** toolbar button.  
  
 3. Notice that the word 'Print' now is floating under your mouse pointer.  
  
 4. Look at the status bar (at the very bottom of the WordPad window) – notice that it now shows the text "Prints the active document".  
  
 The 'Print' in Step 3 is the "Tool tip name," and the 'Prints the active document' from Step 4 is the "description of the button for the status bar."  
  
 If you want this effect using the **Toolbar** editor, you set the **Prompt** property to **Prints the active document\nPrint**.  
  
> [!NOTE]
>  You can edit prompt text using the [Properties Window](/visualstudio/ide/reference/properties-window).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 MFC or ATL  
  
## See Also  
 [Creating, Moving, and Editing Toolbar Buttons](../mfc/creating-moving-and-editing-toolbar-buttons.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)

