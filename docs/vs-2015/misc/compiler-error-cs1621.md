---
title: "Compiler Error CS1621 | Microsoft Docs"
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
  - "CS1621"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1621"
ms.assetid: 11b4fb94-0dd7-4484-99aa-e06eacc6a658
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1621
The yield statement cannot be used inside an anonymous method or lambda expression  
  
 The yield statement cannot be in an anonymous method block in an iterator.  
  
## Example  
 The following sample generates CS1621:  
  
```  
// CS1621.cs  
  
using System.Collections;  
  
delegate object MyDelegate();  
  
class C : IEnumerable  
{  
    public IEnumerator GetEnumerator()  
    {  
        MyDelegate d = delegate  
        {  
            yield return this; // CS1621  
            return this;  
        };  
        d();  
        // Try this instead:  
        // MyDelegate d = delegate { return this; };  
        // yield return d();  
    }  
  
    public static void Main()  
    {  
    }  
}  
```  
  
## See Also  
 [Iterators](http://msdn.microsoft.com/library/f45331db-d595-46ec-9142-551d3d1eb1a7)   
 [yield](http://msdn.microsoft.com/library/1089194f-9e53-46a2-8642-53ccbe9d414d)   
 [Lambda Expressions](http://msdn.microsoft.com/library/57e3ba27-9a82-4067-aca7-5ca446b7bf93)   
 [Anonymous Methods](http://msdn.microsoft.com/library/a62441fa-f0a3-4acb-9aa6-93762a635275)