---
title: "Compiler Error CS0146 | Microsoft Docs"
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
  - "CS0146"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0146"
ms.assetid: 2be796e5-da2c-4939-af12-3145cd1828c8
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0146
Circular base class dependency involving 'class1' and 'class2'  
  
 The inheritance list for a class includes a direct or indirect reference to itself. A class cannot inherit from itself. For more information, see [Inheritance](http://msdn.microsoft.com/library/81d64ee4-50f9-4d6c-a8dc-257c348d2eea).  
  
 The following sample generates CS0146:  
  
```  
// CS0146.cs  
namespace MyNamespace  
{  
   public interface InterfaceA  
   {  
   }  
  
   public class MyClass : InterfaceA, MyClass2  
   {  
      public void Main()  
      {  
      }  
   }  
  
   public class MyClass2 : MyClass   // CS0146  
   {  
   }  
}  
```