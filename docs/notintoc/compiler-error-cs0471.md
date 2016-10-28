---
title: "Compiler Error CS0471"
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
  - "CS0471"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0471"
ms.assetid: 3b666461-c57b-45f4-83d3-a23786e29ae9
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
# Compiler Error CS0471
The method 'name' is not a generic method. If you intended an expression list, use parentheses around the < expression.  
  
 This error is generated when your code contains an expression list without parentheses.  
  
## Example  
 The following example generates CS0471.  
  
```  
// CS0471.cs  
// compile with: /t:library  
class Test  
{  
    public void F(bool x, bool y) {}  
    public void F1()  
    {  
        int a = 1, b = 2, c = 3;  
        F(a<b, c>(3));    // CS0471  
        // To resolve, try the following instead:  
        // F((a<b), c>(3));  
    }  
}  
  
```