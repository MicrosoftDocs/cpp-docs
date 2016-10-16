---
title: "String Editor"
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
  - "vc.editors.string.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "String editor"
  - "string tables"
  - "string tables, String editor"
  - "string editing"
  - "string editing, string tables"
  - "resource editors, String editor"
  - "strings [C++], editing"
ms.assetid: f71ab8de-3068-4e29-8e28-5a33d18dd416
caps.latest.revision: 13
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
# String Editor
A string table is a Windows resource that contains a list of IDs, values, and captions for all the strings of your application. For example, the status-bar prompts are located in the string table.  
  
 While developing an application, you can have several string tables — one for each language or condition. However, an executable module has only one string table. A running application can reference several string tables if you put the tables into different DLLs.  
  
 String tables make it easy to localize your application into different languages. If all strings are in a string table, you can localize the application by translating the strings (and other resources) without changing source code. This is usually more desirable than manually finding and replacing various strings in source files.  
  
 Using the String editor, you can:  
  
-   [Search for one or more strings](../mfc/finding-a-string.md).  
  
-   Quickly [insert new entries](../mfc/adding-or-deleting-a-string.md) into the string table.  
  
-   [Move a string from one resource file to another](../mfc/moving-a-string-from-one-resource-file-to-another.md)  
  
-   [Use in-place editing for the ID, Value, and Caption properties](../mfc/changing-the-properties-of-a-string.md) and view changes immediately.  
  
-   [Change the caption property of multiple strings](../mfc/changing-the-caption-property-of-multiple-strings.md)  
  
-   [Add formatting or special characters to a string](../mfc/adding-formatting-or-special-characters-to-a-string.md)  
  
    > [!NOTE]
    >  Windows does not allow the creation of empty string tables. If you create a string table with no entries, it is deleted automatically when you save the resource file.  
  
 For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [Resource Editors](../mfc/resource-editors.md)   
 [Strings](http://msdn.microsoft.com/library/windows/desktop/ms646979.aspx)   
 [About Strings](http://msdn.microsoft.com/library/windows/desktop/ms647465.aspx)