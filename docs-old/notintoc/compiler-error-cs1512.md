---
title: "Compiler Error CS1512"
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
  - "CS1512"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1512"
ms.assetid: 50740d85-598d-478f-bfe3-e8c2e1a02ab8
caps.latest.revision: 11
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
# Compiler Error CS1512
Keyword 'base' is not available in the current context  
  
 The [base](../Topic/base%20\(C%23%20Reference\).md) keyword was used outside of a method, property, or constructor.  
  
 The following example generates CS1512:  
  
```  
// CS1512.cs  
using System;  
  
class Base {}  
  
class CMyClass : Base  
{  
    private String xx = base.ToString();   // CS1512  
    // Try putting this initialization in the constructor instead:  
    // public CMyClass()  
    // {  
    //    xx = base.ToString();  
    // }  
  
    public static void Main()  
    {  
        CMyClass z = new CMyClass();  
    }  
}  
```