---
title: "Compiler Warning (level 1) CS3008"
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
  - "CS3008"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3008"
ms.assetid: 593f6114-bc7b-4789-958f-97bbf99c1c9f
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
# Compiler Warning (level 1) CS3008
Identifier 'identifier' differing only in case is not CLS-compliant  
  
 A [public](../Topic/public%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md), or `protected``internal` identifier breaks compliance with the Common Language Specification (CLS) if it begins with an underscore character (_).For more information on CLS Compliance, see [Writing CLS-Compliant Code](assetId:///4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Example  
 The following example generates CS3008:  
  
```  
// CS3008.cs  
  
using System;  
  
[assembly:CLSCompliant(true)]  
public class a  
{  
    public static int _a = 0;  // CS3008  
    // OK, private  
    // private static int _a1 = 0;  
  
    public static void Main()  
    {  
    }  
}  
```