---
title: "Compiler Error CS0192 | Microsoft Docs"
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
  - "CS0192"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0192"
ms.assetid: d3fb6d18-dbf3-42c3-a280-afe55b97c2d1
caps.latest.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0192
Fields of static readonly field 'name' cannot be passed ref or out (except in a static constructor)  
  
 A field (variable) marked with the [readonly](http://msdn.microsoft.com/library/2f8081f6-0de2-4903-898d-99696c48d2f4) keyword cannot be passed either to a [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameter except inside a constructor. For more information, see [Fields](http://msdn.microsoft.com/library/3cbb2f61-75f8-4cce-b4ef-f5d1b3de0db7).  
  
 CS0192 also results if the `readonly` field is [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf) and the constructor is not marked `static`.  
  
## Example  
 The following sample generates CS0192.  
  
```  
// CS0192.cs  
class MyClass  
{  
    public readonly int TestInt = 6;  
    static void TestMethod(ref int testInt)  
    {  
        testInt = 0;  
    }  
  
    MyClass()  
    {  
        TestMethod(ref TestInt);   // OK  
    }  
  
    public void PassReadOnlyRef()  
    {  
        TestMethod(ref TestInt);   // CS0192  
    }  
  
    public static void Main()  
    {  
    }  
}  
```