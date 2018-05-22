---
title: "Compiler Error CS0818 | Microsoft Docs"
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
  - "CS0818"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0818"
ms.assetid: e4941018-a10a-4636-98ea-aade29e45728
caps.latest.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0818
Implicitly typed locals must be initialized  
  
 An implicitly typed local variable must be initialized with a value at the same time that it is declared.  
  
### To correct this error  
  
1.  Assign a value to the variable or else give it an explicit type.  
  
## Example  
 The following code generates CS0818:  
  
```  
// cs0818.cs  
class A  
{  
    public static int Main()  
    {  
        var a; // CS0818  
        return -1;  
    }  
}  
```  
  
## See Also  
 [Implicitly Typed Local Variables](http://msdn.microsoft.com/library/b9218fb2-ef5d-4814-8a8e-2bc29b0bbc9b)