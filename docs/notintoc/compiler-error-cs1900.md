---
title: "Compiler Error CS1900"
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
  - "CS1900"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1900"
ms.assetid: 08141138-bfea-4af3-a9a0-ec54cf2caa13
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
# Compiler Error CS1900
Warning level must be in the range 0-4  
  
 The [/warn](../Topic/-warn%20\(C%23%20Compiler%20Options\).md) compiler option can only take one of five possible values (0, 1, 2, 3, or 4). Any other value passed to **/warn** will result in CS1900.  
  
 The following sample generates CS1900:  
  
```  
// CS1900.cs  
// compile with: /W:5  
// CS1900 expected  
class x  
{  
   public static void Main()  
   {  
   }  
}  
```