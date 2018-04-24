---
title: "Compiler Error CS0742 | Microsoft Docs"
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
  - "CS0742"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0742"
ms.assetid: 078ee7af-17e4-4572-8fee-d97e09c9002b
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0742
A query body must end with a select clause or a group clause  
  
 A query expression must terminate with either a `select` clause or a `group` clause without a continuation.  
  
### To correct this error  
  
1.  Add a [select clause](http://msdn.microsoft.com/library/df01e266-5781-4aaa-80c4-67cf28ea093f) or [group clause](http://msdn.microsoft.com/library/c817242e-b12c-4baa-a57e-73ee138f34d1) to the query.  
  
## Example  
 The following code generates CS0742:  
  
```  
// cs0742.cs  
using System.Linq;  
public class Test  
{  
    public static int Main()  
    {  
        int[] array = { 1, 2, 3 };  
        var query = from num in array; // CS0742  
        return 1;  
    }  
}  
```  
  
 If the `group` clause uses the [into](http://msdn.microsoft.com/library/81ec62c1-f0b1-4755-8a31-959876e77f65) keyword to store the results of the grouping into a temporary identifier, it cannot be the last clause in a query. A `select` or second `group` clause is still required.  
  
## See Also  
 [LINQ Query Expressions](http://msdn.microsoft.com/library/40638f19-fb46-4d26-a2d9-a383b48f5ed4)