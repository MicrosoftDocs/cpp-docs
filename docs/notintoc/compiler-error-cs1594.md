---
title: "Compiler Error CS1594"
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
  - "CS1594"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1594"
ms.assetid: f949a992-27a3-470d-b512-e590e5170af3
caps.latest.revision: 7
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
# Compiler Error CS1594
Delegate 'delegate' has some invalid arguments  
  
 The type of an argument passed to a [delegate](../Topic/delegate%20\(C%23%20Reference\).md) invocation does not agree with the type of the parameter in the delegate declaration.  
  
 The following sample generates CS1594:  
  
```  
// CS1594.cs  
using System;  
delegate string func(int i);   // declare delegate  
  
class a  
{  
   public static void Main()  
   {  
      func dt = new func(z);  
      x(dt);  
   }  
  
   public static string z(int j)  
   {  
      Console.WriteLine(j);  
      return j.ToString();  
   }  
  
   public static void x(func hello)  
   {  
      hello("8");   // CS1594  
      // try the following line instead  
      // hello(8);  
   }  
}  
```