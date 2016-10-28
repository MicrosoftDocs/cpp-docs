---
title: "Compiler Error CS0193"
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
  - "CS0193"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0193"
ms.assetid: 7b60fd99-9eee-4d61-ad75-585a16e22e96
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
# Compiler Error CS0193
The * or -> operator must be applied to a pointer  
  
 The **\*** or **->** operator was used with a nonpointer type. For more information, see [Pointer types](../Topic/Pointer%20types%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0193:  
  
```  
// CS0193.cs  
using System;  
  
public struct Age  
{  
   public int AgeYears;  
   public int AgeMonths;  
   public int AgeDays;  
}  
  
public class MyClass  
{  
   public static void SetAge(ref Age anAge, int years, int months, int days)  
   {  
      anAge->Months = 3;   // CS0193, anAge is not a pointer  
      // try the following line instead  
      // anAge.AgeMonths = 3;  
   }  
  
   public static void Main()  
   {  
      Age MyAge = new Age();  
      Console.WriteLine(MyAge.AgeMonths);  
      SetAge(ref MyAge, 22, 4, 15);  
      Console.WriteLine(MyAge.AgeMonths);  
   }  
}  
```