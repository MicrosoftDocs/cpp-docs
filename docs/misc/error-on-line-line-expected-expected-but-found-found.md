---
title: "Error on line &lt;line&gt;. Expected &#39;expected&#39; but found &#39;found&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_lineerr"
ms.assetid: d78934c9-6d57-42b2-9968-2b0aa4bf05e2
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
# Error on line &lt;line&gt;. Expected &#39;expected&#39; but found &#39;found&#39;
This is a general XML parsing error when reading the project file. This error can occur for project files (.vbproj/.csproj) as well as per-user settings files (.vbproj.user/.csproj.user). More information will be provided by the project system in the parameters `expected` and `found`.  
  
 This error is most likely caused by editing the project (or user) file by hand.  
  
 **To correct this error**  
  
-   Edit the project file again and restore it to a satisfactory condition.  
  
     Depending on the severity of the error, you may not be able to open the project.  
  
## See Also  
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)