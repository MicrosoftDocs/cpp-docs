---
title: "The folder &#39;folder&#39; could not be added to the project. &lt;reason&gt;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_no_add_folder"
ms.assetid: 3f6a5aa7-17cc-4e78-93b7-96e0970e111e
caps.latest.revision: 7
ms.author: "mblome"
manager: "douge"
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
# The folder &#39;folder&#39; could not be added to the project. &lt;reason&gt;
A folder read from the .vbproj or .csproj file cannot be added to the project. Reasons include:  
  
-   Invalid name  
  
-   File within a path. For example, if you have a project-relative path of Folder1\Folder2\Folder3, but there is also a file with relative path Folder1\Folder2.  
  
-   Item already exists. This occurs when a folder is listed twice in the project file.  
  
 This error is most likely caused by editing the project file by hand.  
  
 **To correct this error**  
  
-   Remove the affected folder node from the project file.  
  
     Any folder, and any files below the folder, for which this diagnostic is displayed will not be added to the project.  
  
## See Also  
 [Project Files](../ide/project-files.md)   
 [NIB: Project Properties (Visual Studio)](assetId:///eb4c97ed-f667-4850-98d0-6e2a4d21bbca)