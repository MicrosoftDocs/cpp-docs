---
title: "Compiler Error CS1529"
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
  - "CS1529"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1529"
ms.assetid: 672a6fd1-3a1f-422c-a29f-46f196d15211
caps.latest.revision: 10
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
# Compiler Error CS1529
A using clause must precede all other elements defined in the namespace except extern alias declarations  
  
 A [using](../Topic/using%20\(C%23%20Reference\).md) clause must appear first in a namespace.  
  
## Example  
 The following sample generates CS1529:  
  
```  
// CS1529.cs  
namespace X  
{  
    namespace Subspace  
    {  
        using Microsoft;  
  
        class SomeClass  
        {  
        };  
  
        using Microsoft;      // CS1529, place before class definition  
    }  
  
    using System.Reflection;  // CS1529, place before namespace 'Subspace'  
}  
  
using System;                 // CS1529, place at the beginning of the file  
```