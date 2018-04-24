---
title: "XML attribute &#39;attribute1&#39; must appear before XML attribute &#39;attribute2&#39; | Microsoft Docs"
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
  - "bc31157"
  - "vbc31157"
helpviewer_keywords: 
  - "BC31157"
ms.assetid: d8d8769e-533d-454e-b145-99955ce45cc5
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML attribute &#39;attribute1&#39; must appear before XML attribute &#39;attribute2&#39;
Attributes in an XML document literal are specified in an invalid order. Valid attribute order for an XML document literal is based on the XML 1.0 specification. For example, the `encoding` attribute of an XML document literal must immediately follow the `version` attribute.  
  
 **Error ID:** BC31157  
  
### To correct this error  
  
-   Update the attribute order for the XML document literal by using the guidelines specified in the XML 1.0 specification.  
  
## See Also  
 [XML Literals and the XML 1.0 Specification](http://msdn.microsoft.com/library/46f046e5-293c-41a3-b893-4e5f6e32e78a)   
 [XML Document Literal](http://msdn.microsoft.com/library/f7bbee56-0911-41de-b907-96f20450137b)   
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)