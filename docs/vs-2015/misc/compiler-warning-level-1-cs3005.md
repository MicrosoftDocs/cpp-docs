---
title: "Compiler Warning (level 1) CS3005 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS3005"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3005"
ms.assetid: 64b687e3-2dbd-45dd-b6da-81f77eb7d6bd
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS3005
Identifier 'identifier' differing only in case is not CLS-compliant  
  
 A [public](../Topic/public%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md), or `protected``internal` identifier, which differs from another `public`, `protected`, or `protected``internal` identifier only in the case of one or more letters, is not compliant with the Common Language Specification (CLS). For more information on CLS Compliance, see [Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Example  
 The following example generates CS3003:  
  
```  
// CS3005.cs  
  
using System;  
  
[assembly:CLSCompliant(true)]  
public class a  
{  
    public static int a1 = 0;  
    public static int A1 = 1;   // CS3005  
  
    public static void Main()  
    {  
        Console.WriteLine(a1);  
        Console.WriteLine(A1);  
    }  
}  
```