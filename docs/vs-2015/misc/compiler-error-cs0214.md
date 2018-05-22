---
title: "Compiler Error CS0214 | Microsoft Docs"
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
  - "CS0214"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0214"
ms.assetid: be1ef909-a53e-485f-a79b-b1cc56cead15
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0214
Pointers and fixed size buffers may only be used in an unsafe context  
  
 Pointers can only be used with the [unsafe](http://msdn.microsoft.com/library/7e818009-1c6e-4b9e-b769-3728a01586a0) keyword. For more information, see [Unsafe Code and Pointers](http://msdn.microsoft.com/library/b0fcca10-a92d-4f2a-835b-b0ccae6739ee).  
  
 The following sample generates CS0214:  
  
```  
// CS0214.cs  
// compile with: /target:library /unsafe  
public struct S  
{  
   public int a;  
}  
  
public class MyClass  
{  
   public static void Test()  
   {  
      S s = new S();  
      S * s2 = &s;    // CS0214  
      s2->a = 3;      // CS0214  
      s.a = 0;  
   }  
  
   // OK  
   unsafe public static void Test2()  
   {  
      S s = new S();  
      S * s2 = &s;  
      s2->a = 3;  
      s.a = 0;  
   }  
}  
```