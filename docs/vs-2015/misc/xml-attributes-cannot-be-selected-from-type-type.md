---
title: "XML attributes cannot be selected from type &#39;type&#39; | Microsoft Docs"
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
  - "bc36808"
  - "vbc36808"
helpviewer_keywords: 
  - "BC36808"
ms.assetid: 76b2605c-3d9b-4e56-ba3f-99c60c668290
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML attributes cannot be selected from type &#39;type&#39;
An XML attribute has been referenced for an object that is not of type <xref:System.Xml.Linq.XElement> or `IEnumerable(Of XElement)`. For more information, see [XML Attribute Axis Property](http://msdn.microsoft.com/library/7a4777e1-0618-4de9-9510-fb9ace2bf4db).  
  
```vb  
' Generates an error.  
Dim var = "sample text".@attr  
```  
  
 **Error ID:** BC36808  
  
### To correct this error  
  
-   Ensure that the object of which you are referencing an attribute is strongly typed as <xref:System.Xml.Linq.XElement> or `IEnumerable(Of XElement)`. Following is an example:  
  
    ```vb  
    Dim elem As XElement = <root attr="value"/>  
    Dim var = elem.@attr  
    ```  
  
## See Also  
 [XML Attribute Axis Property](http://msdn.microsoft.com/library/7a4777e1-0618-4de9-9510-fb9ace2bf4db)   
 [XML Axis Properties](http://msdn.microsoft.com/library/7e400e20-5d1e-4d22-a65c-9df79d5c1621)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)