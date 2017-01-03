---
title: "Adding an Entry to an Accelerator Table | Microsoft Docs"
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
  - "accelerator tables [C++], adding entries"
  - "New Accelerator command"
ms.assetid: 559c2415-8323-4339-9447-6966665f8288
caps.latest.revision: 11
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
# Adding an Entry to an Accelerator Table
### To add an entry to an accelerator table  
  
1.  Open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Right-click within the accelerator table and choose **New Accelerator** from the shortcut menu, or click on the empty row entry at the bottom of the table.  
  
3.  Select an [ID](id-property.md) from the drop-down list in the ID box or type a new ID in the **ID** box.  
  
4.  Type the [Key](../windows/accelerator-key-property.md) you want to use as an accelerator or right-click and choose **Next Key Typed** from the shortcut menu to set a key combination (the **Next Key Typed** command is also available from the **Edit** menu).  
  
5.  Change the [Modifier](../windows/accelerator-modifier-property.md) and [Type](../windows/accelerator-type-property.md), if necessary.  
  
6.  Press **ENTER**.  
  
    > [!NOTE]
    >  Make sure all accelerators you define are unique. You can have several key combinations assigned to the same ID with no ill effect, for example, CTRL + P and F8 can both be assigned to ID_PRINT. However, having a key combination assigned to more than one ID will not work well, for example, CTRL + Z assigned to both ID_SPELL_CHECK and ID_THESAURUS.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Editing Accelerator Tables](../windows/editing-accelerator-tables.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)