---
title: "Expression cannot appear inside a quoted attribute value | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31155"
  - "vbc31155"
helpviewer_keywords: 
  - "BC31155"
ms.assetid: ed3e618e-de94-4e4e-afaf-72b11073fb1d
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Expression cannot appear inside a quoted attribute value
Expression cannot appear inside a quoted attribute value. Try removing quotes.  
  
 An embedded expression in an attribute value for an XML literal is contained within quotation marks.  
  
 **Error ID:** BC31155  
  
### To correct this error  
  
-   Remove the delimiting quotation marks from the attribute value. The following is an example:  
  
    ```vb  
    ' Generates an error.  
    Dim elem = <outer attr="<%= value %>" />  
  
    ' Does not generate an error.  
    Dim elem = <outer attr=<%= value %> />  
    ```  
  
## See Also  
 [Embedded Expressions in XML](http://msdn.microsoft.com/library/bf2eb779-b751-4b7c-854f-9f2161482352)   
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)