---
title: "Generic parameter constraint type &lt;typename&gt; is not CLS-compliant | Microsoft Docs"
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
  - "bc40040"
  - "vbc40040"
helpviewer_keywords: 
  - "BC40040"
ms.assetid: c640dd59-56a9-43ed-b199-32a60f7b9b06
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Generic parameter constraint type &lt;typename&gt; is not CLS-compliant
A generic type is marked as `<CLSCompliant(True)>`, but a constraint on one of its type parameters specifies a type that is marked as `<CLSCompliant(False)>`, is not marked, or does not qualify because it is a noncompliant type.  
  
 For a type to be compliant with the [Language Independence and Language-Independent Components](http://msdn.microsoft.com/library/4f0b77d0-4844-464f-af73-6e06bedeafc6) (CLS), it must use only CLS-compliant types. This applies also to the constraints on the type parameters of a generic type.  
  
 The following [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] data types are not CLS-compliant:  
  
-   [SByte Data Type](http://msdn.microsoft.com/library/5c38374a-18a1-4cc2-b493-299e3dcaa60f)  
  
-   [UInteger Data Type](http://msdn.microsoft.com/library/db7ddd34-4f23-46f5-84dd-8b0f83bb8729)  
  
-   [ULong Data Type](http://msdn.microsoft.com/library/017e0702-774e-44ae-bedc-786b424ca84e)  
  
-   [UShort Data Type](http://msdn.microsoft.com/library/138db892-665d-4ba8-9cae-d8d91c4a8f39)  
  
 When you apply the <xref:System.CLSCompliantAttribute> attribute to a programming element, you set the attribute's `isCompliant` parameter to either `True` or `False` to indicate compliance or noncompliance. There is no default for this parameter, and you must supply a value.  
  
 If you do not apply <xref:System.CLSCompliantAttribute> to an element, it is considered to be noncompliant.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40040  
  
### To correct this error  
  
-   If the generic type must take a type parameter constrained by this particular type, remove <xref:System.CLSCompliantAttribute>. The type cannot be CLS-compliant.  
  
-   If the generic type must be CLS-compliant, change the type of this constraint to the closest CLS-compliant type. For example, in place of `UInteger` you might be able to use `Integer` if you do not need the value range above 2,147,483,647. If you do need the extended range, you can replace `UInteger` with `Long`.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [\<PAVE OVER> Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3)