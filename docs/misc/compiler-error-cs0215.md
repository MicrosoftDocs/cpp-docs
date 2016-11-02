---
title: "Compiler Error CS0215 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
# Compiler Error CS0215
The return type of operator True or False must be bool  
  
 User-defined [true](/dotnet/csharp/language-reference/keywords/true) and [false](/dotnet/csharp/language-reference/keywords/false) operators must have a return type of [bool](/dotnet/csharp/language-reference/keywords/bool). For more information, see [Overloadable Operators](/dotnet/csharp/programming-guide/statements-expressions-operators/overloadable-operators).  
  
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