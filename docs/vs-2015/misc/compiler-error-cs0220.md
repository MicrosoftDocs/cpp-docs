---
title: "Compiler Error CS0220 | Microsoft Docs"
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
  - "CS0220"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0220"
ms.assetid: f520bf34-bff8-4796-882b-1a9b1d5b977c
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0220
The operation overflows at compile time in checked mode  
  
 An operation was detected by [checked](http://msdn.microsoft.com/library/718a1194-988d-48a3-b089-d6ee8bd1608d), which is the default, and a data loss resulted. Either correct the inputs to the assignment or use [unchecked](http://msdn.microsoft.com/library/0c021f7c-923f-4b3d-a58f-55336f5ac27e) to resolve this error. For more information, see [Checked and Unchecked](http://msdn.microsoft.com/library/a84bc877-2c7f-4396-8735-1ce97c42f35e).  
  
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