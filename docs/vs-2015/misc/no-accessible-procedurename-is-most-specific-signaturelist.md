---
title: "No accessible &#39;&lt;procedurename&gt;&#39; is most specific: &lt;signaturelist&gt; | Microsoft Docs"
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
  - "vbc30794"
  - "BC30794"
helpviewer_keywords: 
  - "BC30794"
ms.assetid: 51d54cbb-b530-4661-9952-5ccc17e4220b
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# No accessible &#39;&lt;procedurename&gt;&#39; is most specific: &lt;signaturelist&gt;
An assignment statement assigns the address of an overloaded procedure to a delegate variable, but the compiler cannot resolve among the overloaded versions.  
  
 When code uses the address of a procedure that is defined in several overloaded versions, the compiler must decide which of the overloads to use. It tries to find a single version with a parameter list that matches the delegate parameter list. For more information, see [Overload Resolution](http://msdn.microsoft.com/library/766115d1-4352-45fb-859f-6063e0de0ec0).  
  
 If the compiler finds more than one version of the procedure with a matching signature, it generates this error. This can happen, for example, if one of the overloads is generic and a type argument is passed to it that gives it a signature identical to that of another overload.  
  
 **Error ID:** BC30794  
  
### To correct this error  
  
-   If the conflict is caused by a generic overload having the same signature as another overload, change the type argument passed to that generic overload.  
  
## See Also  
 [AddressOf Operator](http://msdn.microsoft.com/library/8105a59d-60d8-4ab5-b221-5899cdfacbf4)   
 [Delegate Statement](http://msdn.microsoft.com/library/f799c518-0817-40cc-ad0b-4da846fdba57)   
 [NOT IN BUILD: Delegates and the AddressOf Operator](http://msdn.microsoft.com/en-us/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Overload Resolution](http://msdn.microsoft.com/library/766115d1-4352-45fb-859f-6063e0de0ec0)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)