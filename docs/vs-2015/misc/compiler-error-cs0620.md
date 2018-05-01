---
title: "Compiler Error CS0620 | Microsoft Docs"
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
  - "CS0620"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0620"
ms.assetid: cadd7156-0c3c-460b-844b-c9bbfb8f62df
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0620
Indexers cannot have void type  
  
 The return type of an [indexer](http://msdn.microsoft.com/library/022cd27d-d5e0-4cfe-8b97-dc018cc3355d) cannot be `void`. An indexer must return a value.  
  
 The following sample generates CS0620:  
  
```  
// CS0620.cs  
class MyClass  
{  
   public static void Main()  
   {  
      MyClass test = new MyClass();  
      System.Console.WriteLine(test[2]);  
   }  
  
   void this [int intI]   // CS0620, return type cannot be void  
   {  
      get  
      {  
         // will need to return some value  
      }  
   }  
}  
```  
  
## See Also  
 [void](http://msdn.microsoft.com/library/0d2d8a95-fe20-4fbd-bf5d-c1e54bce71d4)