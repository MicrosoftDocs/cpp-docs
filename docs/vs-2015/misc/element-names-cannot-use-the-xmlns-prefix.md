---
title: "Element names cannot use the &#39;xmlns&#39; prefix | Microsoft Docs"
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
  - "vbc31189"
  - "bc31189"
helpviewer_keywords: 
  - "BC31189"
ms.assetid: 88716bb5-6766-4180-b2ed-1d1bee0ff7a6
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Element names cannot use the &#39;xmlns&#39; prefix
An XML element literal has been specified with an XML namespace prefix of `xmlns`. For example:  
  
```vb  
Dim elem = <xmlns:ElementName>  
```  
  
 The XML 1.0 specification identifies `xmlns` as a reserved word.  
  
 **Error ID:** BC31189  
  
### To correct this error  
  
-   Change the XML namespace prefix to a valid value, or remove the prefix.  
  
## See Also  
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [Imports Statement (XML Namespace)](http://msdn.microsoft.com/library/1f4d50a6-08c7-4c2e-8206-ccae35fcd1b4)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)