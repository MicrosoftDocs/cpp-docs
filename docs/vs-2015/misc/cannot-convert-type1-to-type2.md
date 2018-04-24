---
title: "Cannot convert &#39;type1&#39; to &#39;type2&#39; | Microsoft Docs"
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
  - "bc31193"
  - "vbc31193"
helpviewer_keywords: 
  - "BC31193"
ms.assetid: f25a9f5b-7741-4cd6-b85a-b19037ed8e49
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Cannot convert &#39;type1&#39; to &#39;type2&#39;
Cannot convert 'type1' to 'type2'. You can use the 'Value' property to get the string value of the first element of 'parentElement'.  
  
 An attempt has been made to implicitly cast an XML literal to a specific type. The XML literal cannot be implicitly cast to the specified type.  
  
 **Error ID:** BC31193  
  
### To correct this error  
  
-   Use the `Value` property of the XML literal to reference its value as a `String`. Use the `CType` function, another type conversion function, or the <xref:System.Convert> class to cast the value as the specified type.  
  
## See Also  
 <xref:System.Convert>   
 [Accessing XML in Visual Basic](../Topic/Accessing%20XML%20in%20Visual%20Basic.md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)