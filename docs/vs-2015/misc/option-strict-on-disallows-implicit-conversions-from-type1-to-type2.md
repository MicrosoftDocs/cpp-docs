---
title: "Option Strict On disallows implicit conversions from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39; | Microsoft Docs"
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
  - "bc30512"
  - "vbc30512"
helpviewer_keywords: 
  - "BC30512"
ms.assetid: b9756d48-05fa-4027-8a80-b4a0ef92099d
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On disallows implicit conversions from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39;
You have tried to convert a type to another type that may not be able to contain the value, such as a `Long` to an `Integer`, while the type checking switch ([Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)) is set to `On`.  
  
 This type of conversion is called a *narrowing conversion*, and it is possible for it to fail at run time. For this reason, `Option Strict On` disallows implicit narrowing conversions.  
  
 **Error ID:** BC30512  
  
### To correct this error  
  
1.  Determine whether a conversion of any type exists from `<type1>` to `<type2>`. If both are [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] elementary types, or if both are instances of classes, you can usually make this determination by consulting the table in [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd).  
  
2.  If only a narrowing conversion exists from `<type1>` to `<type2>`, you should use explicit casting. The [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72) and [DirectCast Operator](http://msdn.microsoft.com/library/63e5a1d0-4d9e-4732-bf8f-e90c0c8784b8) keywords throw a run-time exception if the conversion fails. The [TryCast Operator](http://msdn.microsoft.com/library/d1ef5d47-fef4-491e-b014-1d910628f65c) keyword applies only to reference types and returns [Nothing](http://msdn.microsoft.com/library/06176e2d-bbf7-4a37-afaa-a86ad21ee99f) if the conversion fails.  
  
3.  If a narrowing conversion exists and your program can tolerate a run-time failure, or you are confident that a run-time failure is not possible, you can specify `Option Strict Off` at the beginning of your source code. But you should still enclose the conversion in a [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b) block to avoid unexpected results or early termination of your program.  
  
4.  If no conversion exists from `<type1>` to `<type2>`, you must re-evaluate your program logic. You might be able to write code that can assign values to `<type2>` corresponding to anticipated values of `<type1>`.  
  
5.  If no conversion exists from `<type1>` to `<type2>` and one of the types is a class or structure you have defined, you might be able to define a conversion operator from that type to or from the other type. For more information, see [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762).  
  
6.  In all cases and as a general guideline, you should avoid using narrowing conversions unless you can trap failures in a `Catch` block and deal with them effectively.  
  
## See Also  
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)   
 [DirectCast Operator](http://msdn.microsoft.com/library/63e5a1d0-4d9e-4732-bf8f-e90c0c8784b8)   
 [TryCast Operator](http://msdn.microsoft.com/library/d1ef5d47-fef4-491e-b014-1d910628f65c)   
 [Nothing](http://msdn.microsoft.com/library/06176e2d-bbf7-4a37-afaa-a86ad21ee99f)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)