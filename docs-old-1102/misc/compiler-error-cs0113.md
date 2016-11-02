---
title: "Compiler Error CS0113"
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
  - "CS0113"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0113"
ms.assetid: 43c5c0b7-67c0-45c1-8363-21c844c094f3
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
# Compiler Error CS0113
A member 'function' marked as override cannot be marked as new or virtual  
  
 It is mutually exclusive to mark a method with the [new](../Topic/new%20\(C%23%20Reference\).md) and [override](../Topic/override%20\(C%23%20Reference\).md) keywords.  
  
 The following sample generates CS0113:  
  
```  
// CS0113.cs  
namespace MyNamespace  
{  
   abstract public class MyClass  
   {  
      public abstract void Foo();  
   }  
  
   public class MyClass2 : MyClass  
   {  
      override new public void Foo()   // CS0113, remove new keyword  
      {  
      }  
  
      public static int Main()  
      {  
         return 0;  
      }  
   }  
}  
```