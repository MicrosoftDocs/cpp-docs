---
title: "Compiler Error CS0209 | Microsoft Docs"
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
  - "CS0209"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0209"
ms.assetid: a408a869-02db-414f-97c1-bfb1637f6155
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0209
The type of local declared in a fixed statement must be a pointer type  
  
 The variable that you declare in a [fixed statement](http://msdn.microsoft.com/library/7ea6db08-ad49-4a7a-b934-d8c4acad1c3a) must be a pointer. For more information, see [Unsafe Code and Pointers](http://msdn.microsoft.com/library/b0fcca10-a92d-4f2a-835b-b0ccae6739ee).  
  
 The following sample generates CS0209:  
  
```  
// CS0209.cs  
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
  
      fixed (int i)    // CS0209  
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