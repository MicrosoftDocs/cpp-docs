---
title: "Compiler Error CS0653 | Microsoft Docs"
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
  - "CS0653"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0653"
ms.assetid: c94043b9-b5d9-4294-921d-a4aead124d44
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0653
Cannot apply attribute class 'class' because it is abstract  
  
 An [abstract](http://msdn.microsoft.com/library/b0797770-c1f3-4b4d-9441-b9122602a6bb) custom attribute class cannot be used as an attribute.  
  
 The following sample generates CS0653:  
  
```  
// CS0653.cs  
using System;  
  
public abstract class MyAttribute : Attribute  
{  
}  
  
public class My2Attribute : MyAttribute  
{  
}  
  
[My]   // CS0653  
// try the following line instead  
// [My2]  
class MyClass  
{  
   public static void Main()  
   {  
   }  
}  
```