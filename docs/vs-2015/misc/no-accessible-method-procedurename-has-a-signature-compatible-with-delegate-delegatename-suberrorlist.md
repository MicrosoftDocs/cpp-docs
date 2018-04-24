---
title: "No accessible method &#39;&lt;procedurename&gt;&#39; has a  signature compatible with delegate &#39;&lt;delegatename&gt;&#39;:&lt;suberrorlist&gt; | Microsoft Docs"
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
  - "bc30950"
  - "vbc30950"
helpviewer_keywords: 
  - "BC30950"
ms.assetid: c1938099-2c03-491e-b599-d0c43bf94baf
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# No accessible method &#39;&lt;procedurename&gt;&#39; has a  signature compatible with delegate &#39;&lt;delegatename&gt;&#39;:&lt;suberrorlist&gt;
An assignment statement assigns the address of a procedure to a delegate variable, but the compiler cannot find a version of the procedure with a matching signature.  
  
 When code uses the address of a procedure, the compiler tries to find a version of that procedure with a parameter list that matches that of the delegate. If the procedure is defined in several overloaded versions, the compiler tries to find a single version with a matching signature. For more information, see [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md).  
  
 If the compiler cannot find any version of the procedure with a matching signature, it generates this error. This can happen, for example, if either the procedure or the delegate is generic and a type argument is passed to it that gives it a signature that does not match the other signature.  
  
 **Error ID:** BC30950  
  
### To correct this error  
  
1.  Redefine either the procedure or the delegate so that they have matching parameter lists.  
  
     -or-  
  
     Define a new delegate with a parameter list matching that of the procedure, or define a new procedure with a parameter list matching that of the delegate.  
  
2.  If either the procedure or the delegate is generic, then pass it a type argument that causes its signature to match the other signature.  
  
## See Also  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [NOT IN BUILD: Delegates and the AddressOf Operator](http://msdn.microsoft.com/en-us/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)