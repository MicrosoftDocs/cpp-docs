---
title: "Compiler Error CS1576"
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
  - "CS1576"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1576"
ms.assetid: 3e39cb80-e7de-4c78-a22a-57e267121a96
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
# Compiler Error CS1576
The line number specified for #line directive is missing or invalid  
  
 The compiler detected an error with the value passed to the [#line](../Topic/%23line%20\(C%23%20Reference\).md) directive.  
  
 The following sample generates CS1576:  
  
```  
// CS1576.cs  
public class MyClass  
{  
   static void Main()  
   {  
      #line "abc.sc"         // CS1576  
      // try the following line instead  
      //#line  101 "abc.sc"  
      intt i;  // error will be reported on line 101  
   }  
}  
```