---
title: "Operands of type Object used for operator &#39;&lt;operatorsymbol&gt;&#39;; runtime errors could occur | Microsoft Docs"
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
  - "BC42019"
  - "vbc42019"
helpviewer_keywords: 
  - "BC42019"
ms.assetid: f61944ba-863b-4a82-aae4-249bda52ec8d
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operands of type Object used for operator &#39;&lt;operatorsymbol&gt;&#39;; runtime errors could occur
An expression uses an operator for which one or both operands are of the [Object Data Type](http://msdn.microsoft.com/library/61ea4a7c-3b3d-48d4-adc4-eacfa91779b2).  
  
 When a variable or expression evaluates to `Object`, the compiler must perform *late binding*, which causes extra operations at run time. It also exposes your application to potential run-time errors. For example, suppose you assign a <xref:System.Windows.Forms.Form> to an `Object` variable and then try to use it with the [/ Operator (Visual Basic)](http://msdn.microsoft.com/library/335e97f2-c434-439e-9064-76973a051101). If you do this, the runtime throws an <xref:System.InvalidCastException> because Visual Basic cannot convert a <xref:System.Windows.Forms.Form> object to a numeric value.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42019  
  
### To correct this error  
  
-   If possible, arrange the operands to evaluate to data types for which the operator is defined.  
  
## See Also  
 [Arithmetic Operators in Visual Basic](http://msdn.microsoft.com/library/325dac7a-ea4f-41d5-8b48-f6e904211569)