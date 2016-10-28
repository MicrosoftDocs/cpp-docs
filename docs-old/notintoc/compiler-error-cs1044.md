---
title: "Compiler Error CS1044"
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
  - "CS1044"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1044"
ms.assetid: 18fc1ff5-8b97-4c31-99a1-5985b8e58024
caps.latest.revision: 6
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
# Compiler Error CS1044
Cannot use more than one type in a for, using, fixed, or declaration statement  
  
 The compiler found an invalid statement.  
  
 The following sample generates CS1044:  
  
```  
// CS1044.cs  
using System;  
  
public class MyClass : IDisposable  
{  
   public void Dispose()  
   {  
      Console.WriteLine("Res1.Dispose()");  
   }  
  
   public static void Main()  
   {  
      using (MyClass mc1 = new MyClass(),  
             MyClass mc2 = new MyClass())   // CS1044, remove an instantiation  
      {  
      }  
   }  
}  
```