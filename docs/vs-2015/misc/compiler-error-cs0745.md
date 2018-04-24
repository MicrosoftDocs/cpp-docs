---
title: "Compiler Error CS0745 | Microsoft Docs"
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
  - "CS0745"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0745"
ms.assetid: 6ae77eb2-a940-43aa-a198-3042d144613a
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0745
Expected contextual keyword 'by'  
  
 The pattern for the `group` clause is `group...by` followed by an optional `into`, as shown in the following example:  
  
```  
string[] names = { "Bob", "Bill", "Jonetta", "Mary" };  
  
var query = from name in names  
            group name by name[0];  
```  
  
 or  
  
```  
var query2 = from name in names  
             group name by name[0] into g  
             //...additional query clauses  
```  
  
### To correct this error  
  
1.  Add the `by` keyword to the `group` clause.  
  
## Example  
 The following code generates CS0745:  
  
```  
// cs0745.cs  
using System;  
using System.Linq;  
  
public class C  
{  
    public static int Main()  
    {  
        string[] names = { "Bob", "Bill", "Jonetta", "Mary" };  
  
        var query = from name in names  
                    group name name[0]; // CS0745  
  
        return 1;  
    }  
}  
```  
  
## See Also  
 [LINQ Query Expressions](http://msdn.microsoft.com/library/40638f19-fb46-4d26-a2d9-a383b48f5ed4)   
 [group clause](http://msdn.microsoft.com/library/c817242e-b12c-4baa-a57e-73ee138f34d1)