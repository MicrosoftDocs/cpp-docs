---
title: "At least one folder is missing the &#39;attribute&#39; attribute"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_missing_fold_attrib"
ms.assetid: 3a0498a9-df61-47d8-a228-f88f4f138df8
caps.latest.revision: 7
author: "mikeblome"
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
# At least one folder is missing the &#39;attribute&#39; attribute
A folder node that has been read from the .vbproj or .csproj file is missing certain attributes that the project system requires. Currently the only such attribute is the **RelPath** attribute, which specifies where under the project folder the particular folder is located.  
  
 This error is most likely caused by editing the project file by hand.  
  
 **To correct this error**  
  
-   Remove the affected folder node from the project file. Also, if the folder is still on disk, you could switch to Show All Files mode (by clicking that button in the Solution Explorer toolbar), right-click the affected folder, and choose **Include In Project**.  
  
     Any folder for which an attribute is missing will not be added to the project.  
  
## See Also  
 [Project Files](../ide/project-files.md)   
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)