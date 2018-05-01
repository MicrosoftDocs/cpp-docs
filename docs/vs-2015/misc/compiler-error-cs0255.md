---
title: "Compiler Error CS0255 | Microsoft Docs"
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
  - "CS0255"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0255"
ms.assetid: b45f5d5a-1923-4fe1-a858-e5ef5590a108
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0255
stackalloc may not be used in a catch or finally block  
  
 The [stackalloc](http://msdn.microsoft.com/library/adc04c28-3ed2-4326-807a-7545df92b852) keyword may not be used in a [catch](http://msdn.microsoft.com/library/cb5503c7-bfa1-4610-8fc2-ddcd2e84c438) or [finally](http://msdn.microsoft.com/library/a1b443b0-ff7a-43ab-b835-0cc9bfbd15ca) block. For more information, see [Exceptions and Exception Handling](http://msdn.microsoft.com/library/0001887f-4fa2-47e2-8034-2819477e2344).  
  
 The following sample generates CS0255:  
  
```  
// CS0255.cs  
// compile with: /unsafe  
using System;  
  
public class TestTryFinally  
{  
   public static unsafe void Test()  
   {  
      int i = 123;  
      string s = "Some string";  
      object o = s;  
  
      try  
      {  
         // Conversion is not valid; o contains a string not an int  
         i = (int) o;  
      }  
  
      finally  
      {  
         Console.Write("i = {0}", i);  
         int* fib = stackalloc int[100];   // CS0255  
      }  
   }  
  
   public static void Main()  
   {  
   }  
}  
```