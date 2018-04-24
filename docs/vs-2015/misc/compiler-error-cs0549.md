---
title: "Compiler Error CS0549 | Microsoft Docs"
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
  - "CS0549"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0549"
ms.assetid: ae965019-9dee-4f28-9e9a-6f379bd0d757
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0549
'function' is a new virtual member in sealed class 'class'  
  
 A [sealed](http://msdn.microsoft.com/library/8e4ed5d3-10be-47db-9488-0da2008e6f3f)[class](http://msdn.microsoft.com/library/b95d8815-de18-4c3f-a8cc-a0a53bdf8690) cannot be used as a base class.  Therefore, it is useless to have a virtual method in sealed class.  
  
 The following sample generates CS0549:  
  
```  
// CS0549.cs  
// compile with: /target:library  
sealed public class MyClass  
{  
   virtual public void TestMethod() {}   // CS0549  
   public void TestMethod2() {}   // OK  
}  
```