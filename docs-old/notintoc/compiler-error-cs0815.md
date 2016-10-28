---
title: "Compiler Error CS0815"
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
  - "CS0815"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0815"
ms.assetid: 8f055d34-9ee4-482e-9e79-8b3698c55cb4
caps.latest.revision: 8
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
# Compiler Error CS0815
Cannot assign 'expression' to an implicitly typed local  
  
 An expression that is used as the initializer for an implicitly typed variable must have a type. Because anonymous function expressions, method group expressions, and the null literal expression do not have a type, they are not appropriate initializers. An implicitly typed variable cannot be initialized with a null value in its declaration, although it can later be assigned a value of null.  
  
### To correct this error  
  
1.  Provide an explicit type for the variable.  
  
## Example  
 The following code generates CS0815:  
  
```  
// cs0815.cs  
class Test  
{  
    public static int Main()  
    {  
        var d = s => -1; // CS0815  
        var e = (string s) => 0; // CS0815  
        var p = null;//CS0815  
        var del = delegate(string a) { return -1; };// CS0815  
        return -1;  
    }  
}  
```  
  
## See Also  
 [Implicitly Typed Local Variables](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)