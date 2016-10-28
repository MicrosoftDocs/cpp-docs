---
title: "Compiler Error CS1553"
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
  - "CS1553"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1553"
ms.assetid: aec64251-b4ac-45c0-b143-7ebda138af6e
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
# Compiler Error CS1553
Declaration is not valid; use 'modifier operator \<dest-type> (...' instead  
  
 The return type for an [operator](../Topic/operator%20\(C%23%20Reference\)2.md) must immediately precede the parameter list, and *modifier* is either `implicit` or **explicit**.  
  
 The following sample generates CS1553:  
  
```  
// CS1553.cs  
class MyClass  
{  
   public static int implicit operator (MyClass f)   // CS1553  
   // try the following line instead  
   // public static implicit operator int (MyClass f)  
   {  
      return 6;  
   }  
  
   public static void Main()  
   {  
   }  
}  
```