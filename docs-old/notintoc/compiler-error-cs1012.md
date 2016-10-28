---
title: "Compiler Error CS1012"
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
  - "CS1012"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1012"
ms.assetid: 4acc5fe0-da47-4882-b7d8-557767d7cf03
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
# Compiler Error CS1012
Too many characters in character literal  
  
 An attempt was made to initialize a [char](../Topic/char%20\(C%23%20Reference\).md) constant with more than one character.  
  
 CS1012 can also occur when doing data binding. For example the following line will give an error:  
  
 `<%# DataBinder.Eval(Container.DataItem, 'doctitle') %>`  
  
 Try the following line instead:  
  
 `<%# DataBinder.Eval(Container.DataItem, "doctitle") %>`  
  
 The following sample generates CS1012:  
  
```  
// CS1012.cs  
class Sample  
{  
   static void Main()  
   {  
      char a = 'xx';   // CS1012  
      char a2 = 'x';   // OK  
      System.Console.WriteLine(a2);  
   }  
}  
```