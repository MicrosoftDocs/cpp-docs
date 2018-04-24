---
title: "Compiler Error CS0199 | Microsoft Docs"
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
  - "CS0199"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0199"
ms.assetid: 9eede3f2-b55a-4b85-a05d-6bf177e1c602
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0199
Fields of static readonly field 'name' cannot be passed ref or out (except in a static constructor)  
  
 A [readonly](http://msdn.microsoft.com/library/2f8081f6-0de2-4903-898d-99696c48d2f4) variable must have the same [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf) usage as the constructor in which you want to pass it as a [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameter. For more information, see [Passing Parameters](http://msdn.microsoft.com/library/a5c3003f-7441-4710-b8b1-c79de77e0b77).  
  
## Example  
 The following sample generates CS0199:  
  
```  
// CS0199.cs  
class MyClass  
{  
    public static readonly int TestInt = 6;  
  
    static void TestMethod(ref int testInt)  
    {  
        testInt = 0;  
    }  
  
    MyClass()  
    {  
        TestMethod(ref TestInt);   // CS0199, TestInt is static  
    }  
  
    public static void Main()  
    {  
    }  
}  
```