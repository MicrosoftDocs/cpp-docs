---
title: "Compiler Error CS0255 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Compiler Error CS0255
stackalloc may not be used in a catch or finally block  
  
 The [stackalloc](/dotnet/articles/csharp/language-reference/keywords/stackalloc) keyword may not be used in a [catch](/dotnet/articles/csharp/language-reference/keywords/try-catch) or [finally](/dotnet/articles/csharp/language-reference/keywords/try-catch-finally) block. For more information, see [Exceptions and Exception Handling](/dotnet/articles/csharp/programming-guide/exceptions/exceptions-and-exception-handling).  
  
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