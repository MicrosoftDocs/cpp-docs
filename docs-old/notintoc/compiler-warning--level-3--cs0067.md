---
title: "Compiler Warning (level 3) CS0067"
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
  - "CS0067"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0067"
ms.assetid: df75220b-0b93-45ec-8655-98d9333b0bb7
caps.latest.revision: 7
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
# Compiler Warning (level 3) CS0067
The event 'event' is never used  
  
 An [event](../Topic/event%20\(C%23%20Reference\).md) was declared but never used in the class in which it was declared.  
  
 The following sample generates CS0067:  
  
```  
// CS0067.cs  
// compile with: /W:3  
using System;  
delegate void MyDelegate();  
  
class MyClass  
{  
   public event MyDelegate evt;   // CS0067  
   // uncomment TestMethod to resolve this CS0067  
/*  
   private void TestMethod()  
   {  
      if (evt != null)  
         evt();  
   }  
*/  
   public static void Main()  
   {  
   }  
}  
```