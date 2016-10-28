---
title: "Compiler Error CS1727"
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
  - "CS1727"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1727"
ms.assetid: 66478a58-e0f6-4886-b940-5473ad485a01
caps.latest.revision: 5
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
# Compiler Error CS1727
Cannot send error report automatically without authorization. Please visit '' to authorize sending error report.  
  
 The Web site listed in the error text explains how to enable automatic error reporting for [!INCLUDE[vsprvslong](../compilererrors1/includes/vsprvslong_md.md)] command line tools.  
  
## Example  
 The following sample generates CS1727.  
  
```  
// CS1727.cs  
// compile with: /errorreport:send  
// CS1727 expected  
class Test  
{  
    static void Main(){}  
}  
```  
  
## See Also  
 [/errorreport (C# Compiler Options)](../Topic/-errorreport%20\(C%23%20Compiler%20Options\).md)