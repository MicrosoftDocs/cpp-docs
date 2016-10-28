---
title: "Compiler Error CS1105"
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
  - "CS1105"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1105"
ms.assetid: fcbd91ad-a76a-4b22-868d-16824fa96f85
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
# Compiler Error CS1105
Extension methods must be static.  
  
 Extension methods must be declared as static methods in a non-generic static class.  
  
## Example  
 The following example generates CS1105 because `Test` is not static:  
  
```  
// cs1105.cs  
// Compile with: /target:library  
public class Extensions  
{  
  
    // Single type parameter.  
        public void Test<T>(this System.String s) {} //CS1105  
  
}  
```  
  
## See Also  
 [Extension Methods](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [static](../Topic/static%20\(C%23%20Reference\).md)