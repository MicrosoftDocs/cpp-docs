---
title: "Associating a Menu Command with an Accelerator Key"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ad2de43f-b20a-4c9f-bda8-0420179da48c
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Associating a Menu Command with an Accelerator Key
There are often times you want a menu command and a keyboard combination to issue the same program command. You do this by using the Menu editor to assign the same resource identifier to the menu command and to an entry in your application's accelerator table. You then edit the [Caption](../VS_visualcpp/Menu-Command-Properties.md) of the menu command to show the name of the accelerator key.  
  
### To associate a menu command with an accelerator key  
  
1.  In the **Menu** editor, select the menu command you want.  
  
2.  In the [Properties Window](../Topic/Properties%20Window.md), add the name of the accelerator key to the **Caption** property:  
  
    -   Following the menu caption, type the escape sequence for a tab (\t), so that all the menu's accelerator keys are left aligned.  
  
    -   Type the name of the modifier key (**CTRL**, **ALT**, or **SHIFT**) followed by a plus sign (**+**) and the name, letter, or symbol of the additional key.  
  
         For example, to assign **CTRL+O** to the **Open** command on the **File** menu, you modify the menu command's **Caption** so that it looks like this:  
  
        ```  
        &Open...\tCtrl+O   
        ```  
  
         The menu command in the Menu editor is updated to reflect the new caption as you type it.  
  
3.  [Create the accelerator-table entry](../VS_visualcpp/Adding-an-Entry-to-an-Accelerator-Table.md) in the **Accelerator** editor and assign it the same identifier as the menu command. Use a key combination that you think will be easy to remember.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Adding Commands to a Menu](../VS_visualcpp/Adding-Commands-to-a-Menu.md)   
 [Menu Editor](../VS_visualcpp/Menu-Editor.md)