---
title: "Compiler Error CS0149 | Microsoft Docs"
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
  - "CS0149"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0149"
ms.assetid: c3c0e48e-8dba-4ee6-86fd-cbb02c68255c
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0149
Method name expected  
  
 When creating a [delegate](http://msdn.microsoft.com/library/0bb8cb6d-2f87-47c7-9d1f-d65c1cd01e9f), specify a method. For more information, see [Delegates](http://msdn.microsoft.com/library/97de039b-c76b-4b9c-a27d-8c1e1c8d93da).  
  
 The following sample generates CS0149:  
  
```  
// CS0149.cs  
using System;  
  
delegate string MyDelegate(int i);  
  
class MyClass  
{  
   // class member-field of the declared delegate type  
   static MyDelegate dt;     
  
   public static void Main()  
   {  
      dt = new MyDelegate(17.45);   // CS0149  
      // try the following line instead  
      // dt = new MyDelegate(Func2);  
      F(dt);  
   }  
  
   public static string Func2(int j)  
   {  
      Console.WriteLine(j);  
      return j.ToString();  
   }  
  
   public static void F(MyDelegate myFunc)  
   {  
      myFunc(8);  
   }  
}  
```