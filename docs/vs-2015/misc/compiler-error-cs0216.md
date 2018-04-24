---
title: "Compiler Error CS0216 | Microsoft Docs"
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
  - "CS0216"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0216"
ms.assetid: afb3dd29-3eff-4b62-8267-eb726c2bcee4
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0216
The operator 'operator' requires a matching operator 'missing_operator' to also be defined  
  
 A user-defined [true](http://msdn.microsoft.com/library/7d0adcdb-02e9-478c-8c84-2e671d4acef3) operator requires a user-defined [false](http://msdn.microsoft.com/library/a11aa532-efe2-442b-9fcc-8fdb33b8c8b4) operator, and vice versa. For more information, see [Operators](http://msdn.microsoft.com/library/214e7b83-1a41-4f7c-9867-64e9c0bab39f).  
  
 The following sample generates CS0216:  
  
```  
// CS0216.cs  
class MyClass  
{  
   public static bool operator true (MyClass MyInt)   // CS0216  
   {  
      return true;  
   }  
  
   // to resolve, uncomment the following operator definition  
   /*  
   public static bool operator false (MyClass MyInt)  
   {  
      return true;  
   }  
   */  
  
   public static void Main()  
   {  
   }  
}  
```