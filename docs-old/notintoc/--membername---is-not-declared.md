---
title: "&#39;&lt;membername&gt;&#39; is not declared"
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
  - "vbc30816"
  - "bc30816"
helpviewer_keywords: 
  - "BC30816"
ms.assetid: d6704bed-bb76-47c6-ac28-09608d5e6912
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
# &#39;&lt;membername&gt;&#39; is not declared
'`<membername>`' is not declared. `Debug` object functionality is available in `System.Diagnostics.Debug` in the `System` assembly.  
  
 The specified member name could not be found.  
  
 **Error ID:** BC30816  
  
### To correct this error  
  
1.  Verify the spelling of the member.  
  
2.  Use an `Imports` statement or fully qualify members defined in other namespaces. For example, the `WriteLine` function is declared in the `System.Diagnostics.Debug` namespace.  
  
## See Also  
 [Debugging in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md)