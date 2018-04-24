---
title: "Licenses processor error-warning: &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.licx_generator_task"
ms.assetid: 85750198-7bd3-4936-b1eb-954dcc3ff573
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Licenses processor error/warning: &lt;reason&gt;
An error or warning message is displayed if a tool returns an error or a warning while processing a .licx file. As part of the build process, the project system transforms the Licenses.licx file (if present) into a binary file understood by the [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)] license manager. This transformation is done using in-process tools.  
  
 The most likely cause of such an error or warning is a bad .licx file. A .licx file can become corrupt if the file has been edited outside of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] or within [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] using a text editor.  
  
 These files are normally managed by the Windows Forms and Web Forms Designers.  
  
### To correct this error  
  
1.  Fix the format of the .licx file.  
  
     An error means that the binary file has not been generated, and that the build process will fail. Warnings are for informational purposes only.  
  
## See Also  
 [File Types and File Extensions in Visual Basic and Visual C#](http://msdn.microsoft.com/en-us/f793852c-da06-4d52-a826-65f635844772)