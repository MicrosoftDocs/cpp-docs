---
title: "Compiler Error CS0217 | Microsoft Docs"
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
  - "CS0217"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0217"
ms.assetid: ede61095-6e11-4f4a-8e7d-85e7a3f4fc3d
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0217
In order to be applicable as a short circuit operator a user-defined logical operator ('operator') must have the same return type as the type of its 2 parameters.  
  
 If you define an operator for a user-defined type, and then try to use the operator as a short-circuit operator, the user-defined operator must have parameters and return values of the same type. For more information on short-circuit operators, see [&& Operator](http://msdn.microsoft.com/library/2e4f0a1c-92a3-40f8-8e3b-17b607f20c31) and [&#124;&#124; Operator](http://msdn.microsoft.com/library/7d442d8e-400d-421f-b4d2-034bf82bcbdc).  
  
 The following sample generates CS0217:  
  
```  
// CS0217.cs  
using System;  
  
public class MyClass  
{  
   public static bool operator true (MyClass f)  
   {  
      return false;  
   }  
  
   public static bool operator false (MyClass f)  
   {  
      return false;  
   }  
  
   public static implicit operator int(MyClass x)  
   {  
      return 0;  
   }  
  
   public static int operator & (MyClass f1, MyClass f2)   // CS0217  
   // try the following line instead  
   // public static MyClass operator & (MyClass f1, MyClass f2)  
   {  
      return new MyClass();  
   }  
  
   public static void Main()  
   {  
      MyClass f = new MyClass();  
      int i = f && f;  
   }  
}  
```  
  
## See Also  
 [Overloadable Operators](http://msdn.microsoft.com/library/390d9d01-79fc-40ab-9ed3-0bf448da1b6a)