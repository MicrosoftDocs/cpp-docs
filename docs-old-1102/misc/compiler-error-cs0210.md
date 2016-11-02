---
title: "Compiler Error CS0210"
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
  - "CS0210"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0210"
ms.assetid: 9f2ec1b8-6ca4-4147-b004-e3b43e7e8754
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
# Compiler Error CS0210
You must provide an initializer in a fixed or using statement declaration  
  
 You must declare and initialize the variable in a [fixed statement](../Topic/fixed%20Statement%20\(C%23%20Reference\).md). For more information, see [Unsafe Code and Pointers](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md).  
  
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
  
 The following sample also generates CS0210 because the [using statement](../Topic/using%20Statement%20\(C%23%20Reference\).md) has no initializer.  
  
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