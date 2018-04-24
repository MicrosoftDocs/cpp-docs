---
title: "Overload resolution failed because no accessible &#39;&lt;method&gt;&#39; is most specific for these arguments:&lt;error&gt; | Microsoft Docs"
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
  - "bc30521"
  - "vbc30521"
helpviewer_keywords: 
  - "resolution failure"
  - "BC30521"
  - "overload resolution failed"
ms.assetid: b8b41fa0-a64b-4e74-8443-be3afd2b6f11
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Overload resolution failed because no accessible &#39;&lt;method&gt;&#39; is most specific for these arguments:&lt;error&gt;
You have made a call to an overloaded method, but the compiler has found two or more overloads with parameter lists to which your argument list can be converted, and it cannot select among them.  
  
 The compiler attempts to match the data types in the calling argument list and the overload parameter list as closely as possible. It requires a widening conversion from every one of your arguments to its corresponding parameter, whether the type checking switch ([Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)) is `On` or `Off`.  
  
 If the compiler finds more than one overload satisfying the widening requirement, it then looks for the overload that is most specific for the argument data types, that is, that calls for the least amount of widening. It generates this error message when one overload is more specific for one argument's data type while another overload is more specific for another argument's data type. For more information and an example, see [Overload Resolution](http://msdn.microsoft.com/library/766115d1-4352-45fb-859f-6063e0de0ec0).  
  
 **Error ID:** BC30521  
  
### To correct this error  
  
1.  Review all the overloads for the method and determine which one you want to call.  
  
2.  In your calling statement, make the data types of the arguments match the data types of the parameters defined for the desired overload. You might have to use the [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72) to convert one or more data types to the defined types.  
  
## See Also  
 [Procedure Overloading](http://msdn.microsoft.com/library/fbc7fb18-e3b2-48b6-b554-64c00ed09d2a)   
 [Considerations in Overloading Procedures](http://msdn.microsoft.com/library/a2001248-10d0-42c5-b0ce-eeedc987319f)   
 [Overload Resolution](http://msdn.microsoft.com/library/766115d1-4352-45fb-859f-6063e0de0ec0)   
 [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)   
 [Overloaded Properties and Methods](http://msdn.microsoft.com/library/b686fb97-e7d7-4001-afaa-6650cba08f0d)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)