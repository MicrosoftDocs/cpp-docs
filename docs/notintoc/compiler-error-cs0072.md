---
title: "Compiler Error CS0072"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0072"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0072"
ms.assetid: 9153cd52-f497-4128-a11f-a2820218b0e6
caps.latest.revision: 8
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error CS0072
'event' : cannot override; 'method' is not an event  
  
 An [event](../Topic/event%20\(C%23%20Reference\).md) can only override another event. For more information, see [Events](../Topic/Events%20\(C%23%20Programming%20Guide\).md).  
  
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