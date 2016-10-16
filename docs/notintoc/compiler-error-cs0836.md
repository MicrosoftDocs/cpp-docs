---
title: "Compiler Error CS0836"
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
  - "CS0836"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0836"
ms.assetid: 74a12271-1612-45aa-a398-7964e0269892
caps.latest.revision: 7
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
# Compiler Error CS0836
Cannot use anonymous type in a constant expression.  
  
 The only things allowed in a constant expression are named constants, literals, and mathematical expressions that combine constant expressions.  
  
### To correct this error  
  
1.  Make the anonymous type a named type.  
  
## Example  
 The following example shows one way to generate CS0836:  
  
```  
// cs0836.cs  
using System;  
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]  
public class A : Attribute  
{  
    public A(object obj)  
    {  
    }  
}  
  
[A(new { })] // CS0836  
public class B  
{  
}  
  
public class Test  
{  
    public static int Main()  
    {          
        return 0;  
    }  
}  
```