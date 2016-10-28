---
title: "Compiler Error CS1554"
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
  - "CS1554"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1554"
ms.assetid: 81e8d4ac-cdbf-4b75-8932-0bc271a8405c
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
# Compiler Error CS1554
Declaration is not valid; use '\<type> operator op (...' instead  
  
 The return type for a user-defined [operator](../Topic/operator%20\(C%23%20Reference\)2.md) must appear before the keyword operator.  
  
 The following sample generates CS1554:  
  
```  
// CS1554.cs  
class MyClass  
{  
   public static operator ++ MyClass (MyClass f)    // CS1554  
   // try the following line instead  
   // public static MyClass operator ++ (MyClass f)  
   {  
      return new MyClass ();  
   }  
  
   public static void Main()  
   {  
   }  
}  
```