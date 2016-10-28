---
title: "&#39;&lt;procedurename1&gt;&#39; cannot override &#39;&lt;procedurename2&gt;&#39; because it is not accessible in this context"
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
  - "bc31417"
  - "vbc31417"
helpviewer_keywords: 
  - "BC31417"
ms.assetid: 1a36acbf-cead-43a0-b12f-f52f94d09124
caps.latest.revision: 9
ms.author: "billchi"
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
# &#39;&lt;procedurename1&gt;&#39; cannot override &#39;&lt;procedurename2&gt;&#39; because it is not accessible in this context
A procedure or property overrides a procedure or property with an access level that prevents access by the overriding procedure or property.  
  
 For example, if a procedure is declared as `Friend` in one assembly, it cannot be accessed outside that assembly. If a procedure in another assembly in the same project attempts to override the `Friend` procedure, it cannot access it to override it.  
  
 **Error ID:** BC31417  
  
### To correct this error  
  
-   Move the overriding procedure or property to the same assembly as the procedure or property it is to override.  
  
     -or-  
  
-   Remove the `Overrides` keyword.  
  
## See Also  
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Overriding Properties and Methods](assetId:///2167e8f5-1225-4b13-9ebd-02591ba90213)