---
title: "Compiler Error CS1101"
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
  - "CS1101"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1101"
ms.assetid: d6fc8834-eadf-4497-b442-0751895e6764
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
# Compiler Error CS1101
The parameter modifier 'ref' cannot be used with 'this'.  
  
 When the `this` keyword modifies the first parameter of a static method, it signals to the compiler that the method is an extension method. No other modifiers are needed or allowed on the first parameter of an extension method.  
  
## Example  
 The following example generates CS1101:  
  
```  
// cs1101.cs  
// Compile with: /target:library  
public static class Extensions  
{  
    // No type parameters.  
        public static void Test(ref this int i) {} // CS1101  
  
    // Single type parameter.  
        public static void Test<T>(ref this T t) {}// CS1101  
  
    // Multiple type parameters.  
        public static void Test<T,U,V>(ref this U u) {}// CS1101  
}  
```  
  
## See Also  
 [Extension Methods](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [this](../Topic/this%20\(C%23%20Reference\).md)   
 [ref](../Topic/ref%20\(C%23%20Reference\).md)