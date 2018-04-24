---
title: "Compiler Error CS0241 | Microsoft Docs"
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
  - "CS0241"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "default method parameter values"
  - "defaults, parameter values"
  - "defaults, method parameter values"
  - "default parameter values"
  - "CS0241"
ms.assetid: be31b194-3de5-4aab-b23a-6cf790f940ab
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0241
Default parameter specifiers are not permitted  
  
 [Method parameters](http://msdn.microsoft.com/library/680e39ff-775b-48b0-9f47-4186a5bfc4a1) cannot have default values. Use method overloads if you want to achieve the same effect. For more information, see [Passing Parameters](http://msdn.microsoft.com/library/a5c3003f-7441-4710-b8b1-c79de77e0b77).  
  
## Example  
 The following sample generates CS0241. In addition, the sample shows how to simulate, with overloading, a method with default arguments.  
  
```  
// CS0241.cs  
public class A  
{  
   public void Test(int i = 9) {}   // CS0241  
}  
  
public class B  
{  
   public void Test() { Test(9); }  
   public void Test(int i)  {}  
}  
  
public class C  
{  
   public static void Main()  
   {   
      B x = new B();  
      x.Test();  
   }  
}  
```