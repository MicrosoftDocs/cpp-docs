---
title: "Compiler Error CS1949"
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
  - "CS1949"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1949"
ms.assetid: 959f553e-ac3d-43a1-b0a0-11e270f2ad64
caps.latest.revision: 6
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
# Compiler Error CS1949
The contextual keyword 'var' cannot be used in a range variable declaration.  
  
 A range variable is implicitly typed by the compiler. There is no need to use [var](../Topic/var%20\(C%23%20Reference\).md) with a range variable.  
  
### To correct this error  
  
1.  Remove the `var` keyword from in front of the range variable.  
  
## Example  
 The following example generates CS1949:  
  
```  
// cs1949.cs  
using System;  
using System.Linq;  
class Test  
{  
    static void Main()  
    {  
        var x = from var i in Enumerable.Range(1, 100) // CS1949  
        select i;  
    }  
}  
```  
  
## See Also  
 [LINQ Query Expressions](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)   
 [Introduction to LINQ Queries (C#)](../Topic/Introduction%20to%20LINQ%20Queries%20\(C%23\).md)