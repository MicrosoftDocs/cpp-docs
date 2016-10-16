---
title: "Compiler Error CS0255"
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
  - "CS0255"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0255"
ms.assetid: b45f5d5a-1923-4fe1-a858-e5ef5590a108
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
# Compiler Error CS0255
stackalloc may not be used in a catch or finally block  
  
 The [stackalloc](../Topic/stackalloc%20\(C%23%20Reference\).md) keyword may not be used in a [catch](../Topic/try-catch%20\(C%23%20Reference\).md) or [finally](../Topic/try-catch-finally%20\(C%23%20Reference\).md) block. For more information, see [Exceptions and Exception Handling](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
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