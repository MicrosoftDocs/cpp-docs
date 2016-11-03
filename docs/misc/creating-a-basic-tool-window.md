---
title: "Creating a Basic Tool Window | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Visual Studio SDK, tool windows"
  - "tool windows, creating in IDE"
ms.assetid: 1e96cf07-bde4-445b-bcd0-48cadb351dde
caps.latest.revision: 12
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Creating a Basic Tool Window
Tool windows are common Visual Studio: the **Solution Explorer**, **Task List**, **Error List**, and **Output** windows are all tool windows. All tool windows can be docked in the IDE in the same manner. Predictable docking lets users manage their tasks and information efficiently.  
  
 The Visual Studio Package template creates a basic implementation of a simple tool window.  
  
### To create a tool window by using the Visual Studio Package Template  
  
1.  On the **File** menu, point to **New**, and then click **Project**.  
  
2.  In the **New Project** dialog box, expand **Other Project Types**, and click **Extensibility**.  
  
3.  In the **Templates** pane click **Visual Studio Package**.  
  
4.  In the **Location** box, type the file path for your VSPackage.  
  
5.  In the **Name** box, type the name for the solution and click **OK** to start the template.  
  
6.  On the **Select a Programming Language** page, select C# or Visual Basic. Have the template generate a key.snk file to sign the assembly. Alternately, **Browse** to your own key file. The template makes a copy of your key file and names it key.snk.  
  
7.  On the **Basic VSPackage Information** page, specify any details about the VSPackage or accept the defaults. For more information, see [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
8.  On the **Select VSPackage Options** page, check Tool Window.  
  
9. On the Tool Window Options page, type the name for the title bar in the **Window Name** box. This name is also used as display text for the menu command for your tool window. The menu command is added to the **Other Windows** submenu on the **View** menu. Type the command ID for your tool window in the **Command ID** box, or accept the default.  
  
10. Click **Finish** to create your VSPackage in the folder that you specified.  
  
### To test your tool window  
  
1.  On the **View** menu, point to **Other Windows**, and then click your tool window command. A tool window with a **Click Me!** button appears.  
  
2.  Click the button. A message appears with the text:  
  
     We are inside [Company.\<VSPackage name>.MyControl].button1_Click().  
  
## See Also  
 [Opening a Tool Window Programmatically](../misc/opening-a-tool-window-programmatically.md)   
 [VSPackage Essentials](../misc/vspackage-essentials.md)