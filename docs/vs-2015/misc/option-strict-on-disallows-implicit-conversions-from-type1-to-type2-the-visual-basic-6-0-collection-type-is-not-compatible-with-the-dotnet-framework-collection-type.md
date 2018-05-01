---
title: "Option Strict On disallows implicit conversions from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39;; the Visual Basic 6.0 collection type is not compatible with the .NET Framework collection type | Microsoft Docs"
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
  - "vbc30753"
  - "bc30753"
helpviewer_keywords: 
  - "BC30753"
ms.assetid: 7e1bb22e-a507-483e-bfd6-f3a43e24a232
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On disallows implicit conversions from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39;; the Visual Basic 6.0 collection type is not compatible with the .NET Framework collection type
`Option Strict On` disallows implicit conversions from '`<type1>`' to '`<type2>`'; the Visual Basic 6.0 collection type is not compatible with the [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)] collection type.  
  
 The collection object that is used in Visual Basic 6.0 differs from the collection object that is used in [!INCLUDE[vs_current_long](../includes/vs-current-long-md.md)].  
  
 **Error ID:** BC30753  
  
### To correct this error  
  
-   Explicitly convert collection objects by using one of the type conversion keywords. The [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72) and [DirectCast Operator](http://msdn.microsoft.com/library/63e5a1d0-4d9e-4732-bf8f-e90c0c8784b8) keywords throw a run-time exception if the conversion fails. The [TryCast Operator](http://msdn.microsoft.com/library/d1ef5d47-fef4-491e-b014-1d910628f65c) keyword returns [Nothing](http://msdn.microsoft.com/library/06176e2d-bbf7-4a37-afaa-a86ad21ee99f) if the conversion fails.  
  
## See Also  
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)   
 [DirectCast Operator](http://msdn.microsoft.com/library/63e5a1d0-4d9e-4732-bf8f-e90c0c8784b8)   
 [TryCast Operator](http://msdn.microsoft.com/library/d1ef5d47-fef4-491e-b014-1d910628f65c)   
 [Nothing](http://msdn.microsoft.com/library/06176e2d-bbf7-4a37-afaa-a86ad21ee99f)   
 [NIB Collections in Visual Basic](http://msdn.microsoft.com/en-us/8b2b7845-2251-4573-8dd3-c9f9c0a66a21)