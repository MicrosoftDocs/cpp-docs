---
title: "The dependency &#39;file&#39; cannot be found | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.supdepnotfound"
ms.assetid: a0e6e658-c723-40da-8275-fa212165bd7d
caps.latest.revision: 8
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
# The dependency &#39;file&#39; cannot be found
One of your project's references itself contains a reference (dependency) that could not be located.  
  
 When you enlist in a project under source code control, you may find that some dependencies may be unresolved on your computer. This is because the reference path property is a computer-specific property and is therefore not under source code control.  
  
### To correct this error  
  
1.  Locate the indicated assembly reference on disk and modify your Reference Path property.  
  
2.  If you cannot locate the assembly file on disk, you may have to reinstall [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] or any third-party custom controls if the assembly's dependencies cannot be located on disk. Also, if you are enlisting in a source-controlled project, you may have to install any third-party controls that are required by that project.  
  
 This situation will not prevent the project from building. However, there may be a TypeLoadException when running the application. Also, the affected dependency will not be reported to Deployment process.  
  
 You can see your project's references in Solution Explorer, in the **References** node.  
  
## See Also  
 [NIB: Reference Paths Dialog Box (Visual Basic)](http://msdn.microsoft.com/en-us/8e549b39-7256-456a-8fd7-089b23facf9c)