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
 [Accessing XML in Visual Basic](http://msdn.microsoft.com/library/c47f88b2-3cbc-4bb1-b4b9-be60f71ffc6a)   
 [Type Conversion Functions](http://msdn.microsoft.com/library/d9d8d165-f967-44ff-a6cd-598e4740a99e)   
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)