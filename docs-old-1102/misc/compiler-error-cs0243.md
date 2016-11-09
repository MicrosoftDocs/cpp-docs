---
title: "Compiler Error CS0243"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0243"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0243"
ms.assetid: 2506e4cb-dc26-46b4-a58c-ab6bf1601144
caps.latest.revision: 10
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
# Compiler Error CS0243
The Conditional attribute is not valid on 'method' because it is an override method  
  
 The [Conditional](http://msdn.microsoft.com/en-us/e1c4913b-74d0-421a-8a6d-c14b3f0e68fb) attribute is not allowed on a method that is marked with the [override](../Topic/override%20\(C%23%20Reference\).md) keyword. For more information, see [Knowing When to Use Override and New Keywords](../Topic/Knowing%20When%20to%20Use%20Override%20and%20New%20Keywords%20\(C%23%20Programming%20Guide\).md).  
  
 The compiler never binds to override methods; it only binds to the base method and the common language runtime calls the override, as appropriate.  
  
 The following sample generates CS0243:  
  
```  
// CS0243.cs  
// compile with: /target:library  
public class MyClass  
{  
   public virtual void M() {}  
}  
  
public class MyClass2 : MyClass  
{  
   [System.Diagnostics.ConditionalAttribute("MySymbol")]   // CS0243  
   // remove Conditional attribute or remove override keyword  
   public override void M() {}  
}  
```