---
title: "Type &#39;&lt;typename&gt;&#39; and partial type &#39;&lt;typename&gt;&#39; conflict in container &#39;&lt;containername&gt;&#39;, but are being merged because one of them is declared partial | Microsoft Docs"
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
  - "bc40046"
  - "vbc40046"
helpviewer_keywords: 
  - "BC40046"
ms.assetid: c243e70b-ecd5-49ef-a260-a7bb12a4a3b1
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type &#39;&lt;typename&gt;&#39; and partial type &#39;&lt;typename&gt;&#39; conflict in container &#39;&lt;containername&gt;&#39;, but are being merged because one of them is declared partial
A class or structure is appears in multiple definitions in the same container type, and more than one definition is not marked `Partial`.  
  
 You must use the [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448) keyword on at least one of the multiple definitions of a class or structure, but it is recommended that you use it on all the partial definitions.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40046  
  
### To correct this error  
  
-   Use the [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448) keyword on every partial definition of the class or structure.  
  
## See Also  
 [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448)