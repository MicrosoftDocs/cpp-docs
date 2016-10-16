---
title: "&#39;#Region&#39; statement must end with a matching &#39;#End Region&#39;"
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
  - "bc30681"
  - "vbc30681"
helpviewer_keywords: 
  - "BC30681"
ms.assetid: 05a0402b-da68-4ab8-b6d6-940379bc5973
caps.latest.revision: 10
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
# &#39;#Region&#39; statement must end with a matching &#39;#End Region&#39;
Use the `#Region` directive to specify a block of code that you can expand or collapse when using the outlining feature of the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] Code Editor. The start and end of `#Region` statements must be in the same code block.  
  
 **Error ID:** BC30681  
  
### To correct this error  
  
1.  Insert `#End Region` at the appropriate place in the code after the `#Region` statement.  
  
## See Also  
 [#Region Directive](../Topic/%23Region%20Directive.md)