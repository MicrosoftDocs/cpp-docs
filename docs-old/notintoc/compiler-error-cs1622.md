---
title: "Compiler Error CS1622"
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
  - "CS1622"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1622"
ms.assetid: 6b53a777-4cd8-423a-84ff-22ff588044d3
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
# Compiler Error CS1622
Cannot return a value from an iterator. Use the yield return statement to return a value, or yield break to end the iteration.  
  
 An iterator is a special function that returns a value via the yield statement rather than the return statement. For more information, see **iterators**.  
  
 The following sample generates CS1622:  
  
```  
// CS1622.cs  
// compile with: /target:library  
using System.Collections;  
  
class C : IEnumerable  
{  
   public IEnumerator GetEnumerator()  
   {  
      return (IEnumerator) this;  // CS1622  
      yield return this;   // OK  
   }  
}  
```