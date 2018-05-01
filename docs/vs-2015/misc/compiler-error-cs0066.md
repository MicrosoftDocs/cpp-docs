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
  
 The event keyword requires a [delegate](http://msdn.microsoft.com/library/0bb8cb6d-2f87-47c7-9d1f-d65c1cd01e9f) type. For more information, see [Events](http://msdn.microsoft.com/library/a8e51b22-d294-44fb-9539-0072f06c4cb3) and [Delegates](http://msdn.microsoft.com/library/97de039b-c76b-4b9c-a27d-8c1e1c8d93da).  
  
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