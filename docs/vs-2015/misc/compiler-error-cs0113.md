---
title: "Compiler Error CS0113 | Microsoft Docs"
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
  - "CS0113"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0113"
ms.assetid: 43c5c0b7-67c0-45c1-8363-21c844c094f3
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0113
A member 'function' marked as override cannot be marked as new or virtual  
  
 It is mutually exclusive to mark a method with the [new](http://msdn.microsoft.com/library/e4136516-f058-45a8-84e5-da00a5cf9b6a) and [override](http://msdn.microsoft.com/library/dd1907a8-acf8-46d3-80b9-c2ca4febada8) keywords.  
  
 The following sample generates CS0113:  
  
```  
// CS0113.cs  
namespace MyNamespace  
{  
   abstract public class MyClass  
   {  
      public abstract void Foo();  
   }  
  
   public class MyClass2 : MyClass  
   {  
      override new public void Foo()   // CS0113, remove new keyword  
      {  
      }  
  
      public static int Main()  
      {  
         return 0;  
      }  
   }  
}  
```