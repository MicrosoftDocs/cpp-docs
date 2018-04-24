---
title: "Operands of type Object used in expressions for &#39;Select&#39;, &#39;Case&#39; statements; runtime errors could occur | Microsoft Docs"
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
  - "vbc42036"
  - "bc42036"
helpviewer_keywords: 
  - "BC42036"
ms.assetid: f11e9c9f-aa66-4eb1-8f49-abf713bef885
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operands of type Object used in expressions for &#39;Select&#39;, &#39;Case&#39; statements; runtime errors could occur
A `Select`...`Case` construction uses one or more expressions of the [Object Data Type](http://msdn.microsoft.com/library/61ea4a7c-3b3d-48d4-adc4-eacfa91779b2).  
  
 When a variable or expression evaluates to `Object`, the compiler must perform *late binding*, which causes extra operations at run time. It also exposes your application to potential run-time errors. For example, if you assign a <xref:System.Windows.Forms.Form> to an `Object` variable and then try to compare it with a number, the runtime throws an <xref:System.InvalidCastException> because Visual Basic cannot convert a <xref:System.Windows.Forms.Form> object to a numeric value.  
  
 The expressions in a `Select`...`Case` construction should all be of the same data type or of closely related data types that can be converted to each other. This is because each `Case` statement compares at least one value against the test expression on which the `Select`...`Case` construction is based.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42036  
  
### To correct this error  
  
-   If possible, arrange all the expressions to evaluate to data types for which comparison operators are defined.  
  
## See Also  
 [Select...Case Statement](http://msdn.microsoft.com/library/68877b65-5419-4bf0-a465-20cd0e4c7d44)   
 [Arithmetic Operators in Visual Basic](http://msdn.microsoft.com/library/325dac7a-ea4f-41d5-8b48-f6e904211569)   
 [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee)