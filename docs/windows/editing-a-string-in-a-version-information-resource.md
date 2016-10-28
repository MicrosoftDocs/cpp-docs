---
title: "Editing a String in a Version Information Resource"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.editors.version"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "version information resources"
  - "resources [Visual Studio], editing version information"
ms.assetid: d3a7d4e4-7d31-47c2-902c-f50b8404ba4f
caps.latest.revision: 11
ms.author: "mblome"
manager: "ghogen"
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
# Editing a String in a Version Information Resource
### To edit a string in a version information resource  
  
1.  Click the item once to select it, then again to begin editing it. Make the changes directly in the Version Information table or in the [Properties window](../Topic/Properties%20Window.md). The changes you make will be reflected in both places.  
  
     **Note** When editing the **FILEFLAGS** key in the Version Information editor, you'll notice you cannot set the **Debug**, **Private Build**, or **Special Build** properties (in the Properties window) for .rc files:  
  
    -   The Version Information editor sets the **Debug** property with a #ifdef in the resource script, based on the **_DEBUG** build flag.  
  
    -   If the **Private Build** key has a **Value** set in the Version Information table, the corresponding **Private Build** property (in the Properties window) for the **FILEFLAGS** key will be **True**. If the **Value** is empty, the property will be **False**. Likewise, the **Special Build** key (in the Version Information table) is tied to the **Special Build** property for the **FILEFLAGS** key.  
  
 You can sort the information sequence of the string block by clicking either the Key or the Value column headings. These headings automatically rearrange the information into the selected sequence.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Version Information Editor](../mfc/version-information-editor.md)   
 [Version Information (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)