---
title: "Compiler Error CS0128"
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
  - "CS0128"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0128"
ms.assetid: 35db9025-2bed-437f-a78a-f2862766bde2
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
# Compiler Error CS0128
A local variable named 'variable' is already defined in this scope  
  
 The compiler detected declarations of two local variables with the same name. For more information, see [Methods](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0128:  
  
```  
// CS0128.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public static void Main()  
      {  
         char i;  
         int i;   // CS0128  
      }  
   }  
}  
```