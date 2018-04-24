---
title: "&#39;Custom&#39; modifier is not valid on events declared in interfaces | Microsoft Docs"
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
  - "bc31121"
  - "vbc31121"
helpviewer_keywords: 
  - "BC31121"
ms.assetid: b5687034-a2b2-4961-88b7-0ba73023573e
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Custom&#39; modifier is not valid on events declared in interfaces
A custom event cannot be declared in an interface because a custom event must provide an implementation of its `AddHandler`, `RemoverHandler`, and `RaiseEvent` methods.  
  
 The `Custom` keyword can be used in a derived class that implements the event.  
  
 **Error ID:** BC31121  
  
### To correct this error  
  
-   Remove the `Custom` keyword from the event declaration in the interface.  
  
## Example  
 This example shows how to implement an event declared in an interface as a custom event.  
  
 [!code-vb[VbVbalrEventError#3](../snippets/visualbasic/VS_Snippets_VBCSharp/VbVbalrEventError/VB/VbVbalrEventError.vb#3)]  
  
## See Also  
 [Custom - delete](http://msdn.microsoft.com/en-us/dc62be07-c896-4866-a533-982a661d143f)   
 [Event Statement](http://msdn.microsoft.com/library/306ff8ed-74dd-4b6a-bd2f-e91b17474042)   
 [Delegate Statement](http://msdn.microsoft.com/library/f799c518-0817-40cc-ad0b-4da846fdba57)   
 [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c)   
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)   
 [Events](http://msdn.microsoft.com/library/8fb0353a-e41b-4e23-b78f-da65db832f70)