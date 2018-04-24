---
title: "Compiler Warning (level 1) CS3001 | Microsoft Docs"
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
  - "CS3001"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3001"
ms.assetid: c4f3e247-5e47-4182-b415-c573fb1a152f
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS3001
Argument type 'type' is not CLS-compliant  
  
 A [public](../Topic/public%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md), or `protected``internal` method must accept a parameter whose type is compliant with the Common Language Specification (CLS). For more information on CLS Compliance, see [Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Example  
 The following example generates CS3001:  
  
```  
// CS3001.cs  
  
[assembly:System.CLSCompliant(true)]  
public class a  
{  
    public void bad(ushort i)   // CS3001  
    {  
    }  
  
    private void OK(ushort i)   // OK, private method  
    {  
    }  
  
    public static void Main()  
    {  
    }  
}  
```