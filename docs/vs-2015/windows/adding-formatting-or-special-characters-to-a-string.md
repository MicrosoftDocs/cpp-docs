---
title: "Adding Formatting or Special Characters to a String | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "special characters, adding to strings"
  - "ASCII characters, adding to strings"
  - "strings [C++], formatting"
  - "strings [C++], special characters"
ms.assetid: c40f394a-8b2c-4896-ab30-6922863ddbb5
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Formatting or Special Characters to a String
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Adding Formatting or Special Characters to a String](https://docs.microsoft.com/cpp/windows/adding-formatting-or-special-characters-to-a-string).  
  
  
To add formatting or special characters to a string  
  
1.  Open the string table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Select the string you want to modify.  
  
3.  In the [Properties Window](http://msdn.microsoft.com/library/e6e0fa4f-75c4-4a52-af15-281cd61876ca), add any of the standard escape sequences listed below to the text in the **Caption** box, and press **ENTER**.  
  
    |To get this|Type this|  
    |-----------------|---------------|  
    |New line|\n|  
    |Carriage return|\r|  
    |Tab|\t|  
    |Backslash (\\)|\\\|  
    |ASCII character|\ddd (octal notation)|  
    |Alert (bell)|\a|  
  
> [!NOTE]
>  The String editor does not support the full set of escaped ASCI characters. You can only use those listed above.  
  
 For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [String Editor](../mfc/string-editor.md)   









