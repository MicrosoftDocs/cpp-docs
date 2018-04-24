---
title: "Compiler Error CS0079 | Microsoft Docs"
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
  - "CS0079"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0079"
ms.assetid: 71c85883-b72f-402f-a828-18ca92976273
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0079
The event 'event' can only appear on the left hand side of += or -=  
  
 An [event](http://msdn.microsoft.com/library/7858fd85-153b-4259-85d0-6aa13c35f174) was called incorrectly. For more information, see [Events](http://msdn.microsoft.com/library/a8e51b22-d294-44fb-9539-0072f06c4cb3) and [Delegates](http://msdn.microsoft.com/library/97de039b-c76b-4b9c-a27d-8c1e1c8d93da).  
  
 The following sample generates CS0079:  
  
```  
// CS0079.cs  
using System;  
  
public delegate void MyEventHandler();  
  
public class Class1  
{  
   private MyEventHandler _e;  
  
   public event MyEventHandler Pow  
   {  
      add  
      {  
         _e += value;  
         Console.WriteLine("in add accessor");  
      }  
      remove  
      {  
         _e -= value;  
         Console.WriteLine("in remove accessor");  
      }  
   }  
  
   public void Handler()  
   {  
   }  
  
   public void Fire()  
   {  
      if (_e != null)  
      {  
         Pow();   // CS0079  
         // try the following line instead  
         // _e();  
      }  
   }  
  
   public static void Main()  
   {  
      Class1 p = new Class1();  
      p.Pow += new MyEventHandler(p.Handler);  
      p._e();  
      p.Pow += new MyEventHandler(p.Handler);  
      p._e();  
      p._e -= new MyEventHandler(p.Handler);  
      if (p._e != null)  
      {  
         p._e();  
      }  
      p.Pow -= new MyEventHandler(p.Handler);  
      if (p._e != null)  
      {  
         p._e();  
      }  
   }  
}  
```