---
title: "Compiler Error CS0191 | Microsoft Docs"
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
  - "CS0191"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0191"
ms.assetid: 512479e4-656e-4dcb-8d71-801541d72dcd
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0191
Property or indexer 'name' cannot be assigned to -- it is read only  
  
 A [readonly](http://msdn.microsoft.com/library/2f8081f6-0de2-4903-898d-99696c48d2f4) field can only take an assignment in a constructor or at declaration. For more information, see [Constructors](http://msdn.microsoft.com/library/df2e2e9d-7998-418b-8e7d-890c17ff6c95).  
  
 CS0191 also results if the `readonly` field is [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf) and the constructor is not marked `static`.  
  
## Example  
 The following sample generates CS0191.  
  
```  
// CS0191.cs  
class MyClass  
{  
    public readonly int TestInt = 6;  // OK to assign to readonly field in declaration  
  
    MyClass()  
    {  
        TestInt = 11; // OK to assign to readonly field in constructor  
    }  
  
    public void TestReadOnly()  
    {  
        TestInt = 19;                  // CS0191  
    }  
  
    public static void Main()  
    {  
    }  
}  
```