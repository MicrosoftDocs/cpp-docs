---
title: "Compiler Error CS1535 | Microsoft Docs"
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
  - "CS1535"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1535"
ms.assetid: 19f41e78-9aea-4575-abd0-60ddb927276f
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1535
Overloaded unary operator 'operator' takes one parameter  
  
 The definition of a unary [overloadable operator](http://msdn.microsoft.com/library/390d9d01-79fc-40ab-9ed3-0bf448da1b6a) must take one parameter.  
  
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