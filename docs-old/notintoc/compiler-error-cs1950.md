---
title: "Compiler Error CS1950"
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
  - "CS1950"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1950"
ms.assetid: e37fb5b1-09e0-47a6-9db5-a48f90ea7bbb
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
# Compiler Error CS1950
The best overloaded Add method 'name' for the collection initializer has some invalid arguments.  
  
 To support collection initializers, a class must implement IEnumerable and have a public `Add` method. To initialize the type by using a collection initializer, the input parameter of the `Add` method must be compatible with the type of the object you are trying to add.  
  
### To correct this error  
  
-   Use a compatible type in the collection initializer.  
  
-   Modify the input parameter and/or accessibility of the `Add` method in the collection type.  
  
-   Add a new `Add` method with an input parameter that matches what you are passing in.  
  
-   Make your collection class generic so that it can have an `Add` method that accepts any type you pass in.  
  
## Example  
 The following example generates CS1950:  
  
```  
// cs1950.cs  
using System.Collections;  
class TestClass : CollectionBase  
{  
    public void Add(int c)  
    {  
    }  
}  
  
class Test  
{  
    static void Main()  
    {  
        TestClass t = new TestClass { "hi" }; // CS1950  
    }  
}  
```  
  
## See Also  
 [Object and Collection Initializers](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)