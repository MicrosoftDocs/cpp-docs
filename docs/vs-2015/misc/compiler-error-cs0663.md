---
title: "Compiler Error CS0663 | Microsoft Docs"
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
  - "CS0663"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0663"
ms.assetid: 9f96c42b-dcc8-4a0f-8404-289fc88dba5e
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0663
Cannot define overloaded methods that differ only on ref and out.  
  
 Methods that differ only on their use of [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) and [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) on a parameter are not allowed.  
  
 The following sample generates CS0663:  
  
```  
// CS0663.cs  
class TestClass  
{  
   public static void Main()  
   {  
   }  
  
   public void Test(ref int i)  
   {  
   }  
  
   public void Test(out int i)   // CS0663  
   {  
   }  
}  
```