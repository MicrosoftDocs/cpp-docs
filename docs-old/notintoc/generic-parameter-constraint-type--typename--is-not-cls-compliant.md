---
title: "Generic parameter constraint type &lt;typename&gt; is not CLS-compliant"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc40040"
  - "vbc40040"
helpviewer_keywords: 
  - "BC40040"
ms.assetid: c640dd59-56a9-43ed-b199-32a60f7b9b06
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Generic parameter constraint type &lt;typename&gt; is not CLS-compliant
A generic type is marked as `<CLSCompliant(True)>`, but a constraint on one of its type parameters specifies a type that is marked as `<CLSCompliant(False)>`, is not marked, or does not qualify because it is a noncompliant type.  
  
 For a type to be compliant with the [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md) (CLS), it must use only CLS-compliant types. This applies also to the constraints on the type parameters of a generic type.  
  
 The following [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] data types are not CLS-compliant:  
  
-   [SByte Data Type](../Topic/SByte%20Data%20Type%20\(Visual%20Basic\).md)  
  
-   [UInteger Data Type](../Topic/UInteger%20Data%20Type.md)  
  
-   [ULong Data Type](../Topic/ULong%20Data%20Type%20\(Visual%20Basic\).md)  
  
-   [UShort Data Type](../Topic/UShort%20Data%20Type%20\(Visual%20Basic\).md)  
  
 When you apply the \<xref:System.CLSCompliantAttribute> attribute to a programming element, you set the attribute's `isCompliant` parameter to either `True` or `False` to indicate compliance or noncompliance. There is no default for this parameter, and you must supply a value.  
  
 If you do not apply \<xref:System.CLSCompliantAttribute> to an element, it is considered to be noncompliant.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **Error ID:** BC40040  
  
### To correct this error  
  
-   If the generic type must take a type parameter constrained by this particular type, remove \<xref:System.CLSCompliantAttribute>. The type cannot be CLS-compliant.  
  
-   If the generic type must be CLS-compliant, change the type of this constraint to the closest CLS-compliant type. For example, in place of `UInteger` you might be able to use `Integer` if you do not need the value range above 2,147,483,647. If you do need the extended range, you can replace `UInteger` with `Long`.  
  
## See Also  
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [\<PAVE OVER> Writing CLS-Compliant Code](assetId:///4c705105-69a2-4e5e-b24e-0633bc32c7f3)