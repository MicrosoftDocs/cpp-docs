---
title: "Moving a String from One Resource File to Another | Microsoft Docs"
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
  - "strings [C++], moving between files"
  - "resource script files, moving strings"
  - "string editing, moving strings between resources"
  - "String editor, moving strings between files"
ms.assetid: 94f8ee81-9b4c-4788-ba95-68c58db38029
caps.latest.revision: 12
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
# Moving a String from One Resource File to Another
### To move a string from one resource script file to another  
  
1.  Open the string tables in both .rc files. (For more information, see [Viewing Resources in a Resource Script File Outside of a Project](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).)  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Right-click the string you want to move and choose **Cut** from the shortcut menu.  
  
3.  Place the cursor in the target **String Editor** window.  
  
4.  In the .rc file to which you want to move the string, right-click and choose **Paste** from the shortcut menu.  
  
    > [!NOTE]
    >  If the **ID** or **value** of the moved string conflicts with an existing **ID** or **value** in the destination file, either the **ID** or the **value** of the moved string changes. If a string exists with the same **ID**, the **ID** of the moved string changes. If a string exists with the same **value**, the **value** of the moved string changes.  
  
 For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [String Editor](../mfc/string-editor.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Customizing window layouts](/visualstudio/ide/customizing-window-layouts-in-visual-studio)   

