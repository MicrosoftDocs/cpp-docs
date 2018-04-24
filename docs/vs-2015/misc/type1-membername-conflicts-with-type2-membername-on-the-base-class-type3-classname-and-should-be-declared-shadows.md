---
title: "&lt;type1&gt; &#39;&lt;membername&gt;&#39; conflicts with &lt;type2&gt; &#39;&lt;membername&gt;&#39; on the base class &lt;type3&gt; &#39;&lt;classname&gt;&#39; and should be declared &#39;Shadows&#39; | Microsoft Docs"
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
  - "bc40004"
  - "vbc40004"
helpviewer_keywords: 
  - "BC40004"
ms.assetid: 24d10f31-3b3d-448c-b928-fc937e1f4a92
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;type1&gt; &#39;&lt;membername&gt;&#39; conflicts with &lt;type2&gt; &#39;&lt;membername&gt;&#39; on the base class &lt;type3&gt; &#39;&lt;classname&gt;&#39; and should be declared &#39;Shadows&#39;
A programming element is declared with the same name as an element defined in the base class. In this situation, the element in this class should shadow the base class element.  
  
 This message is a warning. `Shadows` is assumed by default. For more information about hiding warnings or treating warnings as errors, please see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40004  
  
### To correct this error  
  
-   Add the `Shadows` keyword to the declaration, or change the name of the element being declared.  
  
## See Also  
 [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6)   
 [Shadowing in Visual Basic](http://msdn.microsoft.com/library/54bb4c25-12c4-4181-b4a0-93546053964e)