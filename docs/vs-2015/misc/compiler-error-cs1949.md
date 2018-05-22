---
title: "Compiler Error CS1949 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1949"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1949"
ms.assetid: 959f553e-ac3d-43a1-b0a0-11e270f2ad64
caps.latest.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1949
The contextual keyword 'var' cannot be used in a range variable declaration.  
  
 A range variable is implicitly typed by the compiler. There is no need to use [var](http://msdn.microsoft.com/library/0777850a-2691-4e3e-927f-0c850f5efe15) with a range variable.  
  
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
 [LINQ Query Expressions](http://msdn.microsoft.com/library/40638f19-fb46-4d26-a2d9-a383b48f5ed4)   
 [Introduction to LINQ Queries (C#)](http://msdn.microsoft.com/library/37895c02-268c-41d5-be39-f7d936fa88a8)