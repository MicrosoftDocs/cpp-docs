---
title: "Compiler Error CS0567"
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
  - "CS0567"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0567"
ms.assetid: 90aefbf9-d216-4eb4-96d4-44926fa23b1e
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
# Compiler Error CS0567
Interfaces cannot contain operators  
  
 Operators are not permitted in [interface](../Topic/interface%20\(C%23%20Reference\).md) definitions.  
  
 The following sample generates CS0567:  
  
```  
// CS0567.cs  
interface IA  
{  
   int operator +(int aa, int bb);   // CS0567  
}  
  
class Sample  
{  
   public static void Main()   
   {  
   }  
}  
```