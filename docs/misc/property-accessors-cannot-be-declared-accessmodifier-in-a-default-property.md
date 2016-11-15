---
title: "Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;Default&#39; property | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31107"
  - "vbc31107"
helpviewer_keywords: 
  - "BC31107"
ms.assetid: 25657b33-df85-4535-8043-69795c987175
caps.latest.revision: 9
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
# Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;Default&#39; property
A [Get Statement](/dotnet/articles/visual-basic/language-reference/statements/get-statement) or [Set Statement](/dotnet/articles/visual-basic/language-reference/statements/set-statement) in a default property includes the `Private` keyword.  
  
 A default property cannot be `Private`, and neither can its individual property procedures (`Get` or `Set`).  
  
 **Error ID:** BC31107  
  
### To correct this error  
  
-   Remove the `Private` keyword from the `Get` or `Set` statement, or remove `Default` from the [Property Statement](/dotnet/articles/visual-basic/language-reference/statements/property-statement).  
  
## See Also  
 [Property Procedures](/dotnet/articles/visual-basic/language-reference/procedures/property-procedures)   
 [How to: Declare a Property with Mixed Access Levels](http://msdn.microsoft.com/Library/fdbb2d97-279a-4956-b26c-cbdfbc34915a)   
 [How to: Declare and Call a Default Property in Visual Basic](http://msdn.microsoft.com/Library/68b4026e-09ef-4613-808e-f6287494ff63)