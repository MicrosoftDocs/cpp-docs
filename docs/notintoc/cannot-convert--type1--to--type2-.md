---
title: "Cannot convert &#39;type1&#39; to &#39;type2&#39;"
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
  - "bc31193"
  - "vbc31193"
helpviewer_keywords: 
  - "BC31193"
ms.assetid: f25a9f5b-7741-4cd6-b85a-b19037ed8e49
caps.latest.revision: 5
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
# Cannot convert &#39;type1&#39; to &#39;type2&#39;
Cannot convert 'type1' to 'type2'. You can use the 'Value' property to get the string value of the first element of 'parentElement'.  
  
 An attempt has been made to implicitly cast an XML literal to a specific type. The XML literal cannot be implicitly cast to the specified type.  
  
 **Error ID:** BC31193  
  
### To correct this error  
  
-   Use the `Value` property of the XML literal to reference its value as a `String`. Use the `CType` function, another type conversion function, or the \<xref:System.Convert> class to cast the value as the specified type.  
  
## See Also  
 \<xref:System.Convert>   
 [Accessing XML in Visual Basic](../Topic/Accessing%20XML%20in%20Visual%20Basic.md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)