---
title: "Compiler Error CS0244 | Microsoft Docs"
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
  - "CS0244"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0244"
ms.assetid: f10e4479-ed6e-40dc-9fab-914e404d7f84
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0244
Neither 'is' nor 'as' is valid on pointer types  
  
 The [is](http://msdn.microsoft.com/library/bc62316a-d41f-4f90-8300-c6f4f0556e43) and [as](http://msdn.microsoft.com/library/a9be126b-cbf4-4990-a70d-d0e1983cad0e) keywords are not valid for use on pointer types. For more information, see [Unsafe Code and Pointers](http://msdn.microsoft.com/library/b0fcca10-a92d-4f2a-835b-b0ccae6739ee).  
  
 The following sample generates CS0244:  
  
```  
// CS0244.cs  
// compile with: /unsafe  
  
class UnsafeTest  
{  
   unsafe static void SquarePtrParam (int* p)  
   {  
      bool b = p is object;   // CS0244 p is pointer  
   }  
  
   unsafe public static void Main()  
   {  
      int i = 5;  
      SquarePtrParam (&i);  
   }  
}  
```