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
  
 A field (variable) marked with the [readonly](../Topic/readonly%20\(C%23%20Reference\).md) keyword cannot be passed either to a [ref](../Topic/ref%20\(C%23%20Reference\).md) or [out](../Topic/out%20\(C%23%20Reference\).md) parameter except inside a constructor. For more information, see [Fields](../Topic/Fields%20\(C%23%20Programming%20Guide\).md).  
  
 CS0192 also results if the `readonly` field is [static](../Topic/static%20\(C%23%20Reference\).md) and the constructor is not marked `static`.  
  
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