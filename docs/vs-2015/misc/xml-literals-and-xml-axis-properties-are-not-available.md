---
title: "XML literals and XML axis properties are not available | Microsoft Docs"
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
  - "bc31190"
  - "vbc31190"
helpviewer_keywords: 
  - "BC31190"
ms.assetid: cb861748-0ee4-40d3-a859-98ca6c39b4f4
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML literals and XML axis properties are not available
XML literals and XML axis properties are not available. Add references to System.Xml, System.Xml.Linq, and System.Core.  
  
 The code being compiled includes XML literals or XML axis properties, but it does not reference the assemblies that are needed to compile XML literals or XML axis properties.  
  
 **Error ID:** BC31190  
  
### To correct this error  
  
-   Add references to the System.Xml.dll, System.Xml.Linq.dll, and System.Core.dll assemblies.  
  
## See Also  
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML Axis Properties](http://msdn.microsoft.com/library/7e400e20-5d1e-4d22-a65c-9df79d5c1621)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)