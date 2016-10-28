---
title: "&#39;prefix&#39; is an XML prefix and cannot be used as an expression"
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
  - "bc30114"
  - "vbc30114"
helpviewer_keywords: 
  - "BC30114"
ms.assetid: 5cb7c89e-c61b-483a-9369-5285b7cbcf45
caps.latest.revision: 4
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
# &#39;prefix&#39; is an XML prefix and cannot be used as an expression
'prefix' is an XML prefix and cannot be used as an expression. Use the GetXmlNamespace operator to create a namespace object.  
  
 The prefix for an XML namespace that is imported by using the `Imports` statement cannot be used outside an XML literal.  
  
 **Error ID:** BC30114  
  
### To correct this error  
  
-   If you have to refer to part of the imported XML namespace, use the `GetXmlNamespace` operator to retrieve an <xref:System.Xml.Linq.XNamespace> object. Use that object instead of the XML namespace prefix.  
  
-   If you are using the XML namespace prefix to qualify an XML literal, ensure that you are using appropriate syntax for the XML literal.  
  
## See Also  
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [Imports Statement (XML Namespace)](../Topic/Imports%20Statement%20\(XML%20Namespace\).md)   
 [GetXmlNamespace Operator](../Topic/GetXmlNamespace%20Operator%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)