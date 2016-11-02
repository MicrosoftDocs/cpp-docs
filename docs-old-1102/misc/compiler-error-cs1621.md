---
title: "Compiler Error CS1621"
ms.custom: ""
ms.date: "10/25/2016"
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
ms.author: "wiwagn"
manager: "wpickett"
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
 [Iterators](../Topic/Iterators%20\(C%23%20and%20Visual%20Basic\).md)   
 [yield](../Topic/yield%20\(C%23%20Reference\).md)   
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(C%23%20Programming%20Guide\).md)   
 [Anonymous Methods](../Topic/Anonymous%20Methods%20\(C%23%20Programming%20Guide\).md)