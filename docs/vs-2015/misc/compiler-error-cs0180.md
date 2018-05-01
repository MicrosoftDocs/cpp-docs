---
title: "Compiler Error CS0180 | Microsoft Docs"
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
  - "CS0180"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0180"
ms.assetid: a21bf0a2-ed5a-4ddd-88d3-240babc5888a
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0180
'member' cannot be both extern and abstract  
  
 The [abstract](http://msdn.microsoft.com/library/b0797770-c1f3-4b4d-9441-b9122602a6bb) and [extern](http://msdn.microsoft.com/library/9c3f02c4-51b8-4d80-9cb2-f2b6e1ae15c7) keywords are mutually exclusive. The `extern` keyword means that the member is defined outside the file, and **abstract** means that the implementation is provided in a derived class. For more information, see [Methods](http://msdn.microsoft.com/library/cc738f07-e8cd-4683-9585-9f40c0667c37).  
  
 The following sample generates CS0180:  
  
```  
// CS0180.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public extern abstract int Foo(int a);   // CS0180  
  
      public static void Main()  
      {  
      }  
   }  
}  
```