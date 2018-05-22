---
title: "Delegate type &#39;&lt;delegatename&gt;&#39; of event &#39;&lt;eventname&gt;&#39; is not CLS-compliant | Microsoft Docs"
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
  - "bc40050"
  - "vbc40050"
helpviewer_keywords: 
  - "BC40050"
ms.assetid: 92f5be26-9a82-46d4-bf97-005f2c7ca424
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Delegate type &#39;&lt;delegatename&gt;&#39; of event &#39;&lt;eventname&gt;&#39; is not CLS-compliant
An [Event Statement](http://msdn.microsoft.com/library/306ff8ed-74dd-4b6a-bd2f-e91b17474042) uses a delegate to specify its signature, but the [Delegate Statement](http://msdn.microsoft.com/library/f799c518-0817-40cc-ad0b-4da846fdba57) is marked as `<CLSCompliant(False)>` or is not marked.  
  
 When you apply the <xref:System.CLSCompliantAttribute> attribute to a programming element, you set the attribute's `isCompliant` parameter to either `True` or `False` to indicate compliance or noncompliance. There is no default for this parameter, and you must supply a value.  
  
 If you do not apply <xref:System.CLSCompliantAttribute> to an element, it is considered to be noncompliant.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40050  
  
### To correct this error  
  
-   If you require CLS compliance and have control over the definition of the delegate, apply <xref:System.CLSCompliantAttribute> to its declaration to mark it as `<CLSCompliant(True)>`.  
  
-   If you do not have control over the definition of the delegate or cannot mark it as compliant, remove the <xref:System.CLSCompliantAttribute> from the `Event` statement or mark it as `<CLSCompliant(False)>`.  
  
## See Also  
 [\<PAVE OVER> Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3)