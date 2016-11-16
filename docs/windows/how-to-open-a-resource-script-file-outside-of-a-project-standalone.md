---
title: "How to: Open a Resource Script File Outside of a Project (Standalone) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.resource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], viewing"
  - "rc files, viewing resources"
  - ".rc files, viewing resources"
  - "resource script files, viewing resources"
ms.assetid: bc350c60-178d-4c5d-9a7e-6576b0c936e4
caps.latest.revision: 9
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
# How to: Open a Resource Script File Outside of a Project (Standalone)
You can view resources in an .rc file without having a project open. The .rc file will open in a document window as opposed to opening in the [Resource View](../windows/resource-view-window.md) window (as it does when the file is open inside a project).  
  
> [!NOTE]
>  This is an important distinction because some commands are only available when the file is opened standalone (outside of a project). For example, you can only save a file in a different format or as a different file name when the file is opened outside of a project (the **Save As** command is unavailable when a file is opened inside a project).  
  
### To open an .rc file outside a project  
  
1.  From the **File** menu, choose **Open**, then click **File**.  
  
2.  In the **Open File** dialog box, navigate to the resource script file you want to view, highlight the file, and click **Open**.  
  
    > [!NOTE]
    >  If you open the project first (**File**, **Open**, **Project**), some commands will not be available to you. Opening a file "standalone" means opening it without first loading the project.  
  
 To open and view the resource file in text format, see [Editing a Resource Script (.rc) File](../windows/how-to-open-a-resource-script-file-in-text-format.md).  
  
#### To open multiple .rc files outside a project  
  
1.  Open both resource files stand-alone. For example, open Source1.rc and Source2.rc.  
  
    1.  From the **File** menu, choose **Open**, then click **File**.  
  
    2.  In the **Open File** dialog box, navigate to the first resource script file you want to open (Source1.rc), highlight the file, and click **Open**.  
  
    3.  Repeat the previous step to open the second .rc file (Source2.rc).  
  
         The .rc files are now open in separate documents windows.  
  
2.  When both .rc files are open, tile the windows so you can view them simultaneously:  
  
    -   From the **Window** menu, choose **New Horizontal Tab Group** or **New Vertical Tab Group**.  
  
         \- or -  
  
    -   Right-click one of the .rc files and choose **New Horizontal Tab Group** or **New Vertical Tab Group** from the shortcut menu.  
  
> [!NOTE]
>  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
### Requirements  
 Win32  
  
## See Also  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)