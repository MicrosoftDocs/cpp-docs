---
title: "Solution &lt;name&gt; and its projects must be converted to the current formats."
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
  - "vs.querymigratesolution"
ms.assetid: 1ecb09ab-1283-4ba5-874c-f675905a3b7b
caps.latest.revision: 13
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
# Solution &lt;name&gt; and its projects must be converted to the current formats.
You have opened a solution that was created in a previous version of Visual Studio. Solution and project files must be converted to current formats before a solution can be opened and edited in the version of Visual Studio installed on your computer. You can choose whether or not to convert this solution now. The format conversions cannot be undone.  
  
> [!CAUTION]
>  If the solution is stored under source code control and you intend to check the converted solution back in, determine first whether other solutions share any of its projects. Do not check in a solution that includes converted projects that are still being used in other, unconverted solutions. This will break the dependencies within those solutions, and prevent them from opening or building properly.  
  
 You might wish to make back-up copies of your solution and project files before converting them.  
  
> [!NOTE]
>  As Visual Studio solutions are converted, the former solution files are marked with the file extension ".old" and saved in your top-level solution directory. As certain project types are converted, for example Visual C++ projects, the former project files are likewise marked with the file extension ".old" and saved in the project directory.  
  
 Read-only projects are not converted. These projects can be converted only by users who have permission to edit them. Before a project can be used within a converted solution, its project files must be converted to current formats. After a solution or any of its projects has been converted, you can no longer edit, build, or run the solution in previous versions of Visual Studio.  
  
### To respond to this message  
  
1.  Select **Yes** or **No**.  
  
    -   **Yes** - The solution file and files for its editable projects are converted to the formats used by the version of Visual Studio installed on your computer. If the converted solution is stored under source code control, it is checked out to your local drive and opened for editing.  
  
    -   **No** - The solution and its projects are not converted, are not checked out from source code control, and do not open.  
  
 If you are part of a development team, everyone who is working on a solution should have the same version of Visual Studio installed on their local machines. To ensure that solutions and projects remain accessible, communicate regularly with your team.  
  
## See Also  
 [Project Dependencies Dialog Box](http://msdn.microsoft.com/en-us/d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Compiling and Building](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)