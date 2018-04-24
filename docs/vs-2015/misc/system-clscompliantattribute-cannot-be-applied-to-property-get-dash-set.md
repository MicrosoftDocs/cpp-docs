---
title: "System.CLSCompliantAttribute cannot be applied to property &#39;Get&#39;-&#39;Set&#39; | Microsoft Docs"
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
  - "vbc40043"
  - "BC40043"
helpviewer_keywords: 
  - "BC40043"
ms.assetid: 2ff45c09-32be-4ca9-b42a-63ce2536db7d
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# System.CLSCompliantAttribute cannot be applied to property &#39;Get&#39;/&#39;Set&#39;
A property definition applies the <xref:System.CLSCompliantAttribute> attribute to its `Get` or `Set` statement.  
  
 For a property to be compliant with the [Language Independence and Language-Independent Components](http://msdn.microsoft.com/library/4f0b77d0-4844-464f-af73-6e06bedeafc6) (CLS), the entire property must be marked as `<CLSCompliant(True)>`. You must apply <xref:System.CLSCompliantAttribute> to the [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38), not to either the `Get` or the `Set` statement.  
  
 When you apply <xref:System.CLSCompliantAttribute> to a programming element, you set the attribute's `isCompliant` parameter to either `True` or `False` to indicate compliance or noncompliance. There is no default for this parameter, and you must supply a value.  
  
 If you do not apply <xref:System.CLSCompliantAttribute> to an element, it is considered to be noncompliant.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40043  
  
### To correct this error  
  
-   Remove <xref:System.CLSCompliantAttribute> from the `Get` or `Set` statement.  
  
-   If the property should be CLS-compliant, mark the `Property` statement as `<CLSCompliant(True)>`.  
  
## See Also  
 [\<PAVE OVER> Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)   
 [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd)