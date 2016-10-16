---
title: "Compiler Error CS0549"
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
  - "CS0549"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0549"
ms.assetid: ae965019-9dee-4f28-9e9a-6f379bd0d757
caps.latest.revision: 8
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
# Compiler Error CS0549
'function' is a new virtual member in sealed class 'class'  
  
 A [sealed](../Topic/sealed%20\(C%23%20Reference\).md)[class](../Topic/class%20\(C%23%20Reference\).md) cannot be used as a base class.  Therefore, it is useless to have a virtual method in sealed class.  
  
 The following sample generates CS0549:  
  
```  
// CS0549.cs  
// compile with: /target:library  
sealed public class MyClass  
{  
   virtual public void TestMethod() {}   // CS0549  
   public void TestMethod2() {}   // OK  
}  
```