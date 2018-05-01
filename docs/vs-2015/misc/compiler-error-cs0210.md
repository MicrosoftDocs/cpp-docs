---
title: "Compiler Error CS0210 | Microsoft Docs"
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
  - "CS0210"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0210"
ms.assetid: 9f2ec1b8-6ca4-4147-b004-e3b43e7e8754
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0210
You must provide an initializer in a fixed or using statement declaration  
  
 You must declare and initialize the variable in a [fixed statement](http://msdn.microsoft.com/library/7ea6db08-ad49-4a7a-b934-d8c4acad1c3a). For more information, see [Unsafe Code and Pointers](http://msdn.microsoft.com/library/b0fcca10-a92d-4f2a-835b-b0ccae6739ee).  
  
 The following sample generates CS0210:  
  
```  
// CS0210a.cs  
// compile with: /unsafe  
  
class Point  
{  
   public int x, y;  
}  
  
public class MyClass  
{  
   unsafe public static void Main()  
   {  
      Point pt = new Point();  
  
      fixed (int i)    // CS0210  
      {  
      }  
      // try the following lines instead  
      /*  
      fixed (int* p = &pt.x)  
      {  
      }  
      fixed (int* q = &pt.y)  
      {  
      }  
      */  
   }  
}  
```  
  
 The following sample also generates CS0210 because the [using statement](http://msdn.microsoft.com/library/afc355e6-f0b9-4240-94dd-0d93f17d9fc3) has no initializer.  
  
```  
// CS0210b.cs  
  
using System.IO;  
class Test   
{  
   static void Main()   
   {  
      using (StreamWriter w) // CS0210  
      // Try this line instead:  
      // using (StreamWriter w = new StreamWriter("TestFile.txt"))   
      {  
         w.WriteLine("Hello there");  
      }  
   }  
}  
```