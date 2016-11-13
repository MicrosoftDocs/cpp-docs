---
title: "Adding Files to an Empty Win32 Applications | Microsoft Docs"
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
  - "empty projects, adding files"
  - "projects [C++], adding items"
  - "blank projects"
  - "files [C++], adding to projects"
ms.assetid: 070098e8-0396-49fe-a697-3daa2f1be6de
caps.latest.revision: 11
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
# Adding Files to an Empty Win32 Applications
### To add your files to an empty Windows desktop application  
  
1.  Select the directory in **Solution Explorer**.  
  
2.  Right-click the directory name, click **Add** from the shortcut menu, and then click **Existing Item**.  
  
3.  In the **Add Existing Item dialog**, navigate to the files you want to add to your project.  
  
4.  Click **OK**.  
  
 To add files that are neither source, header, or resource files to your project, right-click the Solution node in Solution Explorer and add the files to the project in the same manner. A Miscellaneous folder will be created to hold the other files in your project.  
  
> [!NOTE]
>  Before building your project, you will need to specify build options for these files so that they are included correctly in your finished application. For more information, see [Specifying Project Settings with Property Pages](../ide/property-pages-visual-cpp.md) and [Building a C/C++ Program](../build/building-c-cpp-programs.md).  
  
## See Also  
 [Creating an Empty Windows Desktop Application](../windows/creating-an-empty-windows-desktop-application.md)   
 [Deploying Applications](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)