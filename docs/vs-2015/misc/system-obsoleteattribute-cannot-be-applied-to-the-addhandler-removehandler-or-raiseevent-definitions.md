---
title: "&#39;System.ObsoleteAttribute&#39; cannot be applied to the &#39;AddHandler&#39;, &#39;RemoveHandler&#39;, or &#39;RaiseEvent&#39; definitions | Microsoft Docs"
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
  - "bc31142"
  - "vbc31142"
helpviewer_keywords: 
  - "BC31142"
ms.assetid: 2bddde2e-9ca0-4f72-8910-0789a6350af8
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;System.ObsoleteAttribute&#39; cannot be applied to the &#39;AddHandler&#39;, &#39;RemoveHandler&#39;, or &#39;RaiseEvent&#39; definitions
'System.ObsoleteAttribute' cannot be applied to the 'AddHandler', 'RemoveHandler', or 'RaiseEvent' definitions. If required, apply the attribute directly to the event.  
  
 A custom event applies the <xref:System.ObsoleteAttribute> to its `AddHandler`, `RemoveHandler`, or `RaiseEvent` procedure.  
  
 The <xref:System.ObsoleteAttribute> marks a programming element as no longer in use and informs users that the element is to be removed in future versions of the product.  
  
 It is not meaningful to have certain parts of a custom event still in use while others are no longer in use.  
  
 **Error ID:** BC31142  
  
### To correct this error  
  
-   Remove the <xref:System.ObsoleteAttribute> from the individual procedure declaration and apply it to the overall event declaration.  
  
## See Also  
 <xref:System.ObsoleteAttribute>   
 [Event Statement](http://msdn.microsoft.com/library/306ff8ed-74dd-4b6a-bd2f-e91b17474042)   
 [AddHandler Statement](http://msdn.microsoft.com/library/cfe69799-2a0f-42c0-a99e-09fed954da01)   
 [RemoveHandler Statement](http://msdn.microsoft.com/library/647cd825-e877-4910-b4f1-8d168beebe6a)   
 [RaiseEvent Statement](http://msdn.microsoft.com/library/f82e380a-1e6b-4047-bea8-c853f4d2c742)