---
title: "Compiler Error CS0175 | Microsoft Docs"
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
  - "CS0175"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0175"
ms.assetid: cedd769d-8258-4235-a321-362981b9f84b
caps.latest.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0175
Use of keyword 'base' is not valid in this context  
  
 The [base](http://msdn.microsoft.com/library/8b645dbe-1a33-49b8-8716-1c401f9a5ea5) keyword must be used to specify a particular member of the base class. For more information, see [Constructors](http://msdn.microsoft.com/library/df2e2e9d-7998-418b-8e7d-890c17ff6c95).  
  
 The following sample generates CS0175:  
  
```  
// CS0175.cs  
using System;  
class BaseClass  
{  
    public int TestInt = 0;  
}  
  
class MyClass : BaseClass  
{  
    public static void Main()  
    {  
        MyClass aClass = new MyClass();  
        aClass.BaseTest();  
    }  
  
    public void BaseTest()  
    {  
        Console.WriteLine(base); // CS0175  
        // Try the following line instead:  
        // Console.WriteLine(base.TestInt);  
        base = 9;   // CS0175  
  
        // Try the following line instead:  
        // base.TestInt = 9;  
    }  
}  
```