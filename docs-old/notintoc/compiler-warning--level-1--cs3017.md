---
title: "Compiler Warning (level 1) CS3017"
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
  - "CS3017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3017"
ms.assetid: 8e56b2f0-9caf-4c9a-98c2-d3ad0b70e767
caps.latest.revision: 8
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
# Compiler Warning (level 1) CS3017
You cannot specify the CLSCompliant attribute on a module that differs from the CLSCompliant attribute on the assembly  
  
 This warning occurs if you have a assembly CLSCompliant attribute that conflicts with a module CLSCompliant attribute. An assembly that is CLS compliant cannot contain modules that are not CLS compliant. To resolve this warning, make sure the assembly and module CLSCompliant attributes are either both true or both false, or remove one of the attributes. For more information on CLS Compliance, see [Writing CLS-Compliant Code](assetId:///4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Example  
 The following example generates CS3017:  
  
```  
// CS3017.cs  
// compile with: /target:module  
  
using System;  
  
[module: CLSCompliant(true)]  
[assembly: CLSCompliant(false)]  // CS3017  
// Try this line instead:  
// [assembly: CLSCompliant(true)]  
class C  
{  
    static void Main() {}  
}  
```