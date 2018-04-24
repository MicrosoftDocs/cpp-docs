---
title: "Compiler Error CS0247 | Microsoft Docs"
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
  - "CS0247"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0247"
ms.assetid: 95a147bb-3c67-45b7-b816-4fcf7503af06
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0247
Cannot use a negative size with stackalloc  
  
 A negative number was passed to a [stackalloc](http://msdn.microsoft.com/library/adc04c28-3ed2-4326-807a-7545df92b852) statement.  
  
 The following sample generates CS0247:  
  
```  
// CS0247.cs  
// compile with: /unsafe  
public class MyClass  
{  
   unsafe public static void Main()  
   {  
      int *p = stackalloc int [-30];   // CS0247  
   }  
}  
```