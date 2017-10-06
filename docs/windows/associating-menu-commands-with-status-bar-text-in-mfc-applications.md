---
title: "Associating Menu Commands with Status Bar Text in MFC Applications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["status bars, associating menu items", "menus, status bar text"]
ms.assetid: 757c0e02-bc97-493f-bccd-6cc6887ebc64
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Associating Menu Commands with Status Bar Text in MFC Applications
Your application can display descriptive text for each of the menu commands a user may select. You do this by assigning a text string to each menu command using the **Prompt** property in the Properties window. If you have a string in the [string table](../windows/string-editor.md) whose ID is the same as the command, an MFC application will automatically display this string resource in the status bar of the running application when a user hovers over a menu item.  
  
### To associate a menu command with a status bar text string  
  
1.  In the **Menu** editor, select the menu command.  
  
2.  In the [Properties Window](/visualstudio/ide/reference/properties-window), type the associated status bar text in the **Prompt** box.  
  

  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [Adding Commands to a Menu](../windows/adding-commands-to-a-menu.md)   
 [Menu Editor](../windows/menu-editor.md)