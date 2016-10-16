---
title: "Compiler Error CS0533"
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
  - "CS0533"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0533"
ms.assetid: f8b38c5a-d365-4081-a101-6282bdd19069
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
# Compiler Error CS0533
'derived-class member' hides inherited abstract member 'base-class member'  
  
 A base [class](../Topic/class%20\(C%23%20Reference\).md) method is hidden. Check the syntax of your declaration to see if it is correct.  
  
 For more information, see [base](../Topic/base%20\(C%23%20Reference\).md).  
  
 The following sample generates CS0533:  
  
```  
// CS0533.cs  
namespace x  
{  
   abstract public class a  
   {  
      abstract public void f();  
   }  
  
   abstract public class b : a  
   {  
      new abstract public void f();   // CS0533  
      // try the following lines instead  
      // override public void f()  
      // {  
      // }  
  
      public static void Main()  
      {  
      }  
   }  
}  
```