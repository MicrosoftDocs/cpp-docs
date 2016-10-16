---
title: "Compiler Error CS0818"
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
  - "CS0818"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0818"
ms.assetid: e4941018-a10a-4636-98ea-aade29e45728
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
 [Implicitly Typed Local Variables](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)