---
title: "&#39;AddressOf&#39; expression cannot be converted to &#39;&lt;typename&gt;&#39; because type &#39;&lt;typename&gt;&#39; is declared &#39;MustInherit&#39; and cannot be created | Microsoft Docs"
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
  - "vbc30939"
  - "bc30939"
helpviewer_keywords: 
  - "BC30939"
ms.assetid: e8edef15-0df5-46d7-aba6-89e26a2aa506
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;AddressOf&#39; expression cannot be converted to &#39;&lt;typename&gt;&#39; because type &#39;&lt;typename&gt;&#39; is declared &#39;MustInherit&#39; and cannot be created
A statement attempts to convert an `AddressOf` expression to a type that can only be a base class and cannot be used to create an instance.  
  
 The `AddressOf` operator creates a procedure delegate instance that references a specific procedure.  
  
 **Error ID:** BC30939  
  
### To correct this error  
  
-   Assign the `AddressOf` expression to a specific delegate type.  
  
## See Also  
 [AddressOf Operator](http://msdn.microsoft.com/library/8105a59d-60d8-4ab5-b221-5899cdfacbf4)   
 [NOT IN BUILD: Delegates and the AddressOf Operator](http://msdn.microsoft.com/en-us/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Delegates](http://msdn.microsoft.com/library/410b60dc-5e60-4ec0-bfae-426755a2ee28)