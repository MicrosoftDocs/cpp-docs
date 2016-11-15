---
title: "The referenced component &#39;component&#39; could not be found. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.referencenotfound"
ms.assetid: 35491b4d-e3e4-4e7c-8ac1-3adb09c1ef58
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
# The referenced component &#39;component&#39; could not be found. &lt;reason&gt;
The project system could not resolve a particular reference. Double-clicking this Task List item will set focus to Solution Explorer and select the reference that could not be resolved.  
  
 Edit the [ReferencePaths](http://msdn.microsoft.com/en-us/8e549b39-7256-456a-8fd7-089b23facf9c) property such that appropriate directories are included in the path.  
  
 This error can occur if you move a project to another computer. The `ReferencePath` property is stored as an absolute path. If reference R1 resides in c:\R\R1.dll on computer A, the .vbproj.user or .csproj.user file will store c:\R as part of the `ReferencePath` property. If, however, on computer B, R1 resides in d:\R\R1.dll, the project system will not be able to find R1 because d:\R is not on the reference path.  
  
 A similar scenario is the source-code-control scenario. If you enlist in a project, the .vbproj.user (or .csproj.user) file is not copied to your computer because it is not stored in source control. Therefore, the initial value of the `ReferencePath` property will be blank, and any references that rely on `ReferencePath` for resolution will be unresolved. For more information, see "Managing Dependencies" in *Team Development with Visual Studio .NET and Visual SourceSafe*.  
  
 This error can also be caused if a referenced project is not in the current solution.  
  
 When this error occurrs, the project may not build.  
  
 For more information on resolving assembly references, see [Troubleshooting Broken References](/visualstudio/ide/troubleshooting-broken-references).  
  
## See Also  
 [Managing references in a project](/visualstudio/ide/managing-references-in-a-project)