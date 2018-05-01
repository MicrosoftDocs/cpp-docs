---
title: "Namespace declaration must start with &#39;xmlns&#39; | Microsoft Docs"
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
  - "bc31187"
  - "vbc31187"
helpviewer_keywords: 
  - "BC31187"
ms.assetid: 64c6a033-7cdc-48a0-bff0-bdd045cb13ad
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Namespace declaration must start with &#39;xmlns&#39;
An XML namespace has been specified without the required `xmlns` identifier. The `xmlns` identifier must contain only lowercase characters.  
  
 **Error ID:** BC31187  
  
### To correct this error  
  
-   Use the `xmlns` identifier when you declare an XML namespace. Following is an example:  
  
    ```vb  
    Imports <xmlns:ns="http://SampleNamespace">  
    ```  
  
## See Also  
 [Imports Statement (XML Namespace)](http://msdn.microsoft.com/library/1f4d50a6-08c7-4c2e-8206-ccae35fcd1b4)   
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)