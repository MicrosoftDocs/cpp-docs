---
title: "Compiler Error CS0744"
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
  - "CS0744"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0744"
ms.assetid: 7ce430d6-737a-4103-9116-d9a4a69f8af3
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
# Compiler Error CS0744
Expected contextual keyword 'equals'  
  
 The pattern for a `join` clause is `join`...`in`...`on`...`equals`, as shown in this example:  
  
```  
var query = from x in array1  
            join y in array2 on x equals y  
            select x;  
```  
  
### To correct this error  
  
1.  Add the `equals` keyword to the `join` clause.  
  
## Example  
 The following code generates CS0744:  
  
```  
// cs0744.cs  
using System;  
using System.Linq;  
  
public class C  
{  
    public static int Main()  
    {  
        int[] array1 = { 1, 2, 3 ,4, 5, 6,};  
        int[] array2 = { 5, 6, 7, 8, 9 };  
        var c = from x in array1  
                join y in array2 on x y // CS0744  
                select x;  
        return 1;  
    }  
}  
```  
  
## See Also  
 [LINQ Query Expressions](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)   
 [join clause](../Topic/join%20clause%20\(C%23%20Reference\).md)