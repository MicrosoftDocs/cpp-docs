---
title: "Compiler Error CS1007 | Microsoft Docs"
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
  - "CS1007"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1007"
ms.assetid: b56ee2c6-8e79-4b9b-8c59-194bdb22bc3e
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1007
Property accessor already defined  
  
 When you declare a [property](http://msdn.microsoft.com/library/f7f67b05-0983-4cdb-96af-1855d24c967c), you must also declare its accessor methods. However, a property cannot have more than one `get` accessor method or more than one `set` accessor method.  
  
## Example  
 The following sample generates CS1007:  
  
```  
// CS1007.cs  
public class clx  
{  
    public int MyProperty  
    {  
        get  
        {  
            return 0;  
        }  
        get   // CS1007, this is the second get method  
        {  
            return 0;  
        }  
    }  
  
    public static void Main() {}  
}  
```