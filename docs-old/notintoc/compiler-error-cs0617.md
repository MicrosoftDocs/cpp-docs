---
title: "Compiler Error CS0617"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0617"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0617"
ms.assetid: a4363709-9846-4cb8-8772-f5a3ea8555ca
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
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
# Compiler Error CS0617
'reference' is not a valid named attribute argument because it is not a valid attribute parameter type  
  
 An attempt was made to access a [private](../Topic/private%20\(C%23%20Reference\).md) member of an attribute class.  
  
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