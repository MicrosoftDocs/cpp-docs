---
title: "Compiler Warning (level 3) CS0665 | Microsoft Docs"
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
  - "CS0665"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0665"
ms.assetid: bddff69b-e74e-45ce-8472-16ee53ae4609
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 3) CS0665
Assignment in conditional expression is always constant; did you mean to use == instead of = ?  
  
 A conditional expression used the [= operator](http://msdn.microsoft.com/library/d802a6d5-32f0-42b8-b180-12f5a081bfc1) and not the [== operator](http://msdn.microsoft.com/library/34c6b597-caa2-4855-a7cd-38ecdd11bd07).  
  
 The following sample generates CS0665:  
  
```  
// CS0665.cs  
// compile with: /W:3  
class Test  
{  
   public static void Main()  
   {  
      bool i = false;  
  
      if (i = true)   // CS0665  
      // try the following line instead  
      // if (i == true)  
      {  
      }  
  
      System.Console.WriteLine(i);  
   }  
}  
```