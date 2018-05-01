---
title: "Compiler Error CS0215 | Microsoft Docs"
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
  - "CS0215"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0215"
ms.assetid: 2060440d-be22-4c10-8b26-43b08b615447
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0215
The return type of operator True or False must be bool  
  
 User-defined [true](http://msdn.microsoft.com/library/7d0adcdb-02e9-478c-8c84-2e671d4acef3) and [false](http://msdn.microsoft.com/library/a11aa532-efe2-442b-9fcc-8fdb33b8c8b4) operators must have a return type of [bool](http://msdn.microsoft.com/library/551cfe35-2632-4343-af49-33ad12da08e2). For more information, see [Overloadable Operators](http://msdn.microsoft.com/library/390d9d01-79fc-40ab-9ed3-0bf448da1b6a).  
  
 The following sample generates CS0215:  
  
```  
// CS0215.cs  
class MyClass  
{  
   public static int operator true (MyClass MyInt)   // CS0215  
   // try the following line instead  
   // public static bool operator true (MyClass MyInt)  
   {  
      return true;  
   }  
  
   public static int operator false (MyClass MyInt)   // CS0215  
   // try the following line instead  
   // public static bool operator false (MyClass MyInt)  
   {  
      return true;  
   }  
  
   public static void Main()  
   {  
   }  
}  
```