---
title: "&#39;Global&#39; not allowed in this context; identifier expected | Microsoft Docs"
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
  - "vbc36001"
  - "bc36001"
helpviewer_keywords: 
  - "BC36001"
ms.assetid: d515daa2-f53d-424c-81fd-e9c4b12f331b
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Global&#39; not allowed in this context; identifier expected
The `Global` keyword is used in a statement where it is not allowed.  
  
 The `Global` keyword allows you to access a namespace defined outside the namespace hierarchy in which your code is to be compiled. `Global` starts the qualification path at the outermost namespace level of the .NET Framework class library. For an illustration, see [Global - delete](http://msdn.microsoft.com/en-us/18c8ba14-40f6-4978-8096-6a5852324635).  
  
 Certain statements, such as `Imports` and `Namespace`, are independent of the namespace in which your code is to be compiled. They require a full qualification path, starting from the root-level namespace, such as <xref:System> or <xref:Microsoft.VisualBasic>. In such statements, the `Global` keyword is superfluous and is not allowed.  
  
 **Error ID:** BC36001  
  
### To correct this error  
  
-   Remove the `Global` keyword from the statement. It is not needed.  
  
## See Also  
 [Global - delete](http://msdn.microsoft.com/en-us/18c8ba14-40f6-4978-8096-6a5852324635)   
 [Imports Statement (.NET Namespace and Type)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)   
 [Namespace Statement](../Topic/Namespace%20Statement.md)   
 [References and the Imports Statement](../Topic/References%20and%20the%20Imports%20Statement%20\(Visual%20Basic\).md)