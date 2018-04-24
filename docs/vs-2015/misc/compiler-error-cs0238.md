---
title: "Compiler Error CS0238 | Microsoft Docs"
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
  - "CS0238"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0238"
ms.assetid: 9b50c6e2-2c3f-431d-bdb7-557b0ec51626
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0238
'member' cannot be sealed because it is not an override  
  
 [sealed](http://msdn.microsoft.com/library/8e4ed5d3-10be-47db-9488-0da2008e6f3f) was used on a member that was not also marked with [override](http://msdn.microsoft.com/library/dd1907a8-acf8-46d3-80b9-c2ca4febada8). For more information, see [Inheritance](http://msdn.microsoft.com/library/81d64ee4-50f9-4d6c-a8dc-257c348d2eea).  
  
 The following sample generates CS0238:  
  
```  
// CS0238.cs  
abstract class MyClass  
{  
   public abstract void f();  
}  
  
class MyClass2 : MyClass  
{  
   public static void Main()  
   {  
   }  
  
   public sealed void f() // CS0238  
   // Try the following definition instead:  
   // public override sealed void f()  
   {  
   }  
}  
```