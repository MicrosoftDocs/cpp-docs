---
title: "Compiler Warning (level 1) CS3008 | Microsoft Docs"
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
  - "CS3008"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3008"
ms.assetid: 593f6114-bc7b-4789-958f-97bbf99c1c9f
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS3008
Identifier 'identifier' differing only in case is not CLS-compliant  
  
 A [public](http://msdn.microsoft.com/library/0ae45d16-a551-4b74-9845-57208de1328e), [protected](http://msdn.microsoft.com/library/05ce3794-6675-4025-bddb-eaaa0ec22892), or `protected``internal` identifier breaks compliance with the Common Language Specification (CLS) if it begins with an underscore character (_).For more information on CLS Compliance, see [Writing CLS-Compliant Code](http://msdn.microsoft.com/en-us/4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](http://msdn.microsoft.com/library/4f0b77d0-4844-464f-af73-6e06bedeafc6).  
  
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