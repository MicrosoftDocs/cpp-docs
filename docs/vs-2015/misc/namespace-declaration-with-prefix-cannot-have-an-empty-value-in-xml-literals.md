---
title: "Namespace declaration with prefix cannot have an empty value in XML literals | Microsoft Docs"
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
  - "bc31184"
  - "vbc31184"
helpviewer_keywords: 
  - "BC31184"
ms.assetid: dde656b4-df3b-4a2e-8871-4e14832ca778
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Namespace declaration with prefix cannot have an empty value in XML literals
An XML namespace declaration in an XML literal does not include a namespace value. For example, the following code will cause this error:  
  
```vb  
Dim book = <book xmlns:ns=""/>  
```  
  
 **Error ID:** BC31184  
  
### To correct this error  
  
-   Include a valid namespace in the XML namespace declaration, or remove the XML namespace declaration from the XML literal.  
  
     As an alternative, you can use the `Imports` statement to identify a namespace prefix for the empty namespace. For example:  
  
    ```vb  
    Imports <xmlns:ns="">  
    ```  
  
## See Also  
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)   
 [Imports Statement (XML Namespace)](http://msdn.microsoft.com/library/1f4d50a6-08c7-4c2e-8206-ccae35fcd1b4)