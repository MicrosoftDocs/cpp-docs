---
title: "Version Information Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.version.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Version Information editor, about Version Information editor"
  - "editors, Version Information"
  - "resource editors, Version Information editor"
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
caps.latest.revision: 13
author: "mikeblome"
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
# Version Information Editor
Version information consists of company and product identification, a product release number, and copyright and trademark notification. With the Version Information editor, you create and maintain this data, which is stored in the version information resource. The version information resource is not required by an application, but it is a useful place to collect information that identifies the application. Version information is also used by setup APIs.  
  
 A version information resource has an upper block and one or more lower blocks: a single fixed-information block at the top and one or more version information blocks at the bottom (for other languages and/or character sets). The top block has both editable numeric boxes and selectable drop-down lists. The lower blocks have only editable text boxes.  
  
> [!NOTE]
>  The Windows standard is to have only one version resource, named VS_VERSION_INFO.  
  
 The Version Information editor enables you to:  
  
-   [Edit a string in a version information resource](../mfc/editing-a-string-in-a-version-information-resource.md)  
  
-   [Add version information for another language (new version info block)](../mfc/adding-version-information-for-another-language.md)  
  
-   [Delete a version information block](../mfc/deleting-a-version-information-block.md)  
  
-   [Access version information from within your program](../mfc/accessing-version-information-from-within-your-program.md)  
  
    > [!NOTE]
    >  While using the Version Information editor, in many instances you can right-click to display a shortcut menu of resource-specific commands. For example, if you click while pointing to a block header entry, the shortcut menu shows the New Version Block Info and Delete Version Block Info commands.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32  
  
## See Also  
 [Resource Editors](../mfc/resource-editors.md)   
 [Menus and Other Resources](http://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)

