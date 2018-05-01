---
title: "Compiler Warning (level 1) CS3002 | Microsoft Docs"
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
  - "CS3002"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3002"
ms.assetid: 34f19735-76d2-4d78-bd52-45989a86fca4
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS3002
Return type of 'method' is not CLS-compliant  
  
 A [public](http://msdn.microsoft.com/library/0ae45d16-a551-4b74-9845-57208de1328e), [protected](http://msdn.microsoft.com/library/05ce3794-6675-4025-bddb-eaaa0ec22892), or `protected``internal` method must return a value whose type is compliant with the Common Language Specification (CLS). For more information on CLS Compliance, see [Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](http://msdn.microsoft.com/library/4f0b77d0-4844-464f-af73-6e06bedeafc6).  
  
## Example  
 The following example generates CS3002:  
  
```  
// CS3002.cs  
  
[assembly:System.CLSCompliant(true)]  
public class a  
{  
    public ushort bad()   // CS3002, public method  
    {  
        ushort a;  
        a = ushort.MaxValue;  
        return a;  
    }  
  
    private ushort OK()   // OK, private method  
    {  
        ushort a;  
        a = ushort.MaxValue;  
        return a;  
    }  
  
    public static void Main()  
    {  
    }  
}  
```