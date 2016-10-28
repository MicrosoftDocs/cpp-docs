---
title: "Compiler Error CS0230"
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
  - "CS0230"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0230"
ms.assetid: 132e4623-d393-4a5f-a3f8-838a1bfbd1b3
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
# Compiler Error CS0230
Type and identifier are both required in a foreach statement  
  
 A [foreach](../Topic/foreach,%20in%20\(C%23%20Reference\).md) statement was poorly formed.  
  
 The following sample generates CS0230:  
  
```  
// CS0230.cs  
using System;  
  
class MyClass  
{  
   public static void Main()  
   {  
      int[] myarray = new int[3] {1,2,3};  
  
      foreach (int in myarray)   // CS0230  
      // try the following line instead  
      // foreach (int x in myarray)  
      {  
         Console.WriteLine(x);  
      }  
   }  
}  
```