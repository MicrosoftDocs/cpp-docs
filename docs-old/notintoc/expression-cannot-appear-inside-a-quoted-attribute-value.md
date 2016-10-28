---
title: "Expression cannot appear inside a quoted attribute value"
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
  - "bc31155"
  - "vbc31155"
helpviewer_keywords: 
  - "BC31155"
ms.assetid: ed3e618e-de94-4e4e-afaf-72b11073fb1d
caps.latest.revision: 6
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
# Expression cannot appear inside a quoted attribute value
Expression cannot appear inside a quoted attribute value. Try removing quotes.  
  
 An embedded expression in an attribute value for an XML literal is contained within quotation marks.  
  
 **Error ID:** BC31155  
  
### To correct this error  
  
-   Remove the delimiting quotation marks from the attribute value. The following is an example:  
  
    ```vb#  
    ' Generates an error.  
    Dim elem = <outer attr="<%= value %>" />  
  
    ' Does not generate an error.  
    Dim elem = <outer attr=<%= value %> />  
    ```  
  
## See Also  
 [Embedded Expressions in XML](../Topic/Embedded%20Expressions%20in%20XML%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)