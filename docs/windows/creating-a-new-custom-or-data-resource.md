---
title: "Creating a New Custom or Data Resource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.binary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "custom resources [C++]"
  - "data resources [C++]"
  - "resources [Visual Studio], creating"
ms.assetid: 9918bf96-38fa-43a1-a384-572f95d84950
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
# Creating a New Custom or Data Resource
You can create a new custom or data resource by placing the resource in a separate file using normal resource script (.rc) file syntax, and then including that file by right-clicking your project in Solution Explorer and clicking **Resource Includes** on the shortcut menu.  
  
### To create a new custom or data resource  
  
1. [Create a .rc file](../windows/how-to-create-a-resource-script-file.md) that contains the custom or data resource.  
  
     You can type custom data in a .rc file as null-terminated quoted strings, or as integers in decimal, hexadecimal, or octal format.  
  
2.  In **Solution Explorer**, right-click your project's .rc file, then click **Resource Includes** on the shortcut menu.  
  
3.  In the **Compile-Time Directives** box, type a **#include** statement that gives the name of the file containing your custom resource. For example:  
  
 ```  
    #include mydata.rc  
 ```  
  
     Make sure the syntax and spelling of what you type are correct. The contents of the **Compile-Time Directives** box are inserted into the resource script file exactly as you typed them.  
  
4.  Click **OK** to record your changes.  
  
 Another way to create a custom resource is to import an external file as the custom resource. For more information, see [Importing and Exporting Resources](../windows/how-to-import-and-export-resources.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Binary Editor](../mfc/binary-editor.md)

