---
title: "Compiler Error CS0236 | Microsoft Docs"
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
  - "CS0236"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0236"
ms.assetid: 1522c421-744f-441f-9e05-6bb31311ab2a
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0236
A field initializer cannot reference the nonstatic field, method, or property 'field'  
  
 Instance fields cannot be used to initialize other instance fields outside a method. If you are trying to initialize a variable outside a method, consider performing the initialization inside the class constructor. For more information, see [Methods](http://msdn.microsoft.com/library/cc738f07-e8cd-4683-9585-9f40c0667c37).  
  
 The following sample generates CS0236:  
  
```  
// CS0236.cs  
public class MyClass  
{  
   public int i = 5;  
   public int j = i;  // CS0236  
   public int k;      // initialize in constructor  
  
   MyClass()  
   {  
      k = i;  
   }  
  
   public static void Main()  
   {  
   }  
}  
```