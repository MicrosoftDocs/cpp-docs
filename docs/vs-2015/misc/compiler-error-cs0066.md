---
title: "Compiler Error CS0066 | Microsoft Docs"
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
  - "CS0066"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0066"
ms.assetid: 9b50b49b-78b8-4562-8839-d59e5edbec6b
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0066
'event': event must be of a delegate type  
  
 The event keyword requires a [delegate](../Topic/delegate%20\(C%23%20Reference\).md) type. For more information, see [Events](../Topic/Events%20\(C%23%20Programming%20Guide\).md) and [Delegates](../Topic/Delegates%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0066:  
  
```  
// CS0066.cs  
using System;  
  
public class EventHandler  
{  
}  
  
// to fix the error, remove the event declaration and the  
// EventHandler class declaration, and uncomment the following line  
// public delegate void EventHandler();  
  
public class a  
{  
   public event EventHandler Click;   // CS0066  
  
   private void TestMethod()  
   {  
      if (Click != null)  
         Click();  
   }  
  
   public static void Main()  
   {  
   }  
}  
```