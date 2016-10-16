---
title: "Compiler Error CS1535"
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
  - "CS1535"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1535"
ms.assetid: 19f41e78-9aea-4575-abd0-60ddb927276f
caps.latest.revision: 9
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
# Compiler Error CS1535
Overloaded unary operator 'operator' takes one parameter  
  
 The definition of a unary [overloadable operator](../Topic/Overloadable%20Operators%20\(C%23%20Programming%20Guide\).md) must take one parameter.  
  
## Example  
 The following sample generates CS1535:  
  
```  
// CS1535.cs  
class MyClass  
{  
    // uncomment the method parameter to resolve CS1535  
    public static MyClass operator ++ (/*MyClass MC1*/)   // CS1535  
    {  
        return new MyClass();  
    }  
  
    public static int Main()  
    {  
        return 1;  
    }  
}  
```