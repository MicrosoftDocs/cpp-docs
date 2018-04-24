---
title: "Compiler Error CS0617 | Microsoft Docs"
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
  - "CS0617"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0617"
ms.assetid: a4363709-9846-4cb8-8772-f5a3ea8555ca
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0617
'reference' is not a valid named attribute argument because it is not a valid attribute parameter type  
  
 An attempt was made to access a [private](http://msdn.microsoft.com/library/654c0bb8-e6ac-4086-bf96-7474fa6aa1c8) member of an attribute class.  
  
## Example  
 The following sample generates CS0617.  
  
```  
// CS0617.cs  
using System;  
  
[AttributeUsage(AttributeTargets.Struct |   
                AttributeTargets.Class |  
                AttributeTargets.Interface)]  
public class MyClass : Attribute  
{  
   public int Name;  
  
   public MyClass (int sName)  
   {  
      Name = sName;  
      Bad = -1;  
      Bad2 = -1;  
   }  
  
   public readonly int Bad;  
   public int Bad2;  
}  
  
[MyClass(5, Bad=0)] class Class1 {}   // CS0617  
[MyClass(5, Bad2=0)] class Class2 {}  
```