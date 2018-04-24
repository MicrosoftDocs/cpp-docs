---
title: "Compiler Error CS0213 | Microsoft Docs"
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
  - "CS0213"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0213"
ms.assetid: 3c1d55e3-2b84-4c28-8206-ef65869a898c
caps.latest.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0213
You cannot use the fixed statement to take the address of an already fixed expression  
  
 A local variable in an [unsafe](http://msdn.microsoft.com/library/7e818009-1c6e-4b9e-b769-3728a01586a0) method or a parameter is already fixed (on the stack), so you cannot take the address of either of these two variables in a [fixed](http://msdn.microsoft.com/library/7ea6db08-ad49-4a7a-b934-d8c4acad1c3a) expression. For more information, see [Unsafe Code and Pointers](http://msdn.microsoft.com/library/b0fcca10-a92d-4f2a-835b-b0ccae6739ee).  
  
## Example  
 The following sample generates CS0213.  
  
```  
// CS0213.cs  
// compile with: /unsafe  
public class MyClass  
{  
   unsafe public static void Main()  
   {  
      int i = 45;  
      fixed (int *j = &i) { }  // CS0213  
      // try the following line instead  
      // int* j = &i;  
  
      int[] a = new int[] {1,2,3};  
      fixed (int *b = a)  
      {  
         fixed (int *c = b) { }  // CS0213  
         // try the following line instead  
         // int *c = b;  
      }  
   }  
}  
```