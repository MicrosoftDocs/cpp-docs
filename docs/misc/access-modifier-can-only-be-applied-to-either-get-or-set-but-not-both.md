---
title: "Access modifier can only be applied to either &#39;Get&#39; or Set&#39;, but not both | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31101"
  - "vbc31101"
helpviewer_keywords: 
  - "BC31101"
ms.assetid: c2a0580c-ff2f-4cc9-9113-6e540f906eec
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# Access modifier can only be applied to either &#39;Get&#39; or Set&#39;, but not both
A property declaration specifies access levels in the [Property Statement](/dotnet/articles/visual-basic/language-reference/statements/property-statement), the [Get Statement](/dotnet/articles/visual-basic/language-reference/statements/get-statement), and the [Set Statement](/dotnet/articles/visual-basic/language-reference/statements/set-statement).  
  
 You can always specify an access level for the property. In addition, you can specify a different access level for at most one of its property procedures (`Get` or `Set`), provided it is more restrictive than the property's access level. You cannot specify access levels for both of the property procedures.  
  
 **Error ID:** BC31101  
  
### To correct this error  
  
-   Remove the access modifier from either the `Get` statement or the `Set` statement.  
  
## See Also  
 [Property Procedures](/dotnet/articles/visual-basic/language-reference/procedures/property-procedures)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)