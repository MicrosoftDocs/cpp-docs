---
title: "Compiler Error CS0072 | Microsoft Docs"
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
  - "CS0072"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0072"
ms.assetid: 9153cd52-f497-4128-a11f-a2820218b0e6
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0072
'event' : cannot override; 'method' is not an event  
  
 An [event](http://msdn.microsoft.com/library/7858fd85-153b-4259-85d0-6aa13c35f174) can only override another event. For more information, see [Events](http://msdn.microsoft.com/library/a8e51b22-d294-44fb-9539-0072f06c4cb3).  
  
 The following sample generates CS0072:  
  
```  
// CS0072.cs  
delegate void MyDelegate();  
  
class Test1  
{  
   public virtual event MyDelegate MyEvent;  
   public virtual void VMeth()  
   {  
   }  
  
   public void FireAway()  
   {  
      if (MyEvent != null)  
         MyEvent();  
   }  
}  
  
class Test2 : Test1  
{  
   public override event MyDelegate VMeth   // CS0072  
   // uncomment the following lines to resolve  
   // public override event MyDelegate MyEvent  
   {  
      add  
      {  
         VMeth += value;  
         // MyEvent += value;  
      }  
      remove  
      {  
         VMeth -= value;  
         // MyEvent -= value;  
      }  
   }  
  
   public static void Main()  
   {  
   }  
}  
```