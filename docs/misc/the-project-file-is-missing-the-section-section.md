---
title: "The project file is missing the &#39;section&#39; section | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_sectionerr"
ms.assetid: 516ab410-1b73-4539-9654-6323af6135b2
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
# The project file is missing the &#39;section&#39; section
The .vbproj or .csproj file is corrupt. One of the following sections is missing:  
  
-   Build  
  
-   Files  
  
-   VisualStudio  
  
-   VisualBasic or CSHARP  
  
 If the VisualStudio, VisualBasic, or CSHARP section is missing, the project will not load. If the Build or Files section is missing, the project file will load as follows:  
  
-   If Build is missing, all build settings and configuration information will be lost.  
  
-   If Files is missing, the project will have no files in it.  
  
 **To correct this error**  
  
-   Recreate your project.  
  
## See Also  
 [Project Files](../ide/project-files.md)   
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)