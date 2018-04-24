---
title: "Root namespace &lt;namespacename&gt; is not CLS-compliant | Microsoft Docs"
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
  - "bc40038"
  - "vbc40038"
helpviewer_keywords: 
  - "BC40038"
ms.assetid: ec850295-b2fe-4f19-b808-d22fe0aaa32d
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Root namespace &lt;namespacename&gt; is not CLS-compliant
An assembly is marked as `<CLSCompliant(True)>`, but the root namespace name begins with an underscore (`_`).  
  
 A programming element can contain one or more underscores, but to be compliant with the [Language Independence and Language-Independent Components](http://msdn.microsoft.com/library/4f0b77d0-4844-464f-af73-6e06bedeafc6) (CLS), it must not begin with an underscore. See [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66).  
  
 When you apply the <xref:System.CLSCompliantAttribute> to a programming element, you set the attribute's `isCompliant` parameter to either `True` or `False` to indicate compliance or noncompliance. There is no default for this parameter, and you must supply a value.  
  
 If you do not apply the <xref:System.CLSCompliantAttribute> to an element, it is considered to be noncompliant.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40038  
  
### To correct this error  
  
-   If you require CLS compliance, change the root namespace name so that it does not begin with an underscore.  
  
-   If you require that the root namespace name remain unchanged, then remove the <xref:System.CLSCompliantAttribute> from the assembly or mark it as `<CLSCompliant(False)>`.  
  
## See Also  
 [Namespace Statement](http://msdn.microsoft.com/library/a31fbd95-9ace-4c3d-bbb1-51222a2272b2)   
 [Namespaces in Visual Basic](http://msdn.microsoft.com/library/cffac744-ab8c-4f1f-ba50-732c22ab4b88)   
 [/rootnamespace](http://msdn.microsoft.com/library/e9245edf-6bef-420d-a7c7-324117752783)   
 [NIB: How to: Change the Namespace for an Application (Visual Basic)](http://msdn.microsoft.com/en-us/029d85c0-e173-4f7a-afba-a29f3aaf6ebf)   
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)   
 [Visual Basic Naming Conventions](http://msdn.microsoft.com/library/164949a4-2a7c-4736-9d82-9c3078e2e56c)   
 [\<PAVE OVER> Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3)