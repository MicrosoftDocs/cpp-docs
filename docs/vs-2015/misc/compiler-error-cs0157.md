---
title: "Compiler Error CS0157 | Microsoft Docs"
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
  - "CS0157"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0157"
ms.assetid: a5d9d506-81f8-47dd-85b6-85f8170bcbef
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0157
Control cannot leave the body of a finally clause  
  
 All of the statements in a [finally](http://msdn.microsoft.com/library/a1b443b0-ff7a-43ab-b835-0cc9bfbd15ca) clause must execute. For more information, see [Exception Handling Statements](http://msdn.microsoft.com/library/6d0323a3-3164-411c-9b84-a3606bd0e13c) and [Exceptions and Exception Handling](http://msdn.microsoft.com/library/0001887f-4fa2-47e2-8034-2819477e2344).  
  
 The following sample generates CS0157:  
  
```  
// CS0157.cs  
using System;  
namespace MyNamespace  
{  
   public class MyClass2 : Exception  
   {  
   }  
  
   public class MyClass  
   {  
      public static void Main()  
      {  
         try  
         {  
         }  
  
         finally  
         {  
            return;   // CS0157, cannot leave finally clause  
         }  
      }  
   }  
}  
```