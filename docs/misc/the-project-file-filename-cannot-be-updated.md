---
title: "The project file &#39;&lt;filename&gt;&#39; cannot be updated | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.UpgradeErrors"
ms.assetid: ecd1e161-c51c-4aaa-ab80-8fc443bdad81
caps.latest.revision: 11
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
# The project file &#39;&lt;filename&gt;&#39; cannot be updated
You are attempting to open a project created in an earlier version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. The project must be updated to the current format, but it cannot be updated because either the specified project file (.vbproj) is marked as read-only or the file is under source control and is currently locked by another user.  
  
### To correct this error  
  
1.  In File Explorer, locate the specified project file.  
  
2.  On the **File** menu, choose **Properties**.  
  
3.  In the **Properties** dialog box, uncheck the **Read-only** attribute.  
  
 If the file is under source code control and is locked by another user, wait until the file is available and check it out locally.  
  
## See Also  
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)