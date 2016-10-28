---
title: "Compiler Error CS0220"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0220"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0220"
ms.assetid: f520bf34-bff8-4796-882b-1a9b1d5b977c
caps.latest.revision: 8
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
# Compiler Error CS0220
The operation overflows at compile time in checked mode  
  
 An operation was detected by [checked](../Topic/checked%20\(C%23%20Reference\).md), which is the default, and a data loss resulted. Either correct the inputs to the assignment or use [unchecked](../Topic/unchecked%20\(C%23%20Reference\).md) to resolve this error. For more information, see [Checked and Unchecked](../Topic/Checked%20and%20Unchecked%20\(C%23%20Reference\).md).  
  
 The following sample generates CS0220:  
  
```  
// CS0220.cs  
using System;  
  
class TestClass  
{  
   const int x = 1000000;  
   const int y = 1000000;  
  
   public int MethodCh()  
   {  
      int z = (x * y);   // CS0220  
      return z;  
   }  
  
   public int MethodUnCh()  
   {  
      unchecked  
      {  
         int z = (x * y);  
         return z;  
      }  
   }  
  
   public static void Main()  
   {  
      TestClass myObject = new TestClass();  
      Console.WriteLine("Checked  : {0}", myObject.MethodCh());  
      Console.WriteLine("Unchecked: {0}", myObject.MethodUnCh());  
   }  
}  
```