---
title: "XML elements cannot be selected from type &#39;type&#39; | Microsoft Docs"
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
  - "vbc36807"
  - "bc36807"
helpviewer_keywords: 
  - "BC36807"
ms.assetid: 01c19899-2b44-41e9-a99c-35edfa0deaf1
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML elements cannot be selected from type &#39;type&#39;
An XML child element has been referenced for an object that is not of type <xref:System.Xml.Linq.XElement>, <xref:System.Xml.Linq.XDocument>, or `IEnumerable(Of XElement)`. For more information, see [XML Child Axis Property](http://msdn.microsoft.com/library/89a59d00-985e-4f5c-b59f-29b47bad11cb).  
  
```vb  
' Generates an error.  
Dim var = "sample text".<child>  
```  
  
 **Error ID:** BC36807  
  
### To correct this error  
  
-   Ensure that the object of which you are referencing an attribute is strongly typed as <xref:System.Xml.Linq.XElement>, <xref:System.Xml.Linq.XDocument>, or `IEnumerable(Of XElement)`. Following is an example:  
  
    ```vb  
    Dim elem As XElement = <root>  
                             <child />  
                           </root>  
    Dim var = elem.<child>  
    ```  
  
## See Also  
 [XML Child Axis Property](http://msdn.microsoft.com/library/89a59d00-985e-4f5c-b59f-29b47bad11cb)   
 [XML Axis Properties](http://msdn.microsoft.com/library/7e400e20-5d1e-4d22-a65c-9df79d5c1621)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)