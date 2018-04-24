---
title: "Compiler Error CS1611 | Microsoft Docs"
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
  - "CS1611"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1611"
ms.assetid: 48bfba77-6be2-4242-b1d2-98bf471b6d1e
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1611
The params parameter cannot be declared as ref or out  
  
 The keywords [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) cannot be used with the [params](http://msdn.microsoft.com/library/1690815e-b52b-4967-8380-5780aff08012) keyword.  
  
 The following sample generates CS1611:  
  
```  
// CS1611.cs  
public class MyClass  
{  
   public static void Test(params ref int[] a)   // CS1611, remove ref  
   {  
   }  
  
   public static void Main()  
   {  
      Test(1);  
   }  
}  
```