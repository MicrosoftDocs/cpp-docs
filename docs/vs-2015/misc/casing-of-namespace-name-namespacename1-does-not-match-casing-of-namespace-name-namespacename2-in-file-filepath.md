---
title: "Casing of namespace name &#39;&lt;namespacename1&gt;&#39; does not match casing of namespace name &#39;&lt;namespacename2&gt;&#39; in file &#39;&lt;filepath&gt;&#39; | Microsoft Docs"
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
  - "vbc40055"
  - "bc40055"
helpviewer_keywords: 
  - "BC40055"
ms.assetid: adaac2fe-1513-4234-afe7-633a76089f36
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Casing of namespace name &#39;&lt;namespacename1&gt;&#39; does not match casing of namespace name &#39;&lt;namespacename2&gt;&#39; in file &#39;&lt;filepath&gt;&#39;
A namespace appears more than once in the project, but with different casings.  
  
 *Casing* refers to the use of upper-case and lower-case characters in the name of a programming element. Visual Basic is case-insensitive, but the common language runtime (CLR) is case-sensitive. For more information, see "Case Sensitivity in Names" in [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md).  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **Error ID:** BC40055  
  
### To correct this error  
  
-   As a precaution, always use the identical casing in every reference to a namespace. This can prevent misinterpretation by the common language runtime.  
  
## See Also  
 [Namespace Statement](../Topic/Namespace%20Statement.md)   
 [Namespaces in Visual Basic](../Topic/Namespaces%20in%20Visual%20Basic.md)   
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)   
 [Visual Basic Naming Conventions](../Topic/Visual%20Basic%20Naming%20Conventions.md)