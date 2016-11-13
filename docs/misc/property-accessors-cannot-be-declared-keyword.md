---
title: "Property accessors cannot be declared &#39;&lt;keyword&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31099"
  - "bc31099"
helpviewer_keywords: 
  - "BC31099"
ms.assetid: d6f3b989-39b9-4c47-995a-bd83ec03d7b8
caps.latest.revision: 10
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
# Property accessors cannot be declared &#39;&lt;keyword&gt;&#39;
A `Get` or `Set` procedure declaration includes a keyword that is not valid on a property procedure.  
  
 The [Get Statement](/dotnet/visual-basic/language-reference/statements/get-statement) and [Set Statement](/dotnet/visual-basic/language-reference/statements/set-statement) allow only an access modifier (`Public`, `Protected`, `Friend`, `Protected Friend`, `Private`).  
  
 **Error ID:** BC31099  
  
### To correct this error  
  
-   Remove the invalid keyword from the `Get` or `Set` statement.  
  
## See Also  
 [Property Procedures](/dotnet/visual-basic/language-reference/procedures/property-procedures)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)