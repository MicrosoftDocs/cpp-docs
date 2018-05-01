---
title: "&#39;AddHandler&#39;, &#39;RemoveHandler&#39; and &#39;RaiseEvent&#39; method parameters cannot be declared &#39;&lt;modifier&gt;&#39; | Microsoft Docs"
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
  - "vbc31138"
  - "bc31138"
helpviewer_keywords: 
  - "BC31138"
ms.assetid: 6d8df92a-95fc-4a7d-ab1e-06d312155c55
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;AddHandler&#39;, &#39;RemoveHandler&#39; and &#39;RaiseEvent&#39; method parameters cannot be declared &#39;&lt;modifier&gt;&#39;
The parameters of the `AddHandler`, `RemoveHandler`, and `RaiseEvent` methods cannot be declared with the `Optional` or `ParamArray` modifiers.  
  
 The `Optional` or `ParamArray` modifiers are allowed only on parameters in `Declare`, `Function`, `Property`, and `Sub` declarations.  
  
 **Error ID:** BC31138  
  
### To correct this error  
  
-   Remove the `Optional` or `ParamArray` keyword from the parameter list.  
  
## See Also  
 [Event Statement](http://msdn.microsoft.com/library/306ff8ed-74dd-4b6a-bd2f-e91b17474042)   
 [AddHandler - delete](http://msdn.microsoft.com/en-us/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler - delete](http://msdn.microsoft.com/en-us/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent - delete](http://msdn.microsoft.com/en-us/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Optional](http://msdn.microsoft.com/library/4571ce88-a539-4115-b230-54eb277c6aa7)   
 [ParamArray](http://msdn.microsoft.com/library/a5f18789-92bd-488f-9c7e-cf3719963635)   
 [Events](http://msdn.microsoft.com/library/8fb0353a-e41b-4e23-b78f-da65db832f70)