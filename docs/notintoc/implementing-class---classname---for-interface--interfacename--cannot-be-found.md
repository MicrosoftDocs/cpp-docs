---
title: "Implementing class &#39;&lt;classname&gt;&#39; for interface &lt;interfacename&gt; cannot be found"
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
  - "vbc31094"
  - "bc31094"
helpviewer_keywords: 
  - "BC31094"
ms.assetid: 262cb67e-2930-4a4a-a63e-bb2e201b3b93
caps.latest.revision: 9
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
# Implementing class &#39;&lt;classname&gt;&#39; for interface &lt;interfacename&gt; cannot be found
An implementing class in the interop assembly is not available.  
  
 **Error ID:** BC31094  
  
### To correct this error  
  
1.  Verify that the type library for the COM object is valid.  
  
2.  Use the Type Library Importer (Tlbimp.exe) to manually create an interop assembly, and then add a reference to that interop assembly from your project.  
  
## See Also  
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)   
 [Tlbimp.exe (Type Library Importer)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md)