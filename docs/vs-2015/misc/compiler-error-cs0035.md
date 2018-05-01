---
title: "Compiler Error CS0035 | Microsoft Docs"
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
  - "CS0035"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0035"
ms.assetid: a622113e-98a4-4583-992c-1fb55139320a
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0035
Operator 'operator' is ambiguous on an operand of type 'type'  
  
 The compiler has more than one available conversion and does not know which to choose before applying the operator. For more information, see [Templated User Defined Conversions](../misc/templated-user-defined-conversions.md) and [Conversion Operators](http://msdn.microsoft.com/library/c5ad73a3-d57b-4d2b-b4c9-24e3c2856efc).  
  
 The following sample generates CS0035:  
  
```  
// CS0035.cs  
class MyClass  
{  
   private int i;  
  
   public MyClass(int i)  
   {  
      this.i = i;  
   }  
  
   public static implicit operator double(MyClass x)  
   {  
      return (double) x.i;  
   }  
  
   public static implicit operator decimal(MyClass x)  
   {  
      return (decimal) x.i;  
   }  
}  
  
class MyClass2  
{  
   static void Main()  
   {  
      MyClass x = new MyClass(7);  
      object o = - x;   // CS0035  
      // try a cast:  
      // object o = - (double)x;  
   }  
}  
  
```