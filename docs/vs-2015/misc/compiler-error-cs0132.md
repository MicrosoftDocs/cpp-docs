---
title: "Compiler Error CS0132 | Microsoft Docs"
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
  - "CS0132"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0132"
ms.assetid: e8ad1281-2912-4b6a-b2af-a319a23ddd16
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0132
'constructor' : a static constructor must be parameterless  
  
 A [static](http://msdn.microsoft.com/library/5509e215-2183-4da3-bab4-6b7e607a4fdf) constructor cannot be declared with one or more parameters. For more information, see [Constructors](http://msdn.microsoft.com/library/df2e2e9d-7998-418b-8e7d-890c17ff6c95).  
  
 The following sample generates CS0132:  
  
```  
// CS0132.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public MyClass(int i)  
      {  
      }  
   }  
  
   public class MyClass2 : MyClass  
   {  
      static MyClass2(int i)   // CS0132  
      {  
      }  
   }  
}  
```