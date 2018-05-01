---
title: "Operands of type Object used for operator &#39;&lt;operatorsymbol&gt;&#39;; use the &#39;IsNot&#39; operator to test object identity | Microsoft Docs"
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
  - "vbc42032"
  - "bc42032"
helpviewer_keywords: 
  - "BC42032"
ms.assetid: f43b163b-f8f6-489d-ba9e-df6398ccc553
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operands of type Object used for operator &#39;&lt;operatorsymbol&gt;&#39;; use the &#39;IsNot&#39; operator to test object identity
An expression uses the `<>` operator with one or both operands of the [Object Data Type](http://msdn.microsoft.com/library/61ea4a7c-3b3d-48d4-adc4-eacfa91779b2).  
  
 You should use the `Is` or `IsNot` operator to determine whether two object references refer to the same object instance. See "Comparing Objects" in [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee).  
  
 When a variable or expression evaluates to `Object`, the compiler must perform *late binding*, which causes extra operations at run time. It also exposes your application to potential run-time errors. For example, if you assign a <xref:System.Windows.Forms.Form> to an `Object` variable and then try to use it with the `<>` operator, the runtime throws an <xref:System.InvalidCastException> because Visual Basic cannot convert a <xref:System.Windows.Forms.Form> object to a data type suitable for value comparison. Even if both operands evaluate to type <xref:System.Windows.Forms.Form>, the operation fails because `<>` is not defined for <xref:System.Windows.Forms.Form> operands.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42032  
  
### To correct this error  
  
-   If you want to determine whether two object references refer to the same object instance, use the `Is` or `IsNot` operator.  
  
## See Also  
 [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee)   
 [IsNot Operator](http://msdn.microsoft.com/library/8dd2bcdb-0166-48a2-9094-60dfb448f36c)   
 [How to: Determine Whether Two Objects Are Related](http://msdn.microsoft.com/library/da002e3f-6616-4bad-a229-f842d06652bb)   
 [How to: Determine Whether Two Objects Are Identical](http://msdn.microsoft.com/library/7829f817-0d1f-4749-a707-de0b95e0cf5c)