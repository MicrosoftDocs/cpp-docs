---
title: "&#39;prefix&#39; is an XML prefix and cannot be used as an expression | Microsoft Docs"
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
  - "bc30114"
  - "vbc30114"
helpviewer_keywords: 
  - "BC30114"
ms.assetid: 5cb7c89e-c61b-483a-9369-5285b7cbcf45
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;prefix&#39; is an XML prefix and cannot be used as an expression
'prefix' is an XML prefix and cannot be used as an expression. Use the GetXmlNamespace operator to create a namespace object.  
  
 The prefix for an XML namespace that is imported by using the `Imports` statement cannot be used outside an XML literal.  
  
 **Error ID:** BC30114  
  
### To correct this error  
  
-   If you have to refer to part of the imported XML namespace, use the `GetXmlNamespace` operator to retrieve an <xref:System.Xml.Linq.XNamespace> object. Use that object instead of the XML namespace prefix.  
  
-   If you are using the XML namespace prefix to qualify an XML literal, ensure that you are using appropriate syntax for the XML literal.  
  
## See Also  
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [Imports Statement (XML Namespace)](http://msdn.microsoft.com/library/1f4d50a6-08c7-4c2e-8206-ccae35fcd1b4)   
 [GetXmlNamespace Operator](http://msdn.microsoft.com/library/d0d28cfd-0755-4896-ae0b-4981aa35517c)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)