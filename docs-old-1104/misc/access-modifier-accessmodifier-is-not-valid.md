---
title: "Access modifier &#39;&lt;accessmodifier&gt;&#39; is not valid | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31100"
  - "vbc31100"
helpviewer_keywords: 
  - "BC31100"
ms.assetid: 1cd71acc-0b54-4f64-8d61-75b272d293cb
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
# Access modifier &#39;&lt;accessmodifier&gt;&#39; is not valid
A [Get Statement](/dotnet/visual-basic/language-reference/statements/get-statement) or [Set Statement](/dotnet/visual-basic/language-reference/statements/set-statement) specifies an access level that is less restrictive than that specified for the containing property.  
  
 You can always specify an access level for the property. In addition, you can specify a different access level for at most one of its property procedures (`Get` or `Set`), provided it is more restrictive than the property's access level. For example, if the property is `Friend`, you can specify `Private` for a property procedure, but not `Public`. You cannot specify access levels for both of the property procedures.  
  
 **Error ID:** BC31100  
  
### To correct this error  
  
-   Make the access level for the property procedure more restrictive than for the property, or remove the access modifier entirely.  
  
-   Declare the less restrictive access level in the [Property Statement](/dotnet/visual-basic/language-reference/statements/property-statement), and declare the more restrictive access level in one of the property procedures.  
  
## See Also  
 [Property Procedures](/dotnet/visual-basic/language-reference/procedures/property-procedures)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)