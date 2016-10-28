---
title: "Resources processor error-warning: &lt;reason&gt;"
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
  - "vs.tasklisterror.resx_generator_task"
ms.assetid: eb9a1bd0-7e63-4a2b-ad37-54f6e67d9b5a
caps.latest.revision: 7
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
# Resources processor error/warning: &lt;reason&gt;
An error or warning message is displayed if a tool returns an error or a warning while processing a .resx file. As part of the build process, the project system transforms each .resx file into a binary file understood by the [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)] resource manager. This transformation is done using in-process tools.  
  
 The most likely cause of such an error or warning is a bad .resx file. A .resx file can become corrupt if the file has been edited outside of Visual Studio or within Visual Studio using a text editor.  
  
 These files are normally managed by the Windows Forms and Web Forms Designers.  
  
### To correct this error  
  
1.  Fix the format of the .resx file.  
  
     An error means that the binary file has not been generated, and that the build process will fail. Warnings are for informational purposes only.  
  
## See Also  
 [Resources in .Resx File Format](https://msdn.microsoft.com/en-us/subscriptions/downloads/ekyft91f\(v=vs.71\).aspx)